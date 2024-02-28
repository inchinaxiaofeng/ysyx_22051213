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
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK)) 
                                      | ((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK;
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

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_8;
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_8 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_14;
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_14 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_25;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_25 = 0;
    IData/*31:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN = 0;
    IData/*23:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 = 0;
    SData/*15:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1 = 0;
    IData/*31:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18 = 0;
    IData/*31:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state = 0;
    QData/*63:0*/ __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0;
    // Body
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[DPQ] size 0 head %x tail %x enq %x deq %x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__ringBufferHead,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail),
                   2,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid,
                   2,(IData)(vlSelf->SimTop__DOT__core__DOT___dequeueSize_T));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Core: ",64,vlSelf->SimTop__DOT__core__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"flush = %b, 0: frontend:(%1#,%1#), backend:(%1#,%1#); 1: frontend:(0,1), backend:(%1#,0)\n",
                   4,(0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)))),
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),
                   1,vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T),
                   1,(1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                            | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1))),
                   1,(((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                       != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                      & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)));
    }
    vlSelf->__Vdly__SimTop__DOT__core__DOT__ringBufferHead 
        = vlSelf->SimTop__DOT__core__DOT__ringBufferHead;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Frontend_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"---------------------- Frontend ----------------------\n");
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Frontend_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"flush = %b, ifu:(%1#,%1#), idu:(%1#,%1#)\n",
                   4,(0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)))),
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2),
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Frontend_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"IFU: pc = 0x%x, instr = 0x%x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Frontend_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"IDU1: pc = 0x%x, instr = 0x%x, pnpc = 0x%x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] EXU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pc:0x%x\n",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc);
    }
    vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0U;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] WBU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%x\n",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] WBU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[COMMIT] pc = 0x%x inst %x wen %x wdst %x wdata %x mmio 0 intrNO 0000000000000000\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T),
                   5,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1);
    }
    vlSelf->__Vdly__SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Backend_inorder: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"exu redirect (%b,%x), wbu redirect (%b,%x)\n",
                   1,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                       : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                          & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___predictWrong_T_1)) 
                             & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                >> 4U)))),64,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                               ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                                    : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))
                                               : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___io_redirect_target_T_7),
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Backend_inorder: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"---------------------- Backend ----------------------\n");
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Backend_inorder: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"flush = %b, isu:(%1#,%1#), exu:(%1#,1)\n",
                   2,(3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                            >> 2U)),1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    }
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LSU-EXECUNIT] state %x rResp %x wResp %x lm %x sm %x\n",
                   2,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid),
                   1,vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"misaligned addr detected\n");
    }
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_8 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___T_5) 
           | (((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
               & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready)) 
              & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)));
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_14 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)
            ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target
            : (4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc));
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"DEBUG HERE: s/pnpc %x, target %x, npc %x\n",
                   64,(4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_8) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_8) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[IFI] pc=%x redirect %x npc %x pc %x pnpc %x\n",
                   32,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_14) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_14) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[IFO] pc=%x inst=%x npc=%x ipf 0\n",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr,
                   64,(4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[Redirect] target 0x%x rtype 0\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target);
    }
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_25 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
           & ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr))) 
              != (3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))));
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"target:0x%x,instr:0x%x,offset:0x%x,isBranch:%1#,pc:0x%x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm,
                   1,(1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                            >> 3U)),64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"predictWrong: %b\n",
                   1,(1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___predictWrong_T_1))));
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr))) 
                                  | (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))))) 
                                 | (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: SimTop.v:1210: Assertion failed in %NSimTop.core.backend.exu.alu.unnamedblk1: Assertion failed\n    at ALU.scala:123 assert(io.cfIn.instr(1, 0) === \"b11\".U || isRVC || !valid)\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1210, "");
        VL_WRITEF("[%0t] %%Error: SimTop.v:1212: Assertion failed in %NSimTop.core.backend.exu.alu.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1212, "");
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_25) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_25) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[ERROR] pc %x inst %x rvc %x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr,
                   1,(1U & (~ (IData)((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"DEBUG HERE: target %x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___io_redirect_target_T_7);
    }
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid) 
                                         & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK))));
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready) 
                                         & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK))));
    vlSelf->SimTop__DOT__core__DOT__ringBufferTail 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                                               & ((IData)(vlSelf->SimTop__DOT__core__DOT___dequeueSize_T)
                                                   ? 
                                                  ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail) 
                                                   + (IData)(vlSelf->SimTop__DOT__core__DOT___dequeueSize_T))
                                                   : (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T) {
        vlSelf->__Vdlyvval__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1;
        vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest;
    }
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4) {
        vlSelf->__Vdly__SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                    ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                    : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                        ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                        : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))
                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___io_redirect_target_T_7);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__c = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state = 0U;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0U;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0xa00001800ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 3U;
    } else {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__c = (1ULL + vlSelf->SimTop__DOT__core__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN_2 
            = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state) 
                << 6U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad) 
                           << 3U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid) 
                                      | ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                                         & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready)))
                                      ? 1U : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state))));
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state 
            = (3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN_2) 
                     >> (7U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state) 
                               << 1U))));
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
                                                      (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T) 
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
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4) 
               & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess)));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_21 
            = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
                & (0x302U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
               & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)));
        if (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10) 
             & (0x305U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))))) {
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec 
                = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
        }
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
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)))) {
            if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_21) {
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
        if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_21) {
            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
                = (3U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
                                 >> 0xbU)));
        }
    }
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen 
            = ((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                   | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                      & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                         | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
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
                   & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___predictWrong_T_1)) 
                      & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                         >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest;
    }
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
        = vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                                         & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN 
        = (((1U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
             ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                        >> 8U)) : 0U) | (((2U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                                           ? (IData)(
                                                     (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                                      >> 0x10U))
                                           : 0U) | 
                                         (((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                                            ? (IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                                       >> 0x18U))
                                            : 0U) | 
                                          ((4U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                                            ? (IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                                       >> 0x20U))
                                            : 0U))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 
        = (0xffffffU & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN 
                        | ((5U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                            ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                       >> 0x28U)) : 0U)));
    vlSelf->io_csr_regs_1 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec;
    vlSelf->io_csr_regs_3 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause;
    vlSelf->io_csr_regs_2 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc;
    vlSelf->io_csr_regs_0 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1 
        = (0xffffU & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 
                      | ((6U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                          ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                     >> 0x30U)) : 0U)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 
        = (((0U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
             ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch)
             : 0U) | ((0xff000000U & SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN) 
                      | ((0xff0000U & SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0) 
                         | ((0xff00U & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1)) 
                            | (0xffU & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1) 
                                        | ((7U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                                            ? (IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                                       >> 0x38U))
                                            : 0U)))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b41638d__0 
        = (((- (QData)((IData)((1U & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 
                                      >> 7U))))) << 8U) 
           | (QData)((IData)((0xffU & SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b29ba84__0 
        = (((- (QData)((IData)((1U & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 
                                      >> 0xfU))))) 
            << 0x10U) | (QData)((IData)((0xffffU & SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_hb190fabb__0 
        = (((QData)((IData)((- (IData)((SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20)));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK) {
        VSimTop___024root____Vdpiimwrap_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read_TOP(
                                                                                (&(vlSymsp->__Vscope_SimTop__TP_SRAM__mem)), 
                                                                                "/home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv", 0x2cU, (QData)((IData)(
                                                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                                                 : 0U))))), 8U, __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout);
        vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data 
            = __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    } else {
        vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data = 0ULL;
    }
    if (vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK) {
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
