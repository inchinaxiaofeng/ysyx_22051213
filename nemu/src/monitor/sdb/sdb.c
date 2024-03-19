/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include <sys/mman.h>
#include "sdb.h"

#define __REGION_CMD_FUNCT_DECLEAR__
#define __REGION_CMD_FUNCT_ACCOMPLISH__

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

#ifdef __REGION_CMD_FUNCT_DECLEAR__

static int cmd_c(char *args);

static int cmd_q(char *args);

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int cmd_p(char *args);

static int cmd_w(char *args);

static int cmd_d(char *args);

static int cmd_b(char *args);

#endif

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "[si N]. Execute N instructions in a single step and then pause execution. When N is not given, the default is 1", cmd_si },
  { "info", "[info SUBCMD]. Print [r]egister status. Print [w]atch point info. Pirnt [a]ll if no arg given.", cmd_info },
  { "x", "[x N EXPR]. Figure out the value of EXPR, use it as the starting mem address, then output the result in hex form as N consecutive 4-bytes", cmd_x },
  { "p", "[p EXPR]. Figure out the value of EXPR", cmd_p },
  { "w", "[w EXPR]. Pause program execution when the value of the expression EXPR changes", cmd_w },
  { "d", "[d N]. Delete the watch point with the serial number N", cmd_d },
  { "b", "[b ADDR]. Set a break point in [ADDR], which requires 64bits", cmd_b}
};

#define NR_CMD ARRLEN(cmd_table)

#ifdef __REGION_CMD_FUNCT_ACCOMPLISH__

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

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args) {
  /* extract the first argument*/
  char *arg = strtok(NULL, " ");
  uint64_t n;

  if (NULL == arg) n = 1; /* no argument given */
  else {
    // 判断字符串中所有字符是否都是数字
    for (size_t i = 0; arg[i] != '\0'; i++) {
      if (!isdigit(arg[i])) {
        Log("The parameter is illegal and requires the parameter [N] to be of type uint64 in decimal.");
        return 0;
      }
    }
    // 将字符串转换为uint64_t型的数字
    n = strtoul(arg, NULL, 10);
	  // n不能越界   
    if (!(n > 0 && n <= 9223372036854775807)) {
      Log("The parameter is illegal and requires the parameter [N] range from 1 to 9223372036854775807.");
      return 0;
    }
  }

  cpu_exec(n);

  return 0;
}

static int cmd_info(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  /* no argument given, print all info. */
  if (NULL == arg) {
    isa_reg_display();
    watchpoint_display();
    return 0;
  }
  else if(!isalpha(arg[0])) {  // 合法性判断
    Log("The parameter is inllegal and requires the first character of [SUBCMD] is alphabet.");
    return 0;
  }
  // 获取arg第一个参数的第一个字符作为选项
  switch (arg[0])
  {
    case 'r':
      isa_reg_display();
      break;
    case 'w':
      watchpoint_display();
      break;
    default:
      printf("Unknown option.\n");
      break;
  }
  
  return 0;
}

static int cmd_x(char *args) {
  char *arg = strtok(NULL, " ");
  if (NULL == arg) {
    // Log("No args are given.");
    printf("\033[0;31mNo exprs are given.\n\033[0m");
    return 0;
  }
  // 获取使用sscanf获取num和base
  uint64_t num;
  paddr_t base = 0x0000000080000000;
  bool success = true;
  // if (!sscanf(arg, "%lu", &num) || !sscanf(arg+strlen(arg)+1, "%i", &base)) {
  base = expr(arg+strlen(arg)+1, &success);
  if (!sscanf(arg, "%lu", &num) || !success) {
    printf("\033[0;31mThe arguments should be given as: \033[1;33mx [N] [EXPR].\n\033[0m");
    return 0;
  }
  if (!success) {
    Log("Expr() not success.");
    return 0;
  }
  // FIXME:[KISS]记录：在num输入的数字大过一定值或位数后，base也会被赋予一定的值。在此假定base的值不会引起奇怪的bug【可能吧】
  if (num == 0 || base == 0x0000000000000000) {
    Log("The arguments is illigal. Num:%lu. Base:%x", num, base);
    return 0;
  }
  
  for (size_t i = 0; i < num; i++)
  {
    if (0==i%4)
    { // 使用Unicode而非ASCI转义码来输出格式
      printf("\n\033[1;33m[INFO] \033[1;36m%p: \t", (void*)(base + i * 4)); // 将地址值强制转换为void*类型，并使用%p格式化输出，可以避免因为使用错误的格式化字符串导致的安全问题。
    }

    // int prot = PROT_READ;
    for (size_t j = 0; j < 4; j++)
    {    
      uint8_t* pos = guest_to_host(base + i * 4 + j); // FIXME：当我输入的N位数大于三时仍然可以执行。当我输入的地址不合法时将会直接崩溃
      // if (0 == mprotect(pos, 4, prot))
      printf("\033[0m%.2x ", *pos);
      // else {
      //   printf("\033[0;31mCannot access memory at address: %p\n\033[0m", pos);
      //   return 0;
      // }
    }
    printf("\t");
  }
  printf("\n");
  return 0;
}

static int cmd_p(char *args) { // 这里之所以不进行分割，是因为后面的expr处理是以'\0'为结尾的。而strtok函数会在分割的各个字串末尾添加'\0'
  if (NULL == args) { // FIXME:如果解奇怪的地址，就会导致nemu崩溃
    printf("\033[0;31mNo expr is given.\n\033[0m");
    return 0;
  }
  bool success = true;
  word_t result = expr(args, &success);
  if (!success) {
    Log("Expr() not success.");
    return 0;
  }
  // printf("\033[3;33mDEC:\033[0m\t%s = %d\n\033[3;33mHEX:\033[0m\t%s = 0x%x\n", args, result, args, result);
  printf("\033[3;33mDEC:\033[0m = %ld\n\033[3;33mHEX:\033[0m = 0x%lx\n", result, result);
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

static int cmd_d(char *args) {
  if (NULL == args) {
    printf("\033[0;31mNo arg is given\n\033[0m");
    return 0;
  }

  int NO;
  if (EOF == sscanf(args, "%d", &NO)) {
    printf("\033[0;31margs should be a NUM\n\033[0m");
  }
  free_wp_NO(NO);
  return 0;
}

static int cmd_b(char *args) {
  if (NULL == args) {
    printf("\033[0;31mNo expr is given.\n\033[0m");
    return 0;
  }
  
  printf("Please use [w] to replace this.\n");
  return 0;
}

#endif

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}