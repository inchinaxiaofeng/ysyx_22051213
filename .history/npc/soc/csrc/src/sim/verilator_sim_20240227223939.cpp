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
    env_cpu.csr[0]  = sim_cpu->csrDebug_mstatus;
    env_cpu.csr[1]  = sim_cpu->csrDebug_mtvec;
    env_cpu.csr[2]  = sim_cpu->csrDebug_mepc;
    env_cpu.csr[3]  = sim_cpu->csrDebug_mcause;
    // Pipeline Trace
// #ifdef PIPELINE_TRACE
	env_cpu.if_id_pc		= sim_cpu->pipelineTrace_if_id_pc_pc;
	env_cpu.if_id_instr		= sim_cpu->pipelineTrace_if_id_instr_instr;
	env_cpu.if_id_pcEnable	= sim_cpu->pipelineTrace_if_id_pcEnable;
	env_cpu.id_ex_pc		= sim_cpu->pipelineTrace_id_ex_pc_pc;
	env_cpu.id_ex_instr		= sim_cpu->pipelineTrace_id_ex_instr_instr;
	env_cpu.id_ex_pcEnable	= sim_cpu->pipelineTrace_id_ex_pcEnable;
	env_cpu.ex_ls_pc		= sim_cpu->pipelineTrace_ex_ls_pc_pc;
	env_cpu.ex_ls_instr		= sim_cpu->pipelineTrace_ex_ls_instr_instr;
	env_cpu.ex_ls_pcEnable	= sim_cpu->pipelineTrace_ex_ls_pcEnable;
	env_cpu.ls_wb_pc		= sim_cpu->pipelineTrace_ls_wb_pc_pc;
	env_cpu.ls_wb_instr		= sim_cpu->pipelineTrace_ls_wb_instr_instr;
	env_cpu.ls_wb_pcEnable	= sim_cpu->pipelineTrace_ls_wb_pcEnable;
	env_cpu.rf_pc			= sim_cpu->pipelineTrace_rf_pc_pc;
	env_cpu.rf_instr		= sim_cpu->pipelineTrace_rf_instr_instr;
	env_cpu.rf_pcEnable		= sim_cpu->pipelineTrace_rf_pcEnable;
// #endif

#ifdef JUMP_TRACE
    env_cpu.dnpc = sim_cpu->jumpTrace_dynamic_pc;
    env_cpu.instr_jump = sim_cpu->jumpTrace_instr_jump;
    env_cpu.instr_branch = sim_cpu->jumpTrace_instr_branch;
    env_cpu.instr_pcPlusSrc = sim_cpu->jumpTrace_instr_pcPlusSrc;
    env_cpu.idu_pcSrc = sim_cpu->jumpTrace_idu_pcSrc;
    env_cpu.bruSrcA = sim_cpu->jumpTrace_bruSrcA;
    env_cpu.bruSrcB = sim_cpu->jumpTrace_bruSrcB;
    env_cpu.bruOutC = sim_cpu->jumpTrace_bruOutC;
    env_cpu.bruCtrl = sim_cpu->jumpTrace_bruCtrl;
#endif

    env_cpu.instr = sim_cpu->debug_instr_instr;
    env_cpu.pc_commit = sim_cpu->debug_commit_pc;
    env_cpu.pc_dynamic = sim_cpu->debug_dynamic_pc;

    env_cpu.stallF = sim_cpu->debug_hazard_stallF;
    env_cpu.stallD = sim_cpu->debug_hazard_stallD;
    env_cpu.flushE = sim_cpu->debug_hazard_flushE;
    env_cpu.exu_forwardA = 
        sim_cpu->debug_hazard_hu_exu_ctrl_forwardA;
    env_cpu.exu_forwardB =
        sim_cpu->debug_hazard_hu_exu_ctrl_forwardB;
    env_cpu.idu_forwardA =
        sim_cpu->debug_hazard_hu_idu_ctrl_forwardA;
    env_cpu.idu_forwardB = 
        sim_cpu->debug_hazard_hu_idu_ctrl_forwardB;
    
//    printf("alu_srcA:%016lx ", sim_cpu->debug_alu_srcA_data);
//    printf("alu_srcB:%016lx\n", sim_cpu->debug_alu_srcB_data);
//    printf("ALUE:%016lx ", sim_cpu->debug_alu_data_E_data);
//    printf("ALUM:%016lx ", sim_cpu->debug_probe_data);
//    printf("ALUW:%016lx\n", sim_cpu->debug_alu_data_W_data);
//    printf("IDU_Forward_A:%d ", sim_cpu->debug_forward_idu_A_data);
//    printf("IDU_Forward_B:%d ", sim_cpu->debug_forward_idu_B_data);
//    printf("EXU_Forward_A:%d ", sim_cpu->debug_forwardA_data);
//    printf("EXU_Forward_B:%d\n", sim_cpu->debug_forwardB_data);
//    printf("rdD:%d ", sim_cpu->debug_rdD_data);
//    printf("rdE:%d ", sim_cpu->debug_rdE_data);
//    printf("rdM:%d ", sim_cpu->debug_rdM_data);
//    printf("rdW:%d\n", sim_cpu->debug_rdW_data);
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