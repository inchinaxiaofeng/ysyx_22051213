#include <sim/verilator_sim.h>
#include <isa/riscv64/riscv64.h>
#include <isa.h>

VerilatedContext *contextp = NULL;
#ifdef VCD_TRACE
VerilatedVcdC *tfp = NULL;
#endif
VSimTop *sim_cpu = NULL;

extern CPU_state env_cpu;

inline void get_debug (CPU_state *state) {
	env_cpu.commit = sim_cpu->io_commit;
	env_cpu.pc_commit = sim_cpu->io_pc;
    env_cpu.gpr[0]  = sim_cpu->io_gpr_regs_0;
    env_cpu.gpr[1]  = sim_cpu->io_gpr_regs_1;
    env_cpu.gpr[2]  = sim_cpu->io_gpr_regs_2;
    env_cpu.gpr[3]  = sim_cpu->io_gpr_regs_3;
    env_cpu.gpr[4]  = sim_cpu->io_gpr_regs_4;
    env_cpu.gpr[5]  = sim_cpu->io_gpr_regs_5;
    env_cpu.gpr[6]  = sim_cpu->io_gpr_regs_6;
    env_cpu.gpr[7]  = sim_cpu->io_gpr_regs_7;
    env_cpu.gpr[8]  = sim_cpu->io_gpr_regs_8;
    env_cpu.gpr[9]  = sim_cpu->io_gpr_regs_9;
    env_cpu.gpr[10] = sim_cpu->io_gpr_regs_10;
    env_cpu.gpr[11] = sim_cpu->io_gpr_regs_11;
    env_cpu.gpr[12] = sim_cpu->io_gpr_regs_12;
    env_cpu.gpr[13] = sim_cpu->io_gpr_regs_13;
    env_cpu.gpr[14] = sim_cpu->io_gpr_regs_14;
    env_cpu.gpr[15] = sim_cpu->io_gpr_regs_15;
    env_cpu.gpr[16] = sim_cpu->io_gpr_regs_16;
    env_cpu.gpr[17] = sim_cpu->io_gpr_regs_17;
    env_cpu.gpr[18] = sim_cpu->io_gpr_regs_18;
    env_cpu.gpr[19] = sim_cpu->io_gpr_regs_19;
    env_cpu.gpr[20] = sim_cpu->io_gpr_regs_20;
    env_cpu.gpr[21] = sim_cpu->io_gpr_regs_21;
    env_cpu.gpr[22] = sim_cpu->io_gpr_regs_22;
    env_cpu.gpr[23] = sim_cpu->io_gpr_regs_23;
    env_cpu.gpr[24] = sim_cpu->io_gpr_regs_24;
    env_cpu.gpr[25] = sim_cpu->io_gpr_regs_25;
    env_cpu.gpr[26] = sim_cpu->io_gpr_regs_26;
    env_cpu.gpr[27] = sim_cpu->io_gpr_regs_27;
    env_cpu.gpr[28] = sim_cpu->io_gpr_regs_28;
    env_cpu.gpr[29] = sim_cpu->io_gpr_regs_29;
    env_cpu.gpr[30] = sim_cpu->io_gpr_regs_30;
    env_cpu.gpr[31] = sim_cpu->io_gpr_regs_31;
    env_cpu.csr[0]  = sim_cpu->io_csr_regs_0;
    env_cpu.csr[1]  = sim_cpu->io_csr_regs_1;
    env_cpu.csr[2]  = sim_cpu->io_csr_regs_2;
    env_cpu.csr[3]  = sim_cpu->io_csr_regs_3;
}

void sim_init() {
	printf(FRONT_FONT "init cpu sim..." END_FONT "\n");
	contextp = new VerilatedContext;
#ifdef VCD_TRACE
	printf(FRONT_FONT "\tinit the vcd..." END_FONT "\n");
	tfp = new VerilatedVcdC;
#endif
	sim_cpu = new VSimTop;
	contextp->traceEverOn(true);
#ifdef VCD_TRACE
	sim_cpu->trace(tfp, 5);
	tfp->open("/home/marinatoo/ysyx-workbench/npc/log/wave/sim_wave.vcd");
	printf(FRONT_FONT "\tDONE!" END_FONT "\n");
#endif
	printf(FRONT_FONT "DONE!" END_FONT "\n");
}

static inline void run_sim_step(int _clock) {
	sim_cpu->clock = _clock;
	sim_cpu->eval();

#ifdef VCD_TRACE
	contextp->timeInc(1);
	tfp->dump(contextp->time());
#endif
}

void run_sim_module_cycle() {
    run_sim_step(1);
    get_debug(&env_cpu);
    run_sim_step(0);
    get_debug(&env_cpu);
}

void reset_sim_module(int num) {
    printf(FRONT_FONT "reset sim module..." END_FONT "\n");
    sim_cpu->reset = 1;
    while (num-- > 0) {
        sim_cpu->clock = 0;
        sim_cpu->eval();
//        env_cpu.pc = sim_cpu->io_iFetch_oPC;
#ifdef VCD_TRACE
        contextp->timeInc(1);
        tfp->dump(contextp->time());
#endif

        sim_cpu->clock = 1;
        sim_cpu->eval();
//        env_cpu.pc = sim_cpu->io_iFetch_oPC;
#ifdef VCD_TRACE
        contextp->timeInc(1);
        tfp->dump(contextp->time());
#endif

        sim_cpu->clock = 0;
        sim_cpu->eval();
//        env_cpu.pc = sim_cpu->io_iFetch_oPC;
#ifdef VCD_TRACE
        contextp->timeInc(1);
        tfp->dump(contextp->time());
#endif

    printf(FRONT_FONT "DONE!" END_FONT "\n");
    }
    sim_cpu->reset = 0;
}

void sim_final() {
#ifdef VCD_TRACE
    tfp->close();
#endif
    sim_cpu->final();
}