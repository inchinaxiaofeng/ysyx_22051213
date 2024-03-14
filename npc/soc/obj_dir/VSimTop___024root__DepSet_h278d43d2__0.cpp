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
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_3;
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_3 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_9;
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_9 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__unnamedblk1__DOT___T_1;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__unnamedblk1__DOT___T_1 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_15;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_15 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_31;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_31 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_32;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_32 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_36;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_36 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_4;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_4 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_7;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_8;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_9;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_10;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_11;
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    VlWide<4>/*127:0*/ __Vtemp_ha1e63d4c__0;
    // Body
    vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state 
        = vlSelf->SimTop__DOT__arbiter__DOT__state;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_store 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_load 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load;
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT___lsExecUnit_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] UnpipelinedLSU: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT___lsExecUnit_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LSU-AGU] state 0 inv %x inr %x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3,
                   1,((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                      & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Backend_inorder: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"---------------------- Backend ----------------------\n");
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Backend_inorder: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"flush = %b, ==%x0>[isu]<%x---%x>[exu]<%x---1>[wbu]\n",
                   2,(3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                            >> 2U)),1,(1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                             | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1))),
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___isu_io_out_valid),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid));
    }
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
        VL_FWRITEF(0x80000002U,"flush = %b, [ifu]<%x--=%x0>[idu]<%x0==\n",
                   4,(0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)))),
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_valid),
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] Frontend_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_valid) 
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
    vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] MDU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__c);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        __Vtemp_ha1e63d4c__0[0U] = (IData)(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1));
        __Vtemp_ha1e63d4c__0[1U] = (IData)((VL_DIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1) 
                                            >> 0x20U));
        __Vtemp_ha1e63d4c__0[2U] = (IData)(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1));
        __Vtemp_ha1e63d4c__0[3U] = (IData)((VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1) 
                                            >> 0x20U));
        VL_FWRITEF(0x80000002U,"DivOut %x divres %x\n",
                   128,__Vtemp_ha1e63d4c__0.data(),
                   64,((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                        ? VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1)
                        : VL_DIV_QQQ(64, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1)));
    }
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] WBU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[COMMIT] pc = 0x%x inst %x wen %x wdst %x wdata %x mmio 0 intrNO 0000000000000000\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfWen),
                   5,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfData);
    }
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_4 
        = ((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)))) 
           & (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_1));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)))) 
                 & (~ (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_1))));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6 
        = ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
           & (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_8));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_7 
        = ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5) 
           & (~ (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_8)));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_8 
        = ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_7) 
           & (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_15));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_9 
        = ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_7) 
           & (~ (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_15)));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_10 
        = ((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)));
    SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_11 
        = (((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)) 
            & (1U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))) 
           & (2U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state)));
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_4) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_4) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LoadStore <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready),
                   1,vlSelf->SimTop__DOT___core_io_dmem_ar_valid,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[InstFetch <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready),
                   1,vlSelf->SimTop__DOT___core_io_dmem_ar_valid,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_8) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_8) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LoadStore <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready),
                   1,vlSelf->SimTop__DOT___core_io_dmem_ar_valid,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_9) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_9) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[DONT CARE <=X=> SRAM] idle");
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_10) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c_4);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_10) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[InstFetch <===> SRAM] exec ifvr%x,%x lsvr%x,%x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready),
                   1,vlSelf->SimTop__DOT___core_io_dmem_ar_valid,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_11) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] AXI4Lite_Arbiter: ",
                   64,vlSelf->SimTop__DOT__arbiter__DOT__c_5);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_11) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LoadStore <===> SRAM] exec ifvr%x,%x lsvr%x,%x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready),
                   1,vlSelf->SimTop__DOT___core_io_dmem_ar_valid,
                   1,(IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    }
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_3 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___T) 
           | ((IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_ar_ready) 
              & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)));
    SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_9 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_valid));
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_3) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_3) 
                           & (~ (IData)(vlSelf->reset)))))) {
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)
                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target
                : (4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc));
        VL_FWRITEF(0x80000002U,"[IFI] pc=%x redirect %x npc %x pc %x pnpc %x\n",
                   32,(IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_9) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT___T_9) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[IFO] pc=%x inst=%x npc=%x ipf 0\n",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc,
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr,
                   64,(4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] IFU_embedded: ",
                   64,vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[Redirect] target 0x%x rtype 0\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target);
    }
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__unnamedblk1__DOT___T_1 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__unnamedblk1__DOT___T_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] EXU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__unnamedblk1__DOT___T_1) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[REDIRECT] flush: %1# csr (%b,%x) alu (%b,%x)\n",
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] EXU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[FIRE] FuType %x alu %x lsu %x mdu %x csr %x\n",
                   3,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___mdu_io_out_bits,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_out_bits);
    }
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_31 
        = (1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_32 
        = ((IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready) 
           & (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18 
        = ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_31) 
           | (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_32));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_36 
        = ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_31) 
           | (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_32));
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_18) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LSU] addr %x, size %x, wdata_raw %x, isStore %x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA,
                   2,(3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT___lsExecUnit_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT___lsExecUnit_io_out_valid) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LSU-EXECUNIT] statels (%x,%x) rResp %x wResp %x lm %x sm %x\n",
                   2,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_34,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_25),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioLoadAddrMisaligned,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_ioStoreAddrMisaligned));
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_36) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk2__DOT___T_36) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[LSU] statels (%x,%x) Raddr %x rFire %x RData %x AddrLatch %x RDataLatch %x RDataPartialLoad %x\n",
                   2,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store),
                   32,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_34,
                   64,vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data,
                   3,(7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_34);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_42) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] LSExecUnit: ",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_42) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[EXCEPTION] misaligned addr detected\n");
    }
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_15 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
           & ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr))) 
              != (3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr))) 
                                  | (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))))) 
                                 | (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: SimTop.v:1217: Assertion failed in %NSimTop.core.backend.exu.alu.unnamedblk1: Assertion failed\n    at ALU.scala:127 assert(io.cfIn.instr(1, 0) === \"b11\".U || isRVC || !valid)\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1217, "");
        VL_WRITEF("[%0t] %%Error: SimTop.v:1219: Assertion failed in %NSimTop.core.backend.exu.alu.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 1219, "");
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_15) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c);
    }
    if (VL_UNLIKELY((1U & ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__unnamedblk1__DOT___T_15) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[ERROR] pc %x inst %x rvc %x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr,
                   1,(1U & (~ (IData)((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))))));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"tgt %x valid %1# npc %x pdwrong %x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target,
                   1,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc,
                   1,(1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___predictWrong_T_1))));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"taken %1# addrRes %x srcA %x srcB %x ctrl %x\n",
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__taken,
                   65,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes.data(),
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB,
                   7,(IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl));
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3);
    }
    if (VL_UNLIKELY((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___T_38) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"[BPW] pc %x tgt %x npc %x pdWrong %x type %x%x%x%x\n",
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target,
                   64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc,
                   1,(1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___predictWrong_T_1))),
                   1,(1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                               >> 3U))),1,((0x58U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)) 
                                           | (0x5cU 
                                              == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))),
                   1,(0x5aU == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)),
                   1,(0x5eU == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[%20#] ALU: ",64,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_4);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"valid %1# isBru %1# isBranch %1#\n",
                   1,vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid,
                   1,(1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                            >> 4U)),1,(1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                                >> 3U))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arbiter__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__arbiter__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__arbiter__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__arbiter__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__arbiter__DOT__c_4 = 0ULL;
        vlSelf->SimTop__DOT__arbiter__DOT__c_5 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_4 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1 = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__c = 0ULL;
        vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load = 0U;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0U;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0xa00001800ULL;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp = 0ULL;
        __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 3U;
    } else {
        vlSelf->SimTop__DOT__arbiter__DOT__c = (1ULL 
                                                + vlSelf->SimTop__DOT__arbiter__DOT__c);
        vlSelf->SimTop__DOT__arbiter__DOT__c_1 = (1ULL 
                                                  + vlSelf->SimTop__DOT__arbiter__DOT__c_1);
        vlSelf->SimTop__DOT__arbiter__DOT__c_2 = (1ULL 
                                                  + vlSelf->SimTop__DOT__arbiter__DOT__c_2);
        vlSelf->SimTop__DOT__arbiter__DOT__c_3 = (1ULL 
                                                  + vlSelf->SimTop__DOT__arbiter__DOT__c_3);
        vlSelf->SimTop__DOT__arbiter__DOT__c_4 = (1ULL 
                                                  + vlSelf->SimTop__DOT__arbiter__DOT__c_4);
        vlSelf->SimTop__DOT__arbiter__DOT__c_5 = (1ULL 
                                                  + vlSelf->SimTop__DOT__arbiter__DOT__c_5);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_4 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_4);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_3);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1);
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__c 
            = (1ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__c);
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
        if ((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))) {
            if (vlSelf->SimTop__DOT__arbiter__DOT___T_26) {
                if (((IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready) 
                     & (IData)(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid))) {
                    vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
                }
            } else if ((((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_33) 
                         & (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))) 
                        & (IData)(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid))) {
                vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0U;
            }
        } else if (vlSelf->SimTop__DOT__arbiter__DOT___T_1) {
            vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 2U;
        } else if (vlSelf->SimTop__DOT__arbiter__DOT___T_8) {
            vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 1U;
        } else if (vlSelf->SimTop__DOT__arbiter__DOT___T_15) {
            vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 2U;
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
                                          ((((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                              ? ((1U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                                  : (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid))
                                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                  ? (IData)(vlSelf->SimTop__DOT___core_io_dmem_ar_valid)
                                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready))) 
                                            << 3U) 
                                           | ((((0U 
                                                 != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                  ? (IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready)
                                                  : 
                                                 (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                  ? 
                                                 (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                                                  : (IData)(vlSelf->SimTop__DOT___core_io_imem_r_ready))) 
                                               << 2U) 
                                              | (((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_load 
        = VSimTop__ConstPool__TABLE_h703d06ad_0[__Vtableidx1];
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_store 
        = VSimTop__ConstPool__TABLE_h6cd0e248_0[__Vtableidx1];
    vlSelf->SimTop__DOT__core__DOT__ringBufferTail 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                                               & ((IData)(vlSelf->SimTop__DOT__core__DOT___dequeueSize_T)
                                                   ? 
                                                  ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail) 
                                                   + (IData)(vlSelf->SimTop__DOT__core__DOT___dequeueSize_T))
                                                   : (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfWen) {
        vlSelf->__Vdlyvval__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT___wbu_io_wb_rfData;
        vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest;
    }
    vlSelf->SimTop__DOT__io_commit_REG = vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1;
    vlSelf->SimTop__DOT__io_instr_REG = vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr;
    vlSelf->SimTop__DOT__io_pc_REG = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)
                                       ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target
                                       : vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc);
    if (vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___mdu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_out_bits;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid 
            = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen 
            = ((~ (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_wenFix) 
                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                   | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                      & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_42)))) 
               & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc;
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
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
        = vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch 
        = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode 
        = __Vdly__SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
    vlSelf->SimTop__DOT___core_io_dmem_r_ready = (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load));
    vlSelf->io_commit = vlSelf->SimTop__DOT__io_commit_REG;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
                                         & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_out_valid)));
    vlSelf->io_instr = vlSelf->SimTop__DOT__io_instr_REG;
    vlSelf->io_pc = vlSelf->SimTop__DOT__io_pc_REG;
    vlSelf->io_csr_regs_3 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause;
    vlSelf->io_csr_regs_0 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelf->io_csr_regs_1 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec;
    vlSelf->io_csr_regs_2 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc;
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
                                                                                != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                                                 ? 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc))))), 8U, __Vfunc_SimTop__DOT__TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout);
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
