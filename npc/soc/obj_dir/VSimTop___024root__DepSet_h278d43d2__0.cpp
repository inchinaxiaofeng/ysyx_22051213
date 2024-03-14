// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

extern "C" unsigned long long vaddr_read(unsigned long long addr, int len);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ &vaddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read_TOP\n"); );
    // Body
    unsigned long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    unsigned long long vaddr_read__Vfuncrtn__Vcvt;
    vaddr_read__Vfuncrtn__Vcvt = vaddr_read(addr__Vcvt, len__Vcvt);
    vaddr_read__Vfuncrtn = vaddr_read__Vfuncrtn__Vcvt;
}

extern "C" void vaddr_write(unsigned long long addr, int len, unsigned long long data);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_write_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_write_TOP\n"); );
    // Body
    unsigned long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    unsigned long long data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    vaddr_write(addr__Vcvt, len__Vcvt, data__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval_triggers__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_load)) 
                                      | ((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_store)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_load 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_store 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_h703d06ad_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_h6cd0e248_0;

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__core__DOT__ringBufferTail;
    __Vdly__SimTop__DOT__core__DOT__ringBufferTail = 0;
    IData/*31:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load = 0;
    QData/*63:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 0;
    // Body
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_store 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_load 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load;
    vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state 
        = vlSelf->SimTop__DOT__arbiter__DOT__state;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load;
    __Vdly__SimTop__DOT__core__DOT__ringBufferTail 
        = vlSelf->SimTop__DOT__core__DOT__ringBufferTail;
    vlSelf->__Vdly__SimTop__DOT__core__DOT__ringBufferHead 
        = vlSelf->SimTop__DOT__core__DOT__ringBufferHead;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr))) 
                                  | (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))))) 
                                 | (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: SimTop.v:1167: Assertion failed in %NSimTop.core.backend.exu.alu: Assertion failed\n    at ALU.scala:127 assert(io.cfIn.instr(1, 0) === \"b11\".U || isRVC || !valid)\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1167, "");
        VL_WRITEF("[%0t] %%Error: SimTop.v:1169: Assertion failed in %NSimTop.core.backend.exu.alu\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1169, "");
    }
    vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0U;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
    vlSelf->__Vdly__SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)
                                          ? (((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                                              | (~ 
                                                 ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store) 
                                                  & (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))) 
                                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store))
                                          : ((((~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)) 
                                               & (IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_aw_valid)) 
                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)) 
                                             | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store))));
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_aw_valid) 
                     << 6U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store) 
                                << 5U) | (((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store) 
                                           << 4U) | 
                                          ((((0U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                              ? ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                  ? (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid)
                                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready))
                                              : ((1U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                                  : (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid))) 
                                            << 3U) 
                                           | ((((0U 
                                                 == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                  ? 
                                                 (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                                                  : (IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready)
                                                  : 
                                                 (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))) 
                                               << 2U) 
                                              | (((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_load 
        = VSimTop__ConstPool__TABLE_h703d06ad_0[__Vtableidx1];
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_store 
        = VSimTop__ConstPool__TABLE_h6cd0e248_0[__Vtableidx1];
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfWen) {
        vlSelf->__Vdlyvval__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfData;
        vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load = 0U;
        __Vdly__SimTop__DOT__core__DOT__ringBufferTail = 0U;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0U;
    } else {
        if (vlSelf->SimTop__DOT__arbiter__DOT___T) {
            if (vlSelf->SimTop__DOT__arbiter__DOT___T_1) {
                vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 2U;
            } else if (vlSelf->SimTop__DOT__arbiter__DOT___T_8) {
                vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 1U;
            } else if (((~ (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)) 
                        & (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid))) {
                vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 2U;
            }
        } else if (vlSelf->SimTop__DOT__arbiter__DOT___T_26) {
            if (((IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready) 
                 & (IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid))) {
                vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
            }
        } else if ((((2U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)) 
                     & (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))) 
                    & (IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid))) {
            vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
        }
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load) 
                << 6U) | (((((IData)(vlSelf->SimTop__DOT___core_io_dmem_r_ready) 
                             & (IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid))
                             ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad) 
                                << 1U) : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)) 
                           << 2U) | ((((IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready) 
                                       & (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid)) 
                                      & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)))
                                      ? 1U : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))));
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load 
            = (3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load) 
                               << 1U))));
        vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT___dequeueSize_T 
            = (((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)) 
               & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
        __Vdly__SimTop__DOT__core__DOT__ringBufferTail 
            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                     & ((IData)(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT___dequeueSize_T)
                         ? ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail) 
                            + (IData)(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT___dequeueSize_T))
                         : (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail))));
        if (vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush) {
            __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0U;
        } else {
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___wbClearMask_T_6 
                = (0x7fffffffffffffffULL & (1ULL << (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest)));
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___isuFireSetMask_T_1 
                = (0x7fffffffffffffffULL & (1ULL << (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest)));
            __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
                = (0xfffffffeU & ((0xfffffffeU & (vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
                                                  & ((~ 
                                                      (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfWen) 
                                                        & (~ 
                                                           (((0U 
                                                              != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest)) 
                                                             & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest) 
                                                                == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest))) 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen))))
                                                        ? (IData)(
                                                                  (vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___wbClearMask_T_6 
                                                                   >> 1U))
                                                        : 0U)) 
                                                     << 1U))) 
                                  | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)
                                       ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___isuFireSetMask_T_1 
                                                  >> 1U))
                                       : 0U) << 1U)));
        }
    }
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid) {
        vlSelf->__Vdly__SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                    ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                    : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                        ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                        : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))
                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h44040bfb__0)
                    ? ((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U])))
                        : (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc 
                           + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm))
                    : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0xa00001800ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 3U;
    } else {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4) 
               & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess)));
        if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
             & (0x305U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec 
                = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
        }
        if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr) {
            __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                = ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus) 
                   | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode) 
                                       << 0xbU) | (
                                                   (0x700U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                >> 8U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((IData)(
                                                                  (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                   >> 3U)) 
                                                          << 7U)) 
                                                      | ((0x70U 
                                                          & ((IData)(
                                                                     (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                      >> 4U)) 
                                                             << 4U)) 
                                                         | (7U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus)))))))));
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause 
                = (QData)((IData)(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_3_T)
                                    ? 3U : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___exceptionNO_T_20)
                                             ? 2U : 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_8_T_2)
                                              ? 8U : 
                                             ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_9_T_2)
                                               ? 9U
                                               : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_11_T_2)
                                                   ? 0xbU
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioStoreAddrMisaligned)
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioLoadAddrMisaligned) 
                                                    << 2U)))))))));
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc 
                = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc;
            __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 3U;
        } else {
            if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
                 & (0x342U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
                vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause 
                    = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
            }
            if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
                 & (0x341U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
                vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc 
                    = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
            }
            if ((((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
                  & (0x302U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                 & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))) {
                __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                    = ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus) 
                       | (QData)((IData)((0x80U | (
                                                   (0x700U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                >> 8U)) 
                                                       << 8U)) 
                                                   | ((0x70U 
                                                       & ((IData)(
                                                                  (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                   >> 4U)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                                                      >> 7U)) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus)))))))));
                __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
                    = (3U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                     >> 0xbU)));
            } else if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
                        & (0x300U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
                __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                    = (((QData)((IData)((3U == (3U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22 
                                                           >> 0xdU)))))) 
                        << 0x3fU) | (0x7fffffffffffffffULL 
                                     & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
             & (0x180U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp 
                = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
        }
    }
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
        = vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data;
    vlSelf->SimTop__DOT__io_commit_REG = vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1;
    vlSelf->SimTop__DOT__io_instr_REG = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr;
    vlSelf->SimTop__DOT__io_pc_REG = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)
                                       ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target
                                       : vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc);
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_bits_commits_3;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen 
            = ((~ (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_wenFix) 
                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                   | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                      & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioLoadAddrMisaligned) 
                         | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioStoreAddrMisaligned))))) 
               & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2 
            = ((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h44040bfb__0) 
                      & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                         >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc;
    }
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load;
    vlSelf->SimTop__DOT__core__DOT__ringBufferTail 
        = __Vdly__SimTop__DOT__core__DOT__ringBufferTail;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    vlSelf->SimTop__DOT___core_io_dmem_r_ready = (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load));
    vlSelf->io_commit = vlSelf->SimTop__DOT__io_commit_REG;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                                         & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid)));
    vlSelf->io_instr = vlSelf->SimTop__DOT__io_instr_REG;
    vlSelf->io_pc = vlSelf->SimTop__DOT__io_pc_REG;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
    vlSelf->io_csr_regs_1 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec;
    vlSelf->io_csr_regs_3 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause;
    vlSelf->io_csr_regs_2 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc;
    vlSelf->io_csr_regs_0 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfWen 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load) {
        VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read_TOP(
                                                                                (&(vlSymsp->__Vscope_SimTop__TP_SRAM__mem)), 
                                                                                "/home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv", 0x2cU, (QData)((IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))), 8U, __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout);
        vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data 
            = __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    } else {
        vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data = 0ULL;
    }
    if (vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store) {
        VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_write_TOP(
                                                                                (&(vlSymsp->__Vscope_SimTop__TP_SRAM__mem)), 
                                                                                "/home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv", 0x32U, (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)), 
                                                                                (0xffU 
                                                                                & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 7U) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                                                >> 1U)) 
                                                                                + 
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)))))))))))), 
                                                                                (((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x18U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))))))))))) 
                                                                                | (((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))))))
                                                                                 : 0ULL) 
                                                                                | (((2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                                                 ? 
                                                                                (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                                                                                 : 0ULL) 
                                                                                | ((3U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                                                 ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB
                                                                                 : 0ULL)))));
    }
}
