// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSimTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_commit{vlSymsp->TOP.io_commit}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_gpr_regs_0{vlSymsp->TOP.io_gpr_regs_0}
    , io_gpr_regs_1{vlSymsp->TOP.io_gpr_regs_1}
    , io_gpr_regs_2{vlSymsp->TOP.io_gpr_regs_2}
    , io_gpr_regs_3{vlSymsp->TOP.io_gpr_regs_3}
    , io_gpr_regs_4{vlSymsp->TOP.io_gpr_regs_4}
    , io_gpr_regs_5{vlSymsp->TOP.io_gpr_regs_5}
    , io_gpr_regs_6{vlSymsp->TOP.io_gpr_regs_6}
    , io_gpr_regs_7{vlSymsp->TOP.io_gpr_regs_7}
    , io_gpr_regs_8{vlSymsp->TOP.io_gpr_regs_8}
    , io_gpr_regs_9{vlSymsp->TOP.io_gpr_regs_9}
    , io_gpr_regs_10{vlSymsp->TOP.io_gpr_regs_10}
    , io_gpr_regs_11{vlSymsp->TOP.io_gpr_regs_11}
    , io_gpr_regs_12{vlSymsp->TOP.io_gpr_regs_12}
    , io_gpr_regs_13{vlSymsp->TOP.io_gpr_regs_13}
    , io_gpr_regs_14{vlSymsp->TOP.io_gpr_regs_14}
    , io_gpr_regs_15{vlSymsp->TOP.io_gpr_regs_15}
    , io_gpr_regs_16{vlSymsp->TOP.io_gpr_regs_16}
    , io_gpr_regs_17{vlSymsp->TOP.io_gpr_regs_17}
    , io_gpr_regs_18{vlSymsp->TOP.io_gpr_regs_18}
    , io_gpr_regs_19{vlSymsp->TOP.io_gpr_regs_19}
    , io_gpr_regs_20{vlSymsp->TOP.io_gpr_regs_20}
    , io_gpr_regs_21{vlSymsp->TOP.io_gpr_regs_21}
    , io_gpr_regs_22{vlSymsp->TOP.io_gpr_regs_22}
    , io_gpr_regs_23{vlSymsp->TOP.io_gpr_regs_23}
    , io_gpr_regs_24{vlSymsp->TOP.io_gpr_regs_24}
    , io_gpr_regs_25{vlSymsp->TOP.io_gpr_regs_25}
    , io_gpr_regs_26{vlSymsp->TOP.io_gpr_regs_26}
    , io_gpr_regs_27{vlSymsp->TOP.io_gpr_regs_27}
    , io_gpr_regs_28{vlSymsp->TOP.io_gpr_regs_28}
    , io_gpr_regs_29{vlSymsp->TOP.io_gpr_regs_29}
    , io_gpr_regs_30{vlSymsp->TOP.io_gpr_regs_30}
    , io_gpr_regs_31{vlSymsp->TOP.io_gpr_regs_31}
    , io_csr_regs_0{vlSymsp->TOP.io_csr_regs_0}
    , io_csr_regs_1{vlSymsp->TOP.io_csr_regs_1}
    , io_csr_regs_2{vlSymsp->TOP.io_csr_regs_2}
    , io_csr_regs_3{vlSymsp->TOP.io_csr_regs_3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___eval_static(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf);
void VSimTop___024root___eval(VSimTop___024root* vlSelf);

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSimTop___024root___eval_static(&(vlSymsp->TOP));
        VSimTop___024root___eval_initial(&(vlSymsp->TOP));
        VSimTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSimTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSimTop::eventsPending() { return false; }

uint64_t VSimTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSimTop___024root___eval_final(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop::final() {
    VSimTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSimTop::hierName() const { return vlSymsp->name(); }
const char* VSimTop::modelName() const { return "VSimTop"; }
unsigned VSimTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSimTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSimTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSimTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
