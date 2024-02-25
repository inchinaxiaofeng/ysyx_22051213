// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopMain__Syms.h"
#include "VTopMain___024root.h"

extern "C" unsigned long long vaddr_read(unsigned long long addr, int len);

VL_INLINE_OPT void VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ &vaddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read_TOP\n"); );
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

VL_INLINE_OPT void VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_write_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_write_TOP\n"); );
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
VL_ATTR_COLD void VTopMain___024root___dump_triggers__act(VTopMain___024root* vlSelf);
#endif  // VL_DEBUG

void VTopMain___024root___eval_triggers__act(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK)) 
                                      | ((IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK 
        = vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
    vlSelf->__Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK 
        = vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTopMain___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTopMain___024root___nba_sequent__TOP__1(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    __Vfunc_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK) {
        VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read_TOP(
                                                                                (&(vlSymsp->__Vscope_TopMain___TP_SRAM__mem)), 
                                                                                "/home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv", 0x2cU, (QData)((IData)(
                                                                                ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)
                                                                                 ? (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut)
                                                                                 : 
                                                                                ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6)
                                                                                 ? (IData)(vlSelf->TopMain__DOT__rPC)
                                                                                 : 
                                                                                ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_10)
                                                                                 ? (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut)
                                                                                 : 0U))))), 8U, __Vfunc_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout);
        vlSelf->TopMain__DOT_____05FTP_SRAM_io_R_s2mRdata 
            = __Vfunc_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_read__0__Vfuncout;
    } else {
        vlSelf->TopMain__DOT_____05FTP_SRAM_io_R_s2mRdata = 0ULL;
    }
    if (vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK) {
        VTopMain___024root____Vdpiimwrap_TopMain__DOT___TP_SRAM__DOT__mem__DOT__vaddr_write_TOP(
                                                                                (&(vlSymsp->__Vscope_TopMain___TP_SRAM__mem)), 
                                                                                "/home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv", 0x32U, (QData)((IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut)), vlSelf->TopMain__DOT___TP_SRAM__DOT__mem__DOT__writeLen, vlSelf->TopMain__DOT___EX_LS__DOT__reg_writeData);
    }
}
