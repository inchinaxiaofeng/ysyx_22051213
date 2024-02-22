// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopMain.h"
#include "VTopMain__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTopMain::VTopMain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTopMain__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , debug_hazard_stallF{vlSymsp->TOP.debug_hazard_stallF}
    , debug_hazard_stallD{vlSymsp->TOP.debug_hazard_stallD}
    , debug_hazard_flushE{vlSymsp->TOP.debug_hazard_flushE}
    , debug_hazard_hu_exu_ctrl_forwardA{vlSymsp->TOP.debug_hazard_hu_exu_ctrl_forwardA}
    , debug_hazard_hu_exu_ctrl_forwardB{vlSymsp->TOP.debug_hazard_hu_exu_ctrl_forwardB}
    , debug_hazard_hu_idu_ctrl_forwardA{vlSymsp->TOP.debug_hazard_hu_idu_ctrl_forwardA}
    , debug_hazard_hu_idu_ctrl_forwardB{vlSymsp->TOP.debug_hazard_hu_idu_ctrl_forwardB}
    , debug_forwardA_data{vlSymsp->TOP.debug_forwardA_data}
    , debug_forwardB_data{vlSymsp->TOP.debug_forwardB_data}
    , debug_forward_idu_A_data{vlSymsp->TOP.debug_forward_idu_A_data}
    , debug_forward_idu_B_data{vlSymsp->TOP.debug_forward_idu_B_data}
    , debug_rdD_data{vlSymsp->TOP.debug_rdD_data}
    , debug_rdE_data{vlSymsp->TOP.debug_rdE_data}
    , debug_rdM_data{vlSymsp->TOP.debug_rdM_data}
    , debug_rdW_data{vlSymsp->TOP.debug_rdW_data}
    , pipelineTrace_if_id_pcEnable{vlSymsp->TOP.pipelineTrace_if_id_pcEnable}
    , pipelineTrace_id_ex_pcEnable{vlSymsp->TOP.pipelineTrace_id_ex_pcEnable}
    , pipelineTrace_ex_ls_pcEnable{vlSymsp->TOP.pipelineTrace_ex_ls_pcEnable}
    , pipelineTrace_ls_wb_pcEnable{vlSymsp->TOP.pipelineTrace_ls_wb_pcEnable}
    , pipelineTrace_rf_pcEnable{vlSymsp->TOP.pipelineTrace_rf_pcEnable}
    , jumpTrace_instr_jump{vlSymsp->TOP.jumpTrace_instr_jump}
    , jumpTrace_instr_branch{vlSymsp->TOP.jumpTrace_instr_branch}
    , jumpTrace_instr_pcPlusSrc{vlSymsp->TOP.jumpTrace_instr_pcPlusSrc}
    , jumpTrace_idu_pcSrc{vlSymsp->TOP.jumpTrace_idu_pcSrc}
    , jumpTrace_bruOutC{vlSymsp->TOP.jumpTrace_bruOutC}
    , jumpTrace_bruCtrl{vlSymsp->TOP.jumpTrace_bruCtrl}
    , debug_instr_instr{vlSymsp->TOP.debug_instr_instr}
    , pipelineTrace_if_id_instr_instr{vlSymsp->TOP.pipelineTrace_if_id_instr_instr}
    , pipelineTrace_id_ex_instr_instr{vlSymsp->TOP.pipelineTrace_id_ex_instr_instr}
    , pipelineTrace_ex_ls_instr_instr{vlSymsp->TOP.pipelineTrace_ex_ls_instr_instr}
    , pipelineTrace_ls_wb_instr_instr{vlSymsp->TOP.pipelineTrace_ls_wb_instr_instr}
    , pipelineTrace_rf_instr_instr{vlSymsp->TOP.pipelineTrace_rf_instr_instr}
    , gpr_zero{vlSymsp->TOP.gpr_zero}
    , gpr_ra{vlSymsp->TOP.gpr_ra}
    , gpr_sp{vlSymsp->TOP.gpr_sp}
    , gpr_gp{vlSymsp->TOP.gpr_gp}
    , gpr_tp{vlSymsp->TOP.gpr_tp}
    , gpr_t0{vlSymsp->TOP.gpr_t0}
    , gpr_t1{vlSymsp->TOP.gpr_t1}
    , gpr_t2{vlSymsp->TOP.gpr_t2}
    , gpr_s0{vlSymsp->TOP.gpr_s0}
    , gpr_s1{vlSymsp->TOP.gpr_s1}
    , gpr_a0{vlSymsp->TOP.gpr_a0}
    , gpr_a1{vlSymsp->TOP.gpr_a1}
    , gpr_a2{vlSymsp->TOP.gpr_a2}
    , gpr_a3{vlSymsp->TOP.gpr_a3}
    , gpr_a4{vlSymsp->TOP.gpr_a4}
    , gpr_a5{vlSymsp->TOP.gpr_a5}
    , gpr_a6{vlSymsp->TOP.gpr_a6}
    , gpr_a7{vlSymsp->TOP.gpr_a7}
    , gpr_s2{vlSymsp->TOP.gpr_s2}
    , gpr_s3{vlSymsp->TOP.gpr_s3}
    , gpr_s4{vlSymsp->TOP.gpr_s4}
    , gpr_s5{vlSymsp->TOP.gpr_s5}
    , gpr_s6{vlSymsp->TOP.gpr_s6}
    , gpr_s7{vlSymsp->TOP.gpr_s7}
    , gpr_s8{vlSymsp->TOP.gpr_s8}
    , gpr_s9{vlSymsp->TOP.gpr_s9}
    , gpr_s10{vlSymsp->TOP.gpr_s10}
    , gpr_s11{vlSymsp->TOP.gpr_s11}
    , gpr_t3{vlSymsp->TOP.gpr_t3}
    , gpr_t4{vlSymsp->TOP.gpr_t4}
    , gpr_t5{vlSymsp->TOP.gpr_t5}
    , gpr_t6{vlSymsp->TOP.gpr_t6}
    , csrDebug_mstatus{vlSymsp->TOP.csrDebug_mstatus}
    , csrDebug_mtvec{vlSymsp->TOP.csrDebug_mtvec}
    , csrDebug_mepc{vlSymsp->TOP.csrDebug_mepc}
    , csrDebug_mcause{vlSymsp->TOP.csrDebug_mcause}
    , debug_commit_pc{vlSymsp->TOP.debug_commit_pc}
    , debug_dynamic_pc{vlSymsp->TOP.debug_dynamic_pc}
    , debug_probe_data{vlSymsp->TOP.debug_probe_data}
    , debug_alu_data_E_data{vlSymsp->TOP.debug_alu_data_E_data}
    , debug_alu_data_W_data{vlSymsp->TOP.debug_alu_data_W_data}
    , debug_alu_srcA_data{vlSymsp->TOP.debug_alu_srcA_data}
    , debug_alu_srcB_data{vlSymsp->TOP.debug_alu_srcB_data}
    , pipelineTrace_if_id_pc_pc{vlSymsp->TOP.pipelineTrace_if_id_pc_pc}
    , pipelineTrace_id_ex_pc_pc{vlSymsp->TOP.pipelineTrace_id_ex_pc_pc}
    , pipelineTrace_ex_ls_pc_pc{vlSymsp->TOP.pipelineTrace_ex_ls_pc_pc}
    , pipelineTrace_ls_wb_pc_pc{vlSymsp->TOP.pipelineTrace_ls_wb_pc_pc}
    , pipelineTrace_rf_pc_pc{vlSymsp->TOP.pipelineTrace_rf_pc_pc}
    , jumpTrace_dynamic_pc{vlSymsp->TOP.jumpTrace_dynamic_pc}
    , jumpTrace_bruSrcA{vlSymsp->TOP.jumpTrace_bruSrcA}
    , jumpTrace_bruSrcB{vlSymsp->TOP.jumpTrace_bruSrcB}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTopMain::VTopMain(const char* _vcname__)
    : VTopMain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTopMain::~VTopMain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTopMain___024root___eval_debug_assertions(VTopMain___024root* vlSelf);
#endif  // VL_DEBUG
void VTopMain___024root___eval_static(VTopMain___024root* vlSelf);
void VTopMain___024root___eval_initial(VTopMain___024root* vlSelf);
void VTopMain___024root___eval_settle(VTopMain___024root* vlSelf);
void VTopMain___024root___eval(VTopMain___024root* vlSelf);

void VTopMain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopMain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopMain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTopMain___024root___eval_static(&(vlSymsp->TOP));
        VTopMain___024root___eval_initial(&(vlSymsp->TOP));
        VTopMain___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTopMain___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTopMain::eventsPending() { return false; }

uint64_t VTopMain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTopMain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTopMain___024root___eval_final(VTopMain___024root* vlSelf);

VL_ATTR_COLD void VTopMain::final() {
    VTopMain___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTopMain::hierName() const { return vlSymsp->name(); }
const char* VTopMain::modelName() const { return "VTopMain"; }
unsigned VTopMain::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTopMain::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTopMain___024root__trace_init_top(VTopMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopMain___024root*>(voidSelf);
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTopMain___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTopMain___024root__trace_register(VTopMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTopMain::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTopMain::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTopMain___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
