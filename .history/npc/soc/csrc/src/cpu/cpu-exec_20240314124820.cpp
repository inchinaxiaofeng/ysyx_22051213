#include <common.h>
#include <isa.h>
#include <memory/paddr.h>
#include <isa/riscv64/riscv64.h>
#include <sim/verilator_sim.h>
#include <cpu/exec.h>
#include <device/device.h>
// #include <cpu/cpu.h>
// #include <cpu/decode.h>
#include <cpu/difftest.h>
// #include <local.h>
// #include <elf.h>
#include <monitor/sdb.h>

#define MAX_INST_TO_PRINT 10
#define INSTR_MASK 0x11111111

CPU_state env_cpu = {};
uint64_t g_nr_guest_inst = 0;
uint64_t g_nr_guest_cycle_num = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

#ifdef PC_INSTR_RINGBUF
typedef struct {
    vaddr_t pc;
    uint32_t instr;
} PC_Instr;

PC_Instr pc_instr_ringbuf[RINGBUF_SIZE] = { 0 };
uint64_t ringbuf_index = 0;

void ringbuf_load(PC_Instr _this) {
    strcpy(pc_instr_ringbuf[ringbuf_index], _this);
    ringbuf_index++;
    if (ringbuf_index = RINGBUF_SIZE) ringbuf_index = 0;
    return;
}

void ringbuf_display() {
    for (size_t i = 0; i < RINGBUF_SIZE; i++) {
    }
}
#endif

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
    if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
    if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
#ifdef CONFIG_DIFFTEST
    if (env_cpu.commit) {
		difftest_step(env_cpu.pc, env_cpu.pc_commit);
	} else if (RESET_VECTOR == env_cpu.pc_commit) {
		difftest_reg_init();
	} else {
        printf("SKIP\n");
	}
	update_delay_bit();
#endif
#ifdef CONFIG_WATCHPOINT
    if (check_watchpoint()) { sim_state.state = SIM_STOP; }
#endif
}
// uint64_t g_nr_guest_inst = 0;
// static uint64_t g_timer = 0; // unit: us
// static bool g_print_step = false;

// void device_update();
// 
// static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
// #ifdef CONFIG_ITRACE_COND
//     if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
// #endif
//     if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
//     IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc)); 
// }

static void exec_once() {
    isa_exec_once();
    if (0x00100073 == env_cpu.instr) { assert(0); SIMTRAP(env_cpu.pc_commit, 0); }// a0
}

static void execute(uint64_t n) {
    for (; n > 0; n--) {
        exec_once();
        if(env_cpu.commit) g_nr_guest_inst++;
        g_nr_guest_cycle_num++;
        trace_and_difftest();
        if (SIM_RUNNING != sim_state.state) break;
        IFDEF(CONFIG_DEVICE, device_update());
        IFDEF(BETTER_OUTPUT, printf("\n"));
    }
}

static void statistic() {
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
    Log("host time spent = " NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
    Log("total guest cycle = " NUMBERIC_FMT, g_nr_guest_cycle_num);
    Log("commit rate = %f", (float)g_nr_guest_inst/(float)g_nr_guest_cycle_num);
    if (0 < g_timer) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
    IFDEF(IRINGBUF, iringbuf_display());
    statistic();
}

/* Simulate how the CPU works */
void cpu_exec(uint64_t n) {
	switch (sim_state.state) {
	case SIM_END: case SIM_ABORT:
	    printf("Program execution has ended. To restart the program, exit SIM and run again.\n");
	    return;
	default: sim_state.state = SIM_RUNNING;
	}

	uint64_t timer_start = get_time();

	execute(n);

	uint64_t timer_end = get_time();
	g_timer += timer_end - timer_start;

	switch (sim_state.state) {
	case SIM_RUNNING: sim_state.state = SIM_STOP; break;
	case SIM_ABORT:
//	printf("ABORT:\n");
//	isa_reg_display();
	case SIM_END:
		Log("sim: %s at pc = " FMT_WORD,
			(SIM_ABORT == sim_state.state ? ANSI_FMT("ABORT", ANSI_FG_RED) :
			 (0 == sim_state.halt_ret ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
			  ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
			sim_state.halt_pc);
		// fall through
	case SIM_QUIT: statistic();
	}
}