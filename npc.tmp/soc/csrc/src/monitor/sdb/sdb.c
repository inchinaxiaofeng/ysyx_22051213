#include <cpu/exec.h>
#include <cpu/difftest.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include <monitor/sdb.h>
#include <monitor/expr.h>
#include <isa.h>

static int is_batch_mode = false;

void init_regex();

// readline.h
static char* rl_gets() {
    static char *line_read = NULL;

    if (line_read) {
        free(line_read);
        line_read = NULL;
    }

    line_read = readline("(sim) ");

    if (line_read && *line_read) {
        add_history(line_read);
    }

    return line_read;
}

static int cmd_c(char *);
static int cmd_q(char *);
static int cmd_help(char *);
static int cmd_si(char *);
static int cmd_info(char *);
static int cmd_trace_help(char *);
static int cmd_x(char *);
static int cmd_p(char *);
static int cmd_w(char *);

static struct {
    const char *name;
    const char *description;
    int (*handler)(char *);
} cmd_table[] = {
    { "help", "Display information about all supported commands.", cmd_help },
    { "c", "Continue the execution of the program.", cmd_c },
    { "q", "Exit SIM", cmd_q },
    { "si", "[si N]. Execute N instructions in a single step and then pause execution. When N is not given, the default is 1", cmd_si },
    { "info", "[info SUBCMD]. Print [r]egister status. Print [w]atch point info. Print [a]ll if no arg given.", cmd_info },
    { "traceHelp", "[traceHelp]. Display information about all trace output.", cmd_trace_help },
    { "x", "[x EXPR]. Figure out the value of EXPR, use it as the starting mem address, then output the result int hex form as N consecutive 4-bytes", cmd_x },
    { "p", "[p EXPR]. Figure out the value of EXPR", cmd_p },
	{ "w", "[w EXPR]. Pause program execution when the value of the expression EXPR changes", cmd_w }
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_c(char *args) {
    cpu_exec(-1);
    return 0;
}

static int cmd_q(char *args) {
    return -1;
}

static int cmd_help(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (NULL == arg) {
        /* no argument given */
        for (i = 0; i < NR_CMD; i++) {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    } else {
        for (i = 0; i < NR_CMD; i++) {
            if (0 == strcmp(arg, cmd_table[i].name)) {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("Unknown command '%s'\n", arg);
    }

    return 0;
}

static int cmd_si(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    uint64_t n;

    if (NULL == arg) n = 1; /* no argument given */
    else {
        // 判斷字符串中所有字符是否都爲數字
        for (size_t i = 0; '\0' != arg[i]; i++) {
            if (!isdigit(arg[i])) {
                Log("The parameter is illegal and requires the parameter [N] to be of type uint64 in decimal.");
                return 0;
            }
        }
        // 將字符串轉換爲uint64_t類型數字
        n = strtoul(arg, NULL, 10);
        // n不能越界
        if (!(0 < n && 9223372036854775807 >= n)) {
            Log("The parameter is illegal and requires the parameter [N] range from 1 to 9223372036854775807.");
            return 0;
        }
    }
    
    cpu_exec(n);

    return 0;
}

static int cmd_info(char *args) {
    /* extrace the first argument */
    char *arg = strtok(NULL, " ");
    /* no argument given, print all info. */
    if (NULL == arg) {
        IFDEF(CONFIG_DIFFTEST, ref_reg_display());
        isa_reg_display();
		watchpoint_display();
        return 0;
    } else if(!isalpha(arg[0])) {
		Log("The parameter is illegal and requires the first character of [SUBCMD] is alphabet.");
		return 0;
    }

	switch (arg[0])
	{
		case 'r': isa_reg_display(); break;
		case 'w': watchpoint_display(); break;
		default: printf("Unknown option.\n"); break;
	}

    return 0;
}

static int cmd_trace_help(char *args) {
    /* Needn't to extracce the arguments */
    IFDEF(PC_TRACE, printf(
        "Here is Core sim module for difftest:"
        "(pc_commit(not run yet), gpr(pc_commit-1))\n"
        "Here is Core module:"
        "(pc(run yet), gpr(pc-T))\n"
        "Here is NEMU sim module:"
        "(pc(not run yet), gpr(pc-1))\n"
        "The PC_TRACE tracing the pc_val AFTER a cycle.\n"
        "[pc_commit] is provided by the val "
        "right next be written to register, "
        "and its cycle is just after the cycle "
        "when the current instruction's execution result "
        "is written to the register file.\n"
        "[pc_dynamic] is provided by the driving port "
        "of the PC register and will be written to "
        "the PC register on the next rising edge arrival.\n"
    ));

    return 0;
}

static int cmd_x(char *args) {
    char *arg = strtok(NULL, " ");
    if (NULL == arg) {
        printf("\033[0;31mNo exprs are given.\n\033[0m");
        return 0;
    }
    // get num and base through sscanf
    uint64_t num;
    paddr_t addr = CONFIG_MBASE;//TODO
    bool success = true;
    addr = expr(arg+strlen(arg)+1, &success);

    if (!sscanf(arg, "%lu", &num) || !success) {
        printf("\033[0;31mThe argument should be given as: \033[1;33mx [N] [EXPR].\n\033[0m");
        return 0;
    }
    if (!success) {
        Log("Expr() not success.");
        return 0;
    }
    // FIXME: Here should check the address whether out of the range 
    // that between 0x8000_0000 and 0x87ff_ffff
    if (num == 0 || addr == 0x0) {
        Log("The arguments is illigal. Num:%lu. Addr:%x", num, addr);
        return 0;
    }

    for (size_t i = 0; i < num; i++) {
        if (0 == i%4) {
            printf("\n\033[1;33m[INFO] \033[1;36m%p: \t\033[0m",
                (void *)(addr + i * 4));
        }

        for (size_t j = 0; j < 4; j++) {
            uint8_t* pos = guest_to_host(addr + i * 4 + j);
			if (0 == *pos) printf("\033[2;39m%.2x \033[0m", *pos);
			else printf("\033[0m%.2x ", *pos);
        }
        printf("\t");
    }

    return 0;
}

static int cmd_p(char *args) {
    if (NULL == args) {
        printf("\033[0;31mNo expr is given.\n\033[0m");
        return 0;
    }
    bool success = true;
    word_t result = expr(args, &success);
    if (!success) {
        Log("Expr() not success.");
        return 0;
    }
    printf("\033[3;33mDEC:\033[0m = %ld\n"
           "\033[3;33mHEX:\033[0m = 0x%lx\n",
            result, result
    );
    return 0;
}

static int cmd_w(char *args) {
	if (NULL == args) {
		printf("\033[0;31mNo arg is given\n\033[0m");
		return 0;
	}
	bool success = true;
	WP *point = new_wp(args, &success);
	if (!success) {
		printf("Some thing wrong happend!\n");
		free_wp_NO(point->NO);
	} else {
		printf("Create a \033[1;36mWatchPoint(NO.%d)\033[0m: %s\n", point->NO, point->condation);
	}
	return 0;

}

void sdb_set_batch_mode() {
    is_batch_mode = true;
}

void sdb_mainloop() {
    if (is_batch_mode) {
        cmd_c(NULL);
        return;
    }

    for (char *str = 0; NULL != (str = rl_gets());) {
        char *str_end = str + strlen(str);

        /* extrace the first token as the command */
        char *cmd = strtok(str, " ");
        if (NULL == cmd) { continue; }

        /* treat the remaining string as the arguments, 
         * which may need further parsing
         */
        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end) {
            args = NULL;
        }

// #ifdef CONFIG_DEVICE
//         extern void sdl_clear_event_queue();
//         sdl_clear_event_queue();
// #endif

        int i;
        for (i = 0; NR_CMD > i; i++) {
            if (0 == strcmp(cmd, cmd_table[i].name)) {
                if (0 > cmd_table[i].handler(args)) { return; }
                break;
            }
        }

        if (NR_CMD == i) { printf("Unknown command '%s' =\n", cmd); }
    }
}

void init_sdb() {
    /* Compile the regular expressions. */
    Log("Init sdb...");
	init_regex();
	Log("Init watchpoint..");
	init_wp_pool();
}