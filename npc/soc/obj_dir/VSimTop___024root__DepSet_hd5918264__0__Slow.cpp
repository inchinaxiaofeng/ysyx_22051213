// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_load 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_store 
        = vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_gpr_regs_0 = 0ULL;
}

VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___eval_triggers__stl(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSimTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSimTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/SimTop.v", 3223, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSimTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN = 0;
    SData/*15:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0 = 0;
    IData/*16:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb3d1940f__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb3d1940f__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h2bc0261a__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h2bc0261a__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6950318e__0;
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6950318e__0 = 0;
    QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0 = 0;
    QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0 = 0;
    IData/*31:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN = 0;
    IData/*23:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 = 0;
    SData/*15:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1 = 0;
    IData/*31:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___rdataPartialLoad_T_20 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___addrAligned_T_17;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___addrAligned_T_17 = 0;
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h1146b7f8__0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h1146b7f8__0 = 0;
    VlWide<3>/*64:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0;
    VL_ZERO_W(65, SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0);
    CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0;
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0 = 0;
    VlWide<10>/*319:0*/ __Vtemp_h716d392e__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8eb555e__0;
    VlWide<3>/*95:0*/ __Vtemp_h300296b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h91331739__0;
    VlWide<3>/*95:0*/ __Vtemp_h9eb96ac4__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0b3cc87__0;
    VlWide<5>/*159:0*/ __Vtemp_he3e9cad7__0;
    VlWide<5>/*159:0*/ __Vtemp_he3c759e5__0;
    VlWide<5>/*159:0*/ __Vtemp_hb9bf2033__0;
    VlWide<3>/*95:0*/ __Vtemp_h269611e2__0;
    VlWide<3>/*95:0*/ __Vtemp_h4373a639__0;
    VlWide<3>/*95:0*/ __Vtemp_h84075690__0;
    // Body
    vlSelf->io_commit = vlSelf->SimTop__DOT__io_commit_REG;
    vlSelf->io_pc = vlSelf->SimTop__DOT__io_pc_REG;
    vlSelf->io_gpr_regs_1 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [1U];
    vlSelf->io_gpr_regs_2 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [2U];
    vlSelf->io_gpr_regs_3 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [3U];
    vlSelf->io_gpr_regs_4 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [4U];
    vlSelf->io_gpr_regs_5 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [5U];
    vlSelf->io_gpr_regs_6 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [6U];
    vlSelf->io_gpr_regs_7 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [7U];
    vlSelf->io_gpr_regs_8 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [8U];
    vlSelf->io_gpr_regs_9 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [9U];
    vlSelf->io_gpr_regs_10 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xaU];
    vlSelf->io_gpr_regs_11 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xbU];
    vlSelf->io_gpr_regs_12 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xcU];
    vlSelf->io_gpr_regs_13 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xdU];
    vlSelf->io_gpr_regs_14 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xeU];
    vlSelf->io_gpr_regs_15 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0xfU];
    vlSelf->io_gpr_regs_16 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x10U];
    vlSelf->io_gpr_regs_17 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x11U];
    vlSelf->io_gpr_regs_18 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x12U];
    vlSelf->io_gpr_regs_19 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x13U];
    vlSelf->io_gpr_regs_20 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x14U];
    vlSelf->io_gpr_regs_21 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x15U];
    vlSelf->io_gpr_regs_22 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x16U];
    vlSelf->io_gpr_regs_23 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x17U];
    vlSelf->io_gpr_regs_24 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x18U];
    vlSelf->io_gpr_regs_25 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x19U];
    vlSelf->io_gpr_regs_26 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1aU];
    vlSelf->io_gpr_regs_27 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1bU];
    vlSelf->io_gpr_regs_28 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1cU];
    vlSelf->io_gpr_regs_29 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1dU];
    vlSelf->io_gpr_regs_30 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1eU];
    vlSelf->io_gpr_regs_31 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
        [0x1fU];
    vlSelf->io_csr_regs_0 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelf->io_csr_regs_1 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec;
    vlSelf->io_csr_regs_2 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc;
    vlSelf->io_csr_regs_3 = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_out_0_valid 
        = vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__snpc 
        = (4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_5 
        = (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load));
    vlSelf->SimTop__DOT__arbiter__DOT___T_26 = (1U 
                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state));
    vlSelf->SimTop__DOT__arbiter__DOT___T_33 = (2U 
                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0 
        = ((1U == (0x1fU & (IData)((vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                    >> 7U)))) | (5U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                             >> 7U)))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0 
        = (0xffU & ((0xfU & ((3U & ((1U & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))))) 
                                    | (- (IData)((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))))))) 
                             | (- (IData)((2U == (3U 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))))))) 
                    | (- (IData)((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))))));
    __Vtemp_h716d392e__0[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0);
    __Vtemp_h716d392e__0[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0 
                                        >> 0x20U));
    __Vtemp_h716d392e__0[2U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1);
    __Vtemp_h716d392e__0[3U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1 
                                        >> 0x20U));
    __Vtemp_h716d392e__0[4U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2);
    __Vtemp_h716d392e__0[5U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2 
                                        >> 0x20U));
    __Vtemp_h716d392e__0[6U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3);
    __Vtemp_h716d392e__0[7U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3 
                                        >> 0x20U));
    __Vtemp_h716d392e__0[8U] = 0U;
    __Vtemp_h716d392e__0[9U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1 
        = ((4U < (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType))
            ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0
            : ((0x13fU >= (0x1ffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_h716d392e__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                        << 6U))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                          << 6U)))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_h716d392e__0[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x1ffU 
                                                                         & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                                            << 6U))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                           << 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_h716d392e__0[
                                                                       (0xeU 
                                                                        & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                                           << 1U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType) 
                                                           << 6U)))))
                : 0ULL));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[0U] 
        = (((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
             ? 0U : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)) 
           | (((1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)
                : 0U) | (((2U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                           ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)
                           : 0U) | ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)
                                     : 0U))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[1U] 
        = (((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
             ? 0U : (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                             >> 0x20U))) | (((1U == 
                                              (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                              ? (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                                         >> 0x20U))
                                              : 0U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                 ? (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                                            >> 0x20U))
                                                 : 0U) 
                                               | ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                   ? (IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                                              >> 0x20U))
                                                   : 0U))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U] 
        = ((1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
            ? (1U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                             >> 0x3fU))) : 0U);
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[0U] 
        = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA);
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[1U] 
        = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                   >> 0x20U));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[2U] 
        = (1U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                         >> 0x3fU)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0 
        = ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr)))
            ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
            : (2ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA 
        = ((0x2dU == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)))
            : ((0x25U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                ? (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA))
                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt 
        = (0x3fU & ((0x20U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                     ? (0x1fU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))
                     : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)));
    vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
           != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_39 
        = ((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)) 
           & (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_40 
        = ((IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign 
        = (IData)((4U == (5U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))));
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid)) 
                 | (((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                     != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                    & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              - (IData)(2U))) != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6950318e__0 
        = ((0x73U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
           | (0x100073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes 
        = (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
           ^ vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB);
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3 
        = ((0x37U == (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
           | (0x17U == (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))));
    __Vtemp_ha8eb555e__0[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA);
    __Vtemp_ha8eb555e__0[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                                        >> 0x20U));
    __Vtemp_ha8eb555e__0[2U] = 0U;
    __Vtemp_h300296b8__0[0U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                        ^ (- (QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                                                  >> 6U))))))));
    __Vtemp_h300296b8__0[1U] = (IData)(((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                         ^ (- (QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                                                   >> 6U))))))) 
                                        >> 0x20U));
    __Vtemp_h300296b8__0[2U] = 0U;
    __Vtemp_h91331739__0[0U] = (1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                         >> 6U)));
    __Vtemp_h91331739__0[1U] = 0U;
    __Vtemp_h91331739__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h9eb96ac4__0, __Vtemp_h300296b8__0, __Vtemp_h91331739__0);
    VL_ADD_W(3, __Vtemp_hf0b3cc87__0, __Vtemp_ha8eb555e__0, __Vtemp_h9eb96ac4__0);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U] 
        = __Vtemp_hf0b3cc87__0[0U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U] 
        = __Vtemp_hf0b3cc87__0[1U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[2U] 
        = (1U & __Vtemp_hf0b3cc87__0[2U]);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
           & (1U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18 
        = (((0x180U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
             ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp
             : 0ULL) | (((0x342U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                          ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause
                          : 0ULL) | (((0x305U == (0xfffU 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                                       ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                       : 0ULL) | ((
                                                   (0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus
                                                    : 0ULL) 
                                                  | ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                                                      ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc
                                                      : 0ULL)))));
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
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA 
        = (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm 
           + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN 
        = ((0x380U & ((IData)((vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                               >> 0xcU)) << 7U)) | 
           (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[0U] 
        = (((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
             ? 0U : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)) 
           | (((1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[0U]
                : 0U) | (((2U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                           ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[0U]
                           : 0U) | ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)
                                     : 0U))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[1U] 
        = (((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
             ? 0U : (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                             >> 0x20U))) | (((1U == 
                                              (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                              ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[1U]
                                              : 0U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                 ? 
                                                SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[1U]
                                                 : 0U) 
                                               | ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                   ? (IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                                                              >> 0x20U))
                                                   : 0U))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U] 
        = (((1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
             ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[2U]
             : 0U) | ((2U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                       ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____VdfgTmp_ha05fe7d2__0[2U]
                       : 0U));
    if ((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0 
            = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign)
                                  ? (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                                                           >> 0x1fU)))))
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1 
            = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign)
                                  ? (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                                                           >> 0x1fU)))))
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)));
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target 
            = (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc 
               + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm);
    } else {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1 
            = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB;
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target 
            = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U])));
    }
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid) 
                    & (IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt 
        = (1U & ((~ vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[2U]) 
                 ^ (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes 
                            >> 0x3fU))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA)) 
           & (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest) 
               == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA)) 
              & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB)) 
           & (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest) 
               == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB)) 
              & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22 
        = (((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
             ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA
             : 0ULL) | (((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                          ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18 
                             | vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)
                          : 0ULL) | (((3U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                       ? ((~ vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA) 
                                          & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18)
                                       : 0ULL) | ((
                                                   (5U 
                                                    == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                                                >> 0xfU)))))
                                                    : 0ULL) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                                       ? 
                                                      (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18 
                                                       | (QData)((IData)(
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                                                >> 0xfU))))))
                                                       : 0ULL) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                                         ? 
                                                        (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18 
                                                         & (0xffffffffffffffe0ULL 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (~ (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                                                >> 0xfU))))))))
                                                         : 0ULL))))));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 
        = (0xffffffU & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN 
                        | ((5U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                            ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                       >> 0x28U)) : 0U)));
    vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb 
        = (0xffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                    << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___addrAligned_T_17 
        = (1U & ((~ (IData)((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))))) 
                 | (((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)) 
                     & (1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))) 
                    | (((2U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                        & (0U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)))) 
                       | ((3U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                          & (0U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2 
        = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
           & (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid 
        = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb3d1940f__0 
        = ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6950318e__0) 
           | ((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
              | ((0xf3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                 | ((0x173U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                    | ((0x1f3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                       | ((0x2f3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                          | (0x373U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0 
        = ((0x63U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | ((0xe3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
              | ((0x263U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                 | ((0x2e3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                    | ((0x363U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                       | (0x3e3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0 
        = ((3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | ((0x83U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
              | ((0x103U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                 | ((0x203U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                    | (0x283U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0 
        = ((0x23U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | ((0xa3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
              | (0x123U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0 
        = ((0x303U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | (0x183U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0 
        = ((0xfc00U & ((IData)((vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                >> 0x1aU)) << 0xaU)) 
           | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1 
        = ((0x1fc00U & ((IData)((vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                 >> 0x19U)) << 0xaU)) 
           | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN));
    __Vtemp_he3e9cad7__0[0U] = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[0U];
    __Vtemp_he3e9cad7__0[1U] = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[1U];
    __Vtemp_he3e9cad7__0[2U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]))) 
                                 << 1U) | vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]);
    __Vtemp_he3e9cad7__0[3U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]))) 
                                 >> 0x1fU) | ((- (IData)(
                                                         (1U 
                                                          & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]))) 
                                              << 1U));
    __Vtemp_he3e9cad7__0[4U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]))) 
                                 >> 0x1fU) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0[2U]))) 
                                               << 1U)));
    __Vtemp_he3c759e5__0[0U] = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[0U];
    __Vtemp_he3c759e5__0[1U] = vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[1U];
    __Vtemp_he3c759e5__0[2U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]))) 
                                 << 1U) | vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]);
    __Vtemp_he3c759e5__0[3U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]))) 
                                 >> 0x1fU) | ((- (IData)(
                                                         (1U 
                                                          & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]))) 
                                              << 1U));
    __Vtemp_he3c759e5__0[4U] = (((- (IData)((1U & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]))) 
                                 >> 0x1fU) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1[2U]))) 
                                               << 1U)));
    VL_MUL_W(5, __Vtemp_hb9bf2033__0, __Vtemp_he3e9cad7__0, __Vtemp_he3c759e5__0);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[0U] 
        = __Vtemp_hb9bf2033__0[0U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[1U] 
        = __Vtemp_hb9bf2033__0[1U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[2U] 
        = __Vtemp_hb9bf2033__0[2U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[3U] 
        = __Vtemp_hb9bf2033__0[3U];
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[4U] 
        = (3U & __Vtemp_hb9bf2033__0[4U]);
    __Vtemp_h269611e2__0[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0);
    __Vtemp_h269611e2__0[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0 
                                        >> 0x20U));
    __Vtemp_h269611e2__0[2U] = (1U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0 
                                              >> 0x3fU)));
    __Vtemp_h4373a639__0[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1);
    __Vtemp_h4373a639__0[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1 
                                        >> 0x20U));
    __Vtemp_h4373a639__0[2U] = (1U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1 
                                              >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp_h84075690__0, __Vtemp_h269611e2__0, __Vtemp_h4373a639__0);
    vlSelf->__VdfgTmp_hf6fc2901__0[0U] = __Vtemp_h84075690__0[0U];
    vlSelf->__VdfgTmp_hf6fc2901__0[1U] = __Vtemp_h84075690__0[1U];
    vlSelf->__VdfgTmp_hf6fc2901__0[2U] = (1U & __Vtemp_h84075690__0[2U]);
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)) 
                  ^ ((IData)(((0U == (6U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                              & (0ULL == vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes))) 
                     | ((IData)(((4U == (6U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt))) 
                        | (IData)(((6U == (6U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                                   & (~ vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[2U])))))) 
                 & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                    >> 3U)));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0 
        = ((0xdU == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA, (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt))
            : ((7U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                   & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)
                : ((6U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                    ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA 
                       | vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)
                    : ((5U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                        ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA 
                           >> (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt))
                        : ((4U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                            ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes
                            : ((3U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                ? (QData)((IData)((1U 
                                                   & (~ 
                                                      vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[2U]))))
                                : ((2U == (0xfU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                    ? (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt))
                                    : ((1U == (0xfU 
                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                        ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA 
                                           << (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U])))))))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle 
        = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA)) 
           & (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest) 
               == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA)) 
              & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T) 
                 & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward)) 
                    | (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle 
        = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB)) 
           & (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest) 
               == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB)) 
              & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T) 
                 & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward)) 
                    | (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX))))));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_1 
        = (0xffffU & (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___GEN_0 
                      | ((6U == (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch)))
                          ? (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch 
                                     >> 0x30U)) : 0U)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid 
        = ((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3 
        = ((3U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3 
        = ((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0 
        = ((0x13U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | ((0x93U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0)) 
              | ((0x113U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                 | ((0x193U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                    | ((0x213U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                       | ((0x293U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0)) 
                          | ((0x4293U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0)) 
                             | ((0x313U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                                | (0x393U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))))))))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2 
        = ((0x13U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
            ? 0x40U : ((0x93U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0))
                        ? 1U : ((0x113U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                 ? 2U : ((0x193U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                          ? 3U : ((0x213U 
                                                   == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                   ? 4U
                                                   : 
                                                  ((0x293U 
                                                    == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0))
                                                    ? 5U
                                                    : 
                                                   ((0x4293U 
                                                     == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_0))
                                                     ? 0xdU
                                                     : 
                                                    ((0x313U 
                                                      == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                      ? 6U
                                                      : 
                                                     ((0x393U 
                                                       == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                       ? 7U
                                                       : 
                                                      ((0x33U 
                                                        == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                        ? 0x40U
                                                        : 
                                                       ((0x8033U 
                                                         == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                         ? 8U
                                                         : 
                                                        ((0xb3U 
                                                          == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                          ? 1U
                                                          : 
                                                         ((0x133U 
                                                           == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                           ? 2U
                                                           : 
                                                          ((0x1b3U 
                                                            == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                            ? 3U
                                                            : 
                                                           ((0x233U 
                                                             == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                             ? 4U
                                                             : 
                                                            ((0x2b3U 
                                                              == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                              ? 5U
                                                              : 
                                                             ((0x333U 
                                                               == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                               ? 6U
                                                               : 
                                                              ((0x3b3U 
                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                ? 7U
                                                                : 
                                                               ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3)
                                                                 ? 0x40U
                                                                 : 
                                                                ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)))
                                                                  ? 0x58U
                                                                  : 
                                                                 ((0x67U 
                                                                   == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                   ? 0x5aU
                                                                   : 
                                                                  ((0x63U 
                                                                    == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                    ? 0x10U
                                                                    : 
                                                                   ((0xe3U 
                                                                     == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                     ? 0x11U
                                                                     : 
                                                                    ((0x263U 
                                                                      == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x2e3U 
                                                                       == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x363U 
                                                                        == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x3e3U 
                                                                         == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((3U 
                                                                          == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x83U 
                                                                           == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                           ? 1U
                                                                           : 
                                                                          ((0x103U 
                                                                            == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                            ? 2U
                                                                            : 
                                                                           ((0x203U 
                                                                             == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                             ? 4U
                                                                             : 
                                                                            ((0x283U 
                                                                              == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                              ? 5U
                                                                              : 
                                                                             ((0x23U 
                                                                               == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                               ? 8U
                                                                               : 
                                                                              ((0xa3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                ? 9U
                                                                                : 
                                                                               ((0x123U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 0x60U
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x29bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x829bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x60U
                                                                                 : 
                                                                                ((0x803bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x2bbU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x82bbU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x303U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x183U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x1a3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0x6bU 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 0x40U
                                                                                 : 
                                                                                ((0x433U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x4b3U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x533U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x5b3U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x633U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0x6b3U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x733U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x7b3U 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0x43bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6950318e__0)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x10500073U 
                                                                                == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))
                                                                                 ? 0x40U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x173U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x1f3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x2f3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x373U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                                                 ? 6U
                                                                                 : 
                                                                                (7U 
                                                                                & (- (IData)(
                                                                                (0x3f3U 
                                                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0 
        = ((0x3bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
           | ((0x803bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
              | ((0xbbU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                 | ((0x2bbU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                    | (0x82bbU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2 
        = ((0x433U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
           | ((0x4b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
              | ((0x533U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                 | ((0x5b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                    | ((0x633U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                       | ((0x6b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                          | ((0x733U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                             | ((0x7b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                | ((0x43bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                   | ((0x63bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                      | ((0x6bbU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                         | ((0x73bU 
                                             == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                            | (0x7bbU 
                                               == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)))))))))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0 
        = ((0x1bU == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
           | ((0x9bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
              | ((0x29bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                 | (0x829bU == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0 
        = ((0x33U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
           | ((0x8033U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
              | ((0xb3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                 | ((0x133U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                    | ((0x1b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                       | ((0x233U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                          | ((0x2b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                             | ((0x333U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                | (0x3b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1)))))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
        = ((4U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
            ? ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                ? (QData)((IData)((1U & vlSelf->__VdfgTmp_hf6fc2901__0[2U])))
                : (((QData)((IData)(vlSelf->__VdfgTmp_hf6fc2901__0[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_hf6fc2901__0[0U]))))
            : ((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                ? (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[2U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits[0U])))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___T_5 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1) 
           & (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target 
        = ((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)
            ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
            : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
            ? SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
            : ((0x20U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0)))
                : SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT___GEN_0));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T) 
           & (((~ (vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
                   >> (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA))) 
               | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle) 
                  | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward))) 
              & ((~ (vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy 
                     >> (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB))) 
                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle) 
                    | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward)))));
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
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
           & ((~ (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)) 
              & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                 >> 4U)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_3_T 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
           & ((1U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
              & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
           & ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)) 
              & ((0x180U != (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
                 | ((0U == (0xfU & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22 
                                            >> 0x3cU)))) 
                    | (8U == (0xfU & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22 
                                              >> 0x3cU))))))));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
           & ((0U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
              & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
           & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
              >> 3U));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4 
        = (((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0) 
            & (0x58U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2)))
            ? 0x5cU : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1 
        = (((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0) 
            | ((0x33U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
               | ((0x8033U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                  | ((0xb3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                     | ((0x133U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                        | ((0x1b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                           | ((0x233U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                              | ((0x2b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                 | ((0x333U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                    | ((0x3b3U == SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_1) 
                                       | ((0x37U == 
                                           (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                                                | ((0x67U 
                                                    == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                                                   | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0)))))))))))))))
            ? 0U : (((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0) 
                     | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0))
                     ? 1U : (((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0) 
                              | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0))
                              ? 0U : (((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0) 
                                       | (0x1a3U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)))
                                       ? 1U : ((0x6bU 
                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                ? 0U
                                                : ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2)
                                                    ? 2U
                                                    : 
                                                   ((0x73U 
                                                     == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))
                                                     ? 3U
                                                     : 
                                                    (3U 
                                                     & (- (IData)(
                                                                  ((0x10500073U 
                                                                    != (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                                                                   | (0x100073U 
                                                                      == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)))))))))))));
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen 
        = ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0) 
           | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0) 
              | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3) 
                 | ((0x6fU == (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                    | ((0x67U == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                       | ((~ (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0)) 
                          & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0) 
                             | ((~ (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0)) 
                                & ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0) 
                                   | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0) 
                                      | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0) 
                                         | ((0x1a3U 
                                             != (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                                            & ((0x6bU 
                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                                               | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2) 
                                                  | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb3d1940f__0) 
                                                     | (0x3f3U 
                                                        == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)))))))))))))))));
    SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h2bc0261a__0 
        = ((~ (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0)) 
           & ((~ (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0)) 
              & ((~ (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3)) 
                 & (0x6fU == (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0 
        = ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h63b42b8d__0)
            ? 4U : ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h816b404f__0)
                     ? 5U : ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_3)
                              ? 6U : ((0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)))
                                       ? 7U : ((0x67U 
                                                == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                ? 4U
                                                : ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h909cd0cd__0)
                                                    ? 1U
                                                    : 
                                                   ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hf7d9d40b__0)
                                                     ? 4U
                                                     : 
                                                    ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h7537d0a5__0)
                                                      ? 2U
                                                      : 
                                                     ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h6c2051ce__0)
                                                       ? 4U
                                                       : 
                                                      ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hd44cc6ec__0)
                                                        ? 5U
                                                        : 
                                                       ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h4b87b442__0)
                                                         ? 4U
                                                         : 
                                                        ((0x1a3U 
                                                          == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                          ? 2U
                                                          : 
                                                         ((0x6bU 
                                                           == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN))
                                                           ? 4U
                                                           : 
                                                          ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_2)
                                                            ? 5U
                                                            : 
                                                           ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb3d1940f__0)
                                                             ? 4U
                                                             : 
                                                            ((0x3f3U 
                                                              == (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN)) 
                                                             << 2U))))))))))))))));
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
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp 
        = ((0x180U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess 
        = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode) 
            < (3U & (IData)((vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB 
                             >> 8U)))) | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4) 
                                          & (IData)(
                                                    ((0xc00ULL 
                                                      == 
                                                      (0xc00ULL 
                                                       & vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)) 
                                                     & (~ 
                                                        (((2U 
                                                           == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)) 
                                                          | (6U 
                                                             == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
                                                         & (0ULL 
                                                            == vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA)))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_8_T_2 
        = ((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode)) 
           & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_9_T_2 
        = ((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode)) 
           & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_11_T_2 
        = ((3U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode)) 
           & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad 
        = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)) 
           & (3U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
           & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)) 
              & (~ (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___addrAligned_T_17))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
           & ((~ (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___addrAligned_T_17)) 
              & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)));
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm 
        = (((4U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0))
             ? (((- (QData)((IData)((1U & (IData)((vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                   >> 0x1fU)))))) 
                 << 0xcU) | (QData)((IData)((0xfffU 
                                             & (IData)(
                                                       (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                        >> 0x14U))))))
             : 0ULL) | (((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0))
                          ? (((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                             >> 0x1fU)))))) 
                              << 0xcU) | (QData)((IData)(
                                                         ((0xfe0U 
                                                           & ((IData)(
                                                                      (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                       >> 0x19U)) 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                        >> 7U)))))))
                          : 0ULL) | (((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                          >> 0x1fU)))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0x800U 
                                                              & ((IData)(
                                                                         (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                          >> 7U)) 
                                                                 << 0xbU)) 
                                                             | ((0x7e0U 
                                                                 & ((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                             >> 0x19U)) 
                                                                    << 5U)) 
                                                                | (0x1eU 
                                                                   & ((IData)(
                                                                              (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                               >> 8U)) 
                                                                      << 1U)))))))
                                       : 0ULL) | ((
                                                   (6U 
                                                    == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(
                                                                               (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0xcU)) 
                                                                       << 0xcU))))
                                                    : 0ULL) 
                                                  | ((IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h2bc0261a__0)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0x1fU)))))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & ((IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0xcU)) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                            | (0x7feU 
                                                                               & ((IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                      : 0ULL)))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19 
        = ((6U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
           | (IData)(SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_h2bc0261a__0));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___exceptionNO_T_20 
        = ((((~ ((0x341U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
                 | ((0x300U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
                    | ((0x305U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
                       | ((0x342U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB))) 
                          | (0x180U == (0xfffU & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))))))) 
             | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess)) 
            & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4)) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad)
            ? (((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                 ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b41638d__0
                 : 0ULL) | (((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                              ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b29ba84__0
                              : 0ULL) | (((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                           ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_hb190fabb__0
                                           : 0ULL) 
                                         | (((4U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                              ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b41638d__0
                                              : 0ULL) 
                                            | (((5U 
                                                 == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                                 ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b29ba84__0
                                                 : 0ULL) 
                                               | ((6U 
                                                   == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                                   ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_hb190fabb__0
                                                   : 0ULL))))))
            : vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h1146b7f8__0 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3)) 
                 & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))));
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19 
        = ((4U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
           | (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN 
        = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_11_T_2) 
            << 6U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_9_T_2) 
                       << 5U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_8_T_2) 
                                  << 4U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2) 
                                             << 3U) 
                                            | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_3_T) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___exceptionNO_T_20)))))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid)
            ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits
            : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47) 
           | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad)
               ? (2U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
               : (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_39) 
                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_40)) 
                  & ((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)) 
                     | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
           & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
              & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore) 
                 & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h1146b7f8__0))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)) 
              & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore)) 
                 & (IData)(SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h1146b7f8__0))));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr 
        = ((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid) 
           & ((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
              | ((1U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType)) 
                 | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10))));
    vlSelf->SimTop__DOT__arbiter__DOT___T_15 = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)) 
                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    vlSelf->SimTop__DOT__arbiter__DOT___T_1 = ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready) 
                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    vlSelf->SimTop__DOT__arbiter__DOT___T_8 = ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)) 
                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid 
        = (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3) 
            & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))) 
           | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr) 
              | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
            ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
            : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid)) 
                 | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4)));
    vlSelf->SimTop__DOT__arbiter__DOT___GEN = (1U & 
                                               ((~ (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_8)) 
                                                | (IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_1)));
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1 
        = ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    vlSelf->SimTop__DOT__core__DOT___dequeueSize_T 
        = (((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
            | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)) 
           & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
}

VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSimTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] SimTop.TP_SRAM.state_load or [changed] SimTop.TP_SRAM.state_store)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] SimTop.TP_SRAM.state_load or [changed] SimTop.TP_SRAM.state_store)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_commit = 0;
    vlSelf->io_pc = 0;
    vlSelf->io_gpr_regs_0 = 0;
    vlSelf->io_gpr_regs_1 = 0;
    vlSelf->io_gpr_regs_2 = 0;
    vlSelf->io_gpr_regs_3 = 0;
    vlSelf->io_gpr_regs_4 = 0;
    vlSelf->io_gpr_regs_5 = 0;
    vlSelf->io_gpr_regs_6 = 0;
    vlSelf->io_gpr_regs_7 = 0;
    vlSelf->io_gpr_regs_8 = 0;
    vlSelf->io_gpr_regs_9 = 0;
    vlSelf->io_gpr_regs_10 = 0;
    vlSelf->io_gpr_regs_11 = 0;
    vlSelf->io_gpr_regs_12 = 0;
    vlSelf->io_gpr_regs_13 = 0;
    vlSelf->io_gpr_regs_14 = 0;
    vlSelf->io_gpr_regs_15 = 0;
    vlSelf->io_gpr_regs_16 = 0;
    vlSelf->io_gpr_regs_17 = 0;
    vlSelf->io_gpr_regs_18 = 0;
    vlSelf->io_gpr_regs_19 = 0;
    vlSelf->io_gpr_regs_20 = 0;
    vlSelf->io_gpr_regs_21 = 0;
    vlSelf->io_gpr_regs_22 = 0;
    vlSelf->io_gpr_regs_23 = 0;
    vlSelf->io_gpr_regs_24 = 0;
    vlSelf->io_gpr_regs_25 = 0;
    vlSelf->io_gpr_regs_26 = 0;
    vlSelf->io_gpr_regs_27 = 0;
    vlSelf->io_gpr_regs_28 = 0;
    vlSelf->io_gpr_regs_29 = 0;
    vlSelf->io_gpr_regs_30 = 0;
    vlSelf->io_gpr_regs_31 = 0;
    vlSelf->io_csr_regs_0 = 0;
    vlSelf->io_csr_regs_1 = 0;
    vlSelf->io_csr_regs_2 = 0;
    vlSelf->io_csr_regs_3 = 0;
    vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data = 0;
    vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb = 0;
    vlSelf->SimTop__DOT__io_commit_REG = 0;
    vlSelf->SimTop__DOT__io_pc_REG = 0;
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen = 0;
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest = 0;
    vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm = 0;
    vlSelf->SimTop__DOT__core__DOT__ringBufferHead = 0;
    vlSelf->SimTop__DOT__core__DOT__ringBufferTail = 0;
    vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1 = 0;
    vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T = 0;
    vlSelf->SimTop__DOT__core__DOT___dequeueSize_T = 0;
    vlSelf->SimTop__DOT__core__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT___wen_T = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_out_0_valid = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___T_5 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__snpc = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0 = 0;
    vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder2__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___wbClearMask_T_6 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___isuFireSetMask_T_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid = 0;
    VL_ZERO_RESET_W(65, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_5 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_39 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_40 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_4 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b41638d__0 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b29ba84__0 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_hb190fabb__0 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0 = 0;
    VL_ZERO_RESET_W(130, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res = 0;
    VL_ZERO_RESET_W(65, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1);
    VL_ZERO_RESET_W(65, vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0);
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_3_T = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_11_T_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_9_T_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___csrExpectionVec_8_T_2 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___exceptionNO_T_20 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1 = 0;
    vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__state = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___T_1 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___T_8 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c_1 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___T_15 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c_2 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___GEN = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c_3 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___T_26 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c_4 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT___T_33 = 0;
    vlSelf->SimTop__DOT__arbiter__DOT__c_5 = 0;
    vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load = 0;
    vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store = 0;
    vlSelf->SimTop__DOT__TP_SRAM__DOT__c = 0;
    VL_ZERO_RESET_W(65, vlSelf->__VdfgTmp_hf6fc2901__0);
    vlSelf->__Vdly__SimTop__DOT__core__DOT__ringBufferHead = 0;
    vlSelf->__Vdlyvdim0__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0;
    vlSelf->__Vdlyvval__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0;
    vlSelf->__Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0 = 0;
    vlSelf->__Vdly__SimTop__DOT__arbiter__DOT__state = 0;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_load = 0;
    vlSelf->__Vdly__SimTop__DOT__TP_SRAM__DOT__state_store = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_load = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__state_store = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
