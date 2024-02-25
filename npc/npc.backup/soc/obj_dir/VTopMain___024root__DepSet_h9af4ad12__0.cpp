// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopMain___024root.h"

void VTopMain___024root___eval_act(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___eval_act\n"); );
}

extern const VlWide<13>/*415:0*/ VTopMain__ConstPool__CONST_ha21cdca8_0;

VL_INLINE_OPT void VTopMain___024root___nba_sequent__TOP__0(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0;
    TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0 = 0;
    SData/*15:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_0;
    TopMain__DOT___T__DOT__id__DOT___GEN_0 = 0;
    IData/*31:0*/ TopMain__DOT___T__DOT__id__DOT__instrType;
    TopMain__DOT___T__DOT__id__DOT__instrType = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h98f07f6e__0;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h98f07f6e__0 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h198f517f__0;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h198f517f__0 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h3012a933__0;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h3012a933__0 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_haebc9599__0;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_haebc9599__0 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hba57bb90__0;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hba57bb90__0 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1;
    TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T;
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1;
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1 = 0;
    CData/*0:0*/ TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_2;
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_2 = 0;
    VlWide<13>/*397:0*/ __Vdly__TopMain__DOT___ID_EX__DOT__reg_0;
    VL_ZERO_W(398, __Vdly__TopMain__DOT___ID_EX__DOT__reg_0);
    VlWide<4>/*127:0*/ __Vtemp_h0c209077__0;
    VlWide<4>/*127:0*/ __Vtemp_he9742889__0;
    VlWide<4>/*127:0*/ __Vtemp_h68a75f0f__0;
    VlWide<4>/*127:0*/ __Vtemp_h12d042b9__0;
    VlWide<4>/*127:0*/ __Vtemp_h29a547bf__0;
    // Body
    vlSelf->__Vdly__TopMain__DOT__rNPCValid = vlSelf->TopMain__DOT__rNPCValid;
    vlSelf->__Vdly__TopMain__DOT__rNPC = vlSelf->TopMain__DOT__rNPC;
    vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK 
        = vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
    vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK 
        = vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[1U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[2U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[3U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[4U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[4U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[5U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[6U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[6U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[7U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[8U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[8U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[9U] = 
        vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[9U];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
        = vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xbU] 
        = vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xbU];
    __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xcU] 
        = vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xcU];
    vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK 
        = ((~ (IData)(vlSelf->reset)) & ((2U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW)) 
                                         & (~ (IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK))));
    vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)
                                           ? (1U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW))
                                           : ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6)
                                               ? (0U 
                                                  != vlSelf->TopMain__DOT__rPC)
                                               : ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_10) 
                                                  & (1U 
                                                     == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW))))) 
                                         & (~ (IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK))));
    __Vtemp_h0c209077__0[3U] = ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h5bdbc692__0)
                                   ? 0U : ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6)
                                            ? 1U : 
                                           ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_5)
                                             ? 2U : 
                                            ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_24)
                                              ? 0U : 
                                             ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_3)
                                               ? 1U
                                               : ((0x1a3U 
                                                   == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                  << 1U)))))) 
                                 << 0xfU) | (((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h5bdbc692__0) 
                                                | (3U 
                                                   == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))
                                                ? 0U
                                                : (
                                                   (0x83U 
                                                    == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x103U 
                                                     == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x203U 
                                                      == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                      ? 4U
                                                      : 
                                                     ((0x283U 
                                                       == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                       ? 5U
                                                       : 
                                                      ((0x23U 
                                                        == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                        ? 0U
                                                        : 
                                                       ((0xa3U 
                                                         == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                         ? 1U
                                                         : 
                                                        ((0x123U 
                                                          == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_24)
                                                           ? 0U
                                                           : 
                                                          ((0x303U 
                                                            == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                            ? 6U
                                                            : 
                                                           ((0x183U 
                                                             == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                             ? 3U
                                                             : 
                                                            (3U 
                                                             & (- (IData)(
                                                                          (0x1a3U 
                                                                           == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))))))))))))) 
                                              << 0xcU) 
                                             | (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                >> 0x14U)));
    __Vtemp_he9742889__0[3U] = ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_heb1f8a09__0) 
                                  & (((0x233U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                      & ((0x2b3U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                         & ((0x333U 
                                             != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                            & ((0x3b3U 
                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                               & ((0x37U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                  & ((0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                     & (0x6fU 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])))))))) 
                                     & ((0x67U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                        & ((0x63U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                           & ((0xe3U 
                                               != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                              & ((0x263U 
                                                  != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                 & ((0x2e3U 
                                                     != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                    & ((0x363U 
                                                        != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                       & ((0x3e3U 
                                                           != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                          & ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6) 
                                                             | ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_14) 
                                                                & ((0x123U 
                                                                    != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                   & ((0x1bU 
                                                                       != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                      & ((0x9bU 
                                                                          != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                         & ((0x29bU 
                                                                             != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                            & ((0x829bU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                               & ((0x3bU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & ((0x803bU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & ((0xbbU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & ((0x2bbU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & ((0x82bbU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_3)))))))))))))))))))))) 
                                 << 0x11U) | __Vtemp_h0c209077__0[3U]);
    __Vtemp_h68a75f0f__0[3U] = (((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h0357b6a5__0) 
                                   & ((0x63U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                      & ((0xe3U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                         & ((0x263U 
                                             != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                            & ((0x2e3U 
                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                               & ((0x363U 
                                                   != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                  & ((0x3e3U 
                                                      != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                     & (~ 
                                                        ((3U 
                                                          == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                         | ((0x83U 
                                                             == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                            | (0x103U 
                                                               == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))))))))) 
                                  & (((0x203U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                      & ((0x283U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                         & ((0x23U 
                                             != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                            & ((0xa3U 
                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                               & ((0x123U 
                                                   != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                  & ((0x1bU 
                                                      != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                     & ((0x9bU 
                                                         != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                        & ((0x29bU 
                                                            != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                           & ((0x829bU 
                                                               != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                              & ((0x3bU 
                                                                  != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                 & ((0x803bU 
                                                                     != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                    & ((0xbbU 
                                                                        != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                       & ((0x2bbU 
                                                                           != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                          & ((0x82bbU 
                                                                              != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                             & (0x303U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))))))))))))) 
                                     & ((0x183U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                        & ((0x1a3U 
                                            != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                           & ((0x433U 
                                               != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                              & ((0x4b3U 
                                                  != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                 & ((0x533U 
                                                     != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                    & ((0x5b3U 
                                                        != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                       & ((0x633U 
                                                           != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                          & ((0x6b3U 
                                                              != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                             & ((0x733U 
                                                                 != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                & ((0x7b3U 
                                                                    != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                   & ((0x43bU 
                                                                       != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                      & ((0x63bU 
                                                                          != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                         & ((0x6bbU 
                                                                             != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                            & ((0x73bU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                               & ((0x7bbU 
                                                                                != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                & ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h8cc90303__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))))))))))))))))) 
                                 << 0x12U) | __Vtemp_he9742889__0[3U]);
    __Vtemp_h12d042b9__0[3U] = ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_16) 
                                  | ((0xb3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                     | ((0x133U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                        | ((0x1b3U 
                                            == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                           | ((0x233U 
                                               == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                              | ((0x2b3U 
                                                  == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                 | ((0x333U 
                                                     == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                    | ((0x3b3U 
                                                        == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                       | ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                          | ((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                             | ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                                | ((0x67U 
                                                                    == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                   | ((0x63U 
                                                                       != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                      & ((0xe3U 
                                                                          != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                         & ((0x263U 
                                                                             != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                            & ((0x2e3U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                               & ((0x363U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                & ((0x3e3U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                & ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6) 
                                                                                | ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_14) 
                                                                                & ((0x123U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                & ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_24) 
                                                                                | ((0x303U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x183U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x1a3U 
                                                                                != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                & ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_2) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x1f3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h36ddfde0__0)))))))))))))))))))))))))))))) 
                                 << 0x13U) | __Vtemp_h68a75f0f__0[3U]);
    __Vtemp_h29a547bf__0[3U] = ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hed5ee32e__0)
                                   ? 0U : ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]))
                                            ? 2U : 
                                           (((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                             | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h9e44594c__0))
                                             ? 1U : 
                                            ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_7) 
                                               | ((3U 
                                                   == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                  | ((0x83U 
                                                      == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                     | ((0x103U 
                                                         == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                        | ((0x203U 
                                                            == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                           | ((0x283U 
                                                               == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                              | ((0x23U 
                                                                  == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                 | ((0xa3U 
                                                                     == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                    | ((0x123U 
                                                                        == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                       | ((0x1bU 
                                                                           == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                          | ((0x9bU 
                                                                              == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                             | ((0x29bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x829bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | (0xbbU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)))))))))))))))) 
                                              | ((0x2bbU 
                                                  == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                 | ((0x82bbU 
                                                     == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                    | ((0x303U 
                                                        == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                       | ((0x183U 
                                                           == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                          | ((0x1a3U 
                                                              == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                             | ((0x433U 
                                                                 == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                | ((0x4b3U 
                                                                    == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                   | ((0x533U 
                                                                       == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                      | ((0x5b3U 
                                                                          == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                         | ((0x633U 
                                                                             == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                            | ((0x6b3U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                               | ((0x733U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x7b3U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h70189e71__0)))))))))))))))))))))
                                              ? 0U : 
                                             ((0x2f3U 
                                               == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                               ? 2U
                                               : ((0x373U 
                                                   == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                   ? 3U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (0x3f3U 
                                                                 == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))))))))) 
                                 << 0x1dU) | ((((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_10)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_9)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_8)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h9e44594c__0)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_7)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6) 
                                                      | ((0x23U 
                                                          == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                         | ((0xa3U 
                                                             == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                            | ((0x123U 
                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                               | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_ha61c94bb__0)))))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_4)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_11)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        ((0xf3U 
                                                          == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h70189e71__0)
                                                           ? 5U
                                                           : (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h36ddfde0__0)))))))))))) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->TopMain__DOT_____05FT_io_id_ex_IO_ctrl2EXU_aluCtrl) 
                                                  << 0x14U) 
                                                 | __Vtemp_h12d042b9__0[3U])));
    if (vlSelf->debug_hazard_stallF) {
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[0U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[1U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[1U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[2U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[2U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[3U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[3U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[4U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[4U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[5U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[5U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[6U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[6U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[7U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[7U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[8U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[8U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[9U] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[9U];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[0xaU];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xbU] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[0xbU];
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xcU] 
            = VTopMain__ConstPool__CONST_ha21cdca8_0[0xcU];
    } else {
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0U] 
            = vlSelf->pipelineTrace_if_id_instr_instr;
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[1U] 
            = (IData)(((0x342U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                   >> 0x14U)) ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mcause
                        : ((0x341U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                       >> 0x14U)) ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mepc
                            : ((0x305U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                           >> 0x14U))
                                ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mtvec
                                : ((0x300U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                               >> 0x14U))
                                    ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mstatus
                                    : 0ULL)))));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[2U] 
            = (IData)((((0x342U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                    >> 0x14U)) ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mcause
                         : ((0x341U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                        >> 0x14U)) ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mepc
                             : ((0x305U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                            >> 0x14U))
                                 ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mtvec
                                 : ((0x300U == (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                >> 0x14U))
                                     ? vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mstatus
                                     : 0ULL)))) >> 0x20U));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[3U] 
            = (((IData)(vlSelf->jumpTrace_bruSrcB) 
                << 0x1fU) | __Vtemp_h29a547bf__0[3U]);
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[4U] 
            = (((IData)(vlSelf->jumpTrace_bruSrcB) 
                >> 1U) | ((IData)((vlSelf->jumpTrace_bruSrcB 
                                   >> 0x20U)) << 0x1fU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[5U] 
            = (((IData)((vlSelf->jumpTrace_bruSrcB 
                         >> 0x20U)) >> 1U) | ((IData)(vlSelf->jumpTrace_bruSrcA) 
                                              << 0x1fU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[6U] 
            = (((IData)(vlSelf->jumpTrace_bruSrcA) 
                >> 1U) | ((IData)((vlSelf->jumpTrace_bruSrcA 
                                   >> 0x20U)) << 0x1fU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[7U] 
            = (((IData)((vlSelf->jumpTrace_bruSrcA 
                         >> 0x20U)) >> 1U) | ((IData)(vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm) 
                                              << 0x1fU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[8U] 
            = (((IData)(vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm) 
                >> 1U) | ((IData)((vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm 
                                   >> 0x20U)) << 0x1fU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[9U] 
            = (((IData)(vlSelf->debug_rdD_data) << 0x1fU) 
               | ((IData)((vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm 
                           >> 0x20U)) >> 1U));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
            = (((IData)(vlSelf->pipelineTrace_if_id_pc_pc) 
                << 0xeU) | ((0x3e00U & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                        >> 6U)) | (
                                                   (0x1f0U 
                                                    & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                       >> 0x10U)) 
                                                   | ((IData)(vlSelf->debug_rdD_data) 
                                                      >> 1U))));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xbU] 
            = (((IData)(vlSelf->pipelineTrace_if_id_pc_pc) 
                >> 0x12U) | ((IData)((vlSelf->pipelineTrace_if_id_pc_pc 
                                      >> 0x20U)) << 0xeU));
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xcU] 
            = ((IData)((vlSelf->pipelineTrace_if_id_pc_pc 
                        >> 0x20U)) >> 0x12U);
    }
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_instr_instr 
        = vlSelf->pipelineTrace_id_ex_instr_instr;
    vlSelf->TopMain__DOT__instr_rf_instr = vlSelf->debug_instr_instr;
    vlSelf->TopMain__DOT__pc_rf_pc = vlSelf->debug_commit_pc;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_instr_instr 
        = vlSelf->pipelineTrace_ex_ls_instr_instr;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_commit_pc 
        = vlSelf->pipelineTrace_ex_ls_pc_pc;
    vlSelf->TopMain__DOT__pcEnable_rf = vlSelf->TopMain__DOT__pcEnable_ls_wb;
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_commit_pc 
        = vlSelf->pipelineTrace_id_ex_pc_pc;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_exOut = vlSelf->debug_probe_data;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd = vlSelf->debug_rdM_data;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_readData 
        = ((1U & ((~ ((~ (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_10)) 
                      | (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6))) 
                  | (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)))
            ? vlSelf->TopMain__DOT_____05FTP_SRAM_io_R_s2mRdata
            : 0ULL);
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd = vlSelf->debug_rdE_data;
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth 
        = (7U & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                 >> 0xcU));
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_memtoReg 
        = vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg;
    TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1 
        = ((IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite) 
           & (0U != (IData)(vlSelf->debug_rdW_data)));
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_0 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (1U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_1 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (2U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_2 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (3U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_3 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (4U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_4 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (5U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_5 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (6U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_6 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (7U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_7 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (8U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_8 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (9U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_9 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xaU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_10 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xbU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_11 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xcU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_12 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xdU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_13 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xeU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_14 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0xfU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_15 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x10U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_16 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x11U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_17 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x12U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_18 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x13U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_19 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x14U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_20 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x15U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_21 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x16U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_22 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x17U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_23 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x18U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_24 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x19U == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_25 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1aU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_26 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1bU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_27 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1cU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_28 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1dU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_29 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1eU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_30 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if (((IData)(TopMain__DOT___T__DOT__rf__DOT__unnamedblk1__DOT___T_1) 
         & (0x1fU == (IData)(vlSelf->debug_rdW_data)))) {
        vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_31 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW 
        = (3U & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                 >> 0xfU));
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1 
        = (0x305U == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_csrID));
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_2 
        = (0x341U == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_csrID));
    TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T 
        = (0x300U == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_csrID));
    if ((0x73U == vlSelf->pipelineTrace_if_id_instr_instr)) {
        vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mstatus = 0xa0001800ULL;
    } else if (((IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite) 
                & (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T))) {
        vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mstatus 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if ((1U & (~ ((((0x73U == vlSelf->pipelineTrace_if_id_instr_instr) 
                    | (~ (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite))) 
                   | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T)) 
                  | (~ (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1)))))) {
        vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mtvec 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if ((1U & (~ (((((0x73U == vlSelf->pipelineTrace_if_id_instr_instr) 
                     | (~ (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite))) 
                    | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T)) 
                   | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1)) 
                  | (~ (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_2)))))) {
        vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mepc 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if ((1U & (~ ((((((0x73U == vlSelf->pipelineTrace_if_id_instr_instr) 
                      | (~ (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite))) 
                     | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T)) 
                    | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_1)) 
                   | (IData)(TopMain__DOT___T__DOT__csrf__DOT__unnamedblk1__DOT___T_2)) 
                  | (0x342U != (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_csrID)))))) {
        vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mcause 
            = vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data;
    }
    if ((1U & ((~ (IData)(vlSelf->debug_hazard_stallF)) 
               & (~ (IData)(vlSelf->jumpTrace_idu_pcSrc))))) {
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[0U] 
            = (IData)(vlSelf->TopMain__DOT__rPC);
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[1U] 
            = (IData)((vlSelf->TopMain__DOT__rPC >> 0x20U));
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
            = ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___GEN)
                ? 0U : (IData)(vlSelf->TopMain__DOT_____05FTP_SRAM_io_R_s2mRdata));
    } else if (((~ (IData)(vlSelf->debug_hazard_stallF)) 
                & (IData)(vlSelf->jumpTrace_idu_pcSrc))) {
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[0U] = 0U;
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[1U] = 0U;
        vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] = 0U;
    }
    vlSelf->pipelineTrace_ex_ls_instr_instr = vlSelf->TopMain__DOT___EX_LS__DOT__reg_instr_instr;
    vlSelf->pipelineTrace_rf_instr_instr = vlSelf->TopMain__DOT__instr_rf_instr;
    vlSelf->pipelineTrace_rf_pc_pc = vlSelf->TopMain__DOT__pc_rf_pc;
    vlSelf->debug_instr_instr = vlSelf->TopMain__DOT___LS_WB__DOT__reg_instr_instr;
    vlSelf->debug_commit_pc = vlSelf->TopMain__DOT___LS_WB__DOT__reg_commit_pc;
    vlSelf->pipelineTrace_rf_pcEnable = vlSelf->TopMain__DOT__pcEnable_rf;
    vlSelf->TopMain__DOT__pcEnable_ls_wb = vlSelf->TopMain__DOT__pcEnable_ex_ls;
    vlSelf->pipelineTrace_ex_ls_pc_pc = vlSelf->TopMain__DOT___EX_LS__DOT__reg_commit_pc;
    vlSelf->debug_alu_data_W_data = vlSelf->TopMain__DOT___LS_WB__DOT__reg_exOut;
    vlSelf->debug_rdW_data = vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd;
    vlSelf->debug_rdM_data = vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd;
    vlSelf->__VdfgTmp_h43d5d70f__0 = ((6U != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                      & ((5U != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                         & ((4U != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                            & (3U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)))));
    vlSelf->__VdfgTmp_h5d2dc4b8__0 = ((6U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                      | ((5U != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                         & ((4U != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                            & ((3U 
                                                == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                               | (2U 
                                                  == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))))));
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg 
        = (1U & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                 >> 0x11U));
    vlSelf->gpr_zero = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_0;
    vlSelf->gpr_ra = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_1;
    vlSelf->gpr_sp = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_2;
    vlSelf->gpr_gp = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_3;
    vlSelf->gpr_tp = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_4;
    vlSelf->gpr_t0 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_5;
    vlSelf->gpr_t1 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_6;
    vlSelf->gpr_t2 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_7;
    vlSelf->gpr_s0 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_8;
    vlSelf->gpr_s1 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_9;
    vlSelf->gpr_a0 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_10;
    vlSelf->gpr_a1 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_11;
    vlSelf->gpr_a2 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_12;
    vlSelf->gpr_a3 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_13;
    vlSelf->gpr_a4 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_14;
    vlSelf->gpr_a5 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_15;
    vlSelf->gpr_a6 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_16;
    vlSelf->gpr_a7 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_17;
    vlSelf->gpr_s2 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_18;
    vlSelf->gpr_s3 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_19;
    vlSelf->gpr_s4 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_20;
    vlSelf->gpr_s5 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_21;
    vlSelf->gpr_s6 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_22;
    vlSelf->gpr_s7 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_23;
    vlSelf->gpr_s8 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_24;
    vlSelf->gpr_s9 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_25;
    vlSelf->gpr_s10 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_26;
    vlSelf->gpr_s11 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_27;
    vlSelf->gpr_t3 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_28;
    vlSelf->gpr_t4 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_29;
    vlSelf->gpr_t5 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_30;
    vlSelf->gpr_t6 = vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_31;
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_0);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[1U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_0 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[2U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_1);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[3U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_1 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[4U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_2);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[5U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_2 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[6U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_3);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[7U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_3 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[8U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_4);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[9U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_4 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xaU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_5);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xbU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_5 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xcU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_6);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xdU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_6 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xeU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_7);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0xfU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_7 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x10U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_8);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x11U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_8 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x12U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_9);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x13U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_9 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x14U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_10);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x15U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_10 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x16U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_11);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x17U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_11 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x18U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_12);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x19U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_12 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1aU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_13);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1bU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_13 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1cU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_14);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1dU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_14 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1eU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_15);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x1fU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_15 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x20U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_16);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x21U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_16 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x22U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_17);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x23U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_17 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x24U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_18);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x25U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_18 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x26U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_19);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x27U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_19 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x28U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_20);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x29U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_20 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2aU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_21);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2bU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_21 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2cU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_22);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2dU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_22 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2eU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_23);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x2fU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_23 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x30U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_24);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x31U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_24 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x32U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_25);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x33U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_25 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x34U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_26);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x35U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_26 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x36U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_27);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x37U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_27 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x38U] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_28);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x39U] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_28 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3aU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_29);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3bU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_29 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3cU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_30);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3dU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_30 
                   >> 0x20U));
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3eU] 
        = (IData)(vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_31);
    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[0x3fU] 
        = (IData)((vlSelf->TopMain__DOT___T__DOT__rf__DOT__regs_31 
                   >> 0x20U));
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite 
        = vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_regWrite;
    vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data = 
        ((IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_memtoReg)
          ? vlSelf->TopMain__DOT___LS_WB__DOT__reg_readData
          : vlSelf->TopMain__DOT___LS_WB__DOT__reg_exOut);
    vlSelf->pipelineTrace_ls_wb_instr_instr = vlSelf->debug_instr_instr;
    vlSelf->pipelineTrace_ls_wb_pc_pc = vlSelf->debug_commit_pc;
    vlSelf->csrDebug_mstatus = vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mstatus;
    vlSelf->csrDebug_mtvec = vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mtvec;
    vlSelf->csrDebug_mepc = vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mepc;
    vlSelf->csrDebug_mcause = vlSelf->TopMain__DOT___T__DOT__csrf__DOT__mcause;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_csrID = vlSelf->TopMain__DOT___EX_LS__DOT__reg_csrID;
    vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite 
        = vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_csrWrite;
    vlSelf->pipelineTrace_if_id_instr_instr = vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U];
    vlSelf->pipelineTrace_if_id_pc_pc = (((QData)((IData)(
                                                          vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[0U])));
    vlSelf->debug_rdD_data = (0x1fU & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                       >> 7U));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_8 
        = ((0x37U == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
           | (0x17U == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])));
    vlSelf->TopMain__DOT___HU__DOT___branchstall_T_11 
        = ((0x1fU & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                     >> 0x14U)) == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd));
    vlSelf->TopMain__DOT___HU__DOT___branchstall_T_28 
        = ((0x1fU & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                     >> 0xfU)) == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN = 
        ((0x380U & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                    >> 5U)) | (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]));
    vlSelf->pipelineTrace_ls_wb_pcEnable = vlSelf->TopMain__DOT__pcEnable_ls_wb;
    vlSelf->TopMain__DOT__pcEnable_ex_ls = vlSelf->TopMain__DOT__pcEnable_id_ex;
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_regWrite 
        = (1U & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                 >> 0x13U));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h70189e71__0 
        = ((0x173U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | (0x1f3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h36ddfde0__0 
        = ((0x2f3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x373U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
              | (0x3f3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_14 
        = ((0x23U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           & (0xa3U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6 
        = ((3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
              | ((0x103U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                 | ((0x203U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                    | (0x283U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h8cc90303__0 
        = ((0xf3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x173U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
              | ((0x1f3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                 | ((0x2f3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                    | (0x373U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h9e44594c__0 
        = ((0x6fU == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
           | (0x67U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_5 
        = ((0x23U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0xa3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
              | (0x123U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_3 
        = ((0x303U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | (0x183U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h3012a933__0 
        = ((0xe3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x263U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
              | ((0x2e3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                 | ((0x363U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                    | (0x3e3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))));
    TopMain__DOT___T__DOT__id__DOT___GEN_0 = ((0xfc00U 
                                               & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                  >> 0x10U)) 
                                              | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1 
        = ((0x1fc00U & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                        >> 0xfU)) | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN));
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_csrID = 
        (0xfffU & vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U]);
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_csrWrite 
        = (1U & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                 >> 0x12U));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_11 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_3) 
           | (0x1a3U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_7 
        = ((0x63U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h3012a933__0));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_10 
        = ((0x13U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x93U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
              | ((0x113U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                 | ((0x193U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                    | ((0x213U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                       | ((0x293U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
                          | ((0x4293U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
                             | ((0x313U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                | (0x393U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_2 
        = ((0x433U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
           | ((0x4b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | ((0x533U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                 | ((0x5b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                    | ((0x633U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                       | ((0x6b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                          | ((0x733U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                             | ((0x7b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                | ((0x43bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                   | ((0x63bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                      | ((0x6bbU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                         | ((0x73bU 
                                             == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                            | (0x7bbU 
                                               == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)))))))))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_4 
        = ((0x3bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
           | ((0x803bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | ((0xbbU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                 | ((0x2bbU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                    | (0x82bbU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_ha61c94bb__0 
        = ((0x1bU == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           | ((0x9bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | ((0x29bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                 | (0x829bU == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1))));
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_haebc9599__0 
        = ((0xb3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
           | ((0x133U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | ((0x1b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                 | ((0x233U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                    | ((0x2b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                       | ((0x333U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                          | (0x3b3U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_heb1f8a09__0 
        = ((0x13U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           & (~ ((0x93U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
                 | ((0x113U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                    | ((0x193U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                       | ((0x213U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                          | ((0x293U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
                             | ((0x4293U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0)) 
                                | ((0x313U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                   | ((0x393U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                      | ((0x33U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                         | ((0x8033U 
                                             == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                            | ((0xb3U 
                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                               | ((0x133U 
                                                   == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                                                  | (0x1b3U 
                                                     == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)))))))))))))));
    vlSelf->pipelineTrace_ex_ls_pcEnable = vlSelf->TopMain__DOT__pcEnable_ex_ls;
    vlSelf->TopMain__DOT__pcEnable_id_ex = vlSelf->TopMain__DOT__pcEnable_if_id;
    TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0 
        = ((~ (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg)) 
           & (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_regWrite));
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[1U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[2U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[3U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[4U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[4U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[5U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[6U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[6U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[7U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[8U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[8U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[9U] = 
        __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[9U];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
        = __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xaU];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xbU] 
        = __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xbU];
    vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xcU] 
        = __Vdly__TopMain__DOT___ID_EX__DOT__reg_0[0xcU];
    vlSelf->TopMain__DOT_____05FT_io_id_ex_IO_ctrl2EXU_aluCtrl 
        = ((0x13U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
            ? 0U : ((0x93U == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0))
                     ? 2U : ((0x113U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                              ? 3U : ((0x193U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                       ? 4U : ((0x213U 
                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                ? 5U
                                                : (
                                                   (0x293U 
                                                    == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0))
                                                    ? 6U
                                                    : 
                                                   ((0x4293U 
                                                     == (IData)(TopMain__DOT___T__DOT__id__DOT___GEN_0))
                                                     ? 7U
                                                     : 
                                                    ((0x313U 
                                                      == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                      ? 8U
                                                      : 
                                                     ((0x393U 
                                                       == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                       ? 9U
                                                       : 
                                                      ((0x33U 
                                                        == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                        ? 0U
                                                        : 
                                                       ((0x8033U 
                                                         == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                         ? 1U
                                                         : 
                                                        ((0xb3U 
                                                          == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                          ? 2U
                                                          : 
                                                         ((0x133U 
                                                           == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                           ? 3U
                                                           : 
                                                          ((0x1b3U 
                                                            == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                            ? 4U
                                                            : 
                                                           ((0x233U 
                                                             == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                             ? 5U
                                                             : 
                                                            ((0x2b3U 
                                                              == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                              ? 6U
                                                              : 
                                                             ((0x333U 
                                                               == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                               ? 8U
                                                               : 
                                                              ((0x3b3U 
                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                ? 9U
                                                                : 
                                                               (((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_8) 
                                                                 | ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                                                                    | ((0x67U 
                                                                        == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                       | ((0x63U 
                                                                           == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                          | ((0xe3U 
                                                                              == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                             | ((0x263U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x2e3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x363U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x3e3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x83U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x103U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x203U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | ((0x283U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                                                                                | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_5)))))))))))))))
                                                                 ? 0U
                                                                 : 
                                                                ((0x1bU 
                                                                  == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                  ? 0xaU
                                                                  : 
                                                                 ((0x9bU 
                                                                   == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((0x29bU 
                                                                    == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                    ? 0x10U
                                                                    : 
                                                                   ((0x829bU 
                                                                     == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                     ? 0x11U
                                                                     : 
                                                                    ((0x3bU 
                                                                      == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                      ? 0xaU
                                                                      : 
                                                                     ((0x803bU 
                                                                       == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                       ? 0xbU
                                                                       : 
                                                                      ((0xbbU 
                                                                        == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                        ? 0xcU
                                                                        : 
                                                                       ((0x2bbU 
                                                                         == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                         ? 0x10U
                                                                         : 
                                                                        ((0x82bbU 
                                                                          == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                          ? 0x11U
                                                                          : 
                                                                         ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_11)
                                                                           ? 0U
                                                                           : 
                                                                          ((0x433U 
                                                                            == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                            ? 0x14U
                                                                            : 
                                                                           ((0x4b3U 
                                                                             == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                             ? 0x15U
                                                                             : 
                                                                            ((0x533U 
                                                                              == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                              ? 0x16U
                                                                              : 
                                                                             ((0x5b3U 
                                                                               == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                               ? 0x17U
                                                                               : 
                                                                              ((0x633U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                ? 0x18U
                                                                                : 
                                                                               ((0x6b3U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((0x733U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x7b3U 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((0x43bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x173U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x1f3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x2f3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x373U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x3f3U 
                                                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                                                 ? 0x21U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_16 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_10) 
           | ((0x33U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | (0x8033U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_24 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_ha61c94bb__0) 
           | (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_4));
    vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_9 
        = ((0x33U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
           | ((0x8033U == vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              | (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_haebc9599__0)));
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hba57bb90__0 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_heb1f8a09__0) 
           & ((0x233U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
              & ((0x2b3U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                 & ((0x333U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                    & ((0x3b3U != vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_1) 
                       & ((0x37U != (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                          & (0x17U != (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]))))))));
    vlSelf->debug_hazard_hu_idu_ctrl_forwardB = (((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                       >> 0x14U))) 
                                                  & ((IData)(vlSelf->TopMain__DOT___HU__DOT___branchstall_T_11) 
                                                     & (IData)(TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0)))
                                                  ? 1U
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                        >> 0x14U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd)) 
                                                      & (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite))) 
                                                  << 1U));
    vlSelf->debug_hazard_hu_idu_ctrl_forwardA = (((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                       >> 0xfU))) 
                                                  & ((IData)(vlSelf->TopMain__DOT___HU__DOT___branchstall_T_28) 
                                                     & (IData)(TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0)))
                                                  ? 1U
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                        >> 0xfU))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd)) 
                                                      & (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite))) 
                                                  << 1U));
    vlSelf->pipelineTrace_id_ex_instr_instr = vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0U];
    vlSelf->debug_rdE_data = (0x1fU & ((vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                        << 1U) | (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[9U] 
                                                  >> 0x1fU)));
    vlSelf->pipelineTrace_id_ex_pc_pc = (((QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xcU])) 
                                          << 0x32U) 
                                         | (((QData)((IData)(
                                                             vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xbU])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU])) 
                                               >> 0xeU)));
    vlSelf->debug_hazard_hu_exu_ctrl_forwardA = (((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                       >> 9U))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                          >> 9U)) 
                                                      == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd)) 
                                                     & (IData)(TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0)))
                                                  ? 1U
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                        >> 9U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                           >> 9U)) 
                                                       == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd)) 
                                                      & (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite))) 
                                                  << 1U));
    vlSelf->debug_hazard_hu_exu_ctrl_forwardB = (((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                       >> 4U))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                          >> 4U)) 
                                                      == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_rd)) 
                                                     & (IData)(TopMain__DOT___HU__DOT____VdfgTmp_h6cc099be__0)))
                                                  ? 1U
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                        >> 4U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[0xaU] 
                                                           >> 4U)) 
                                                       == (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_rd)) 
                                                      & (IData)(vlSelf->TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite))) 
                                                  << 1U));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hed5ee32e__0 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_16) 
           | (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_haebc9599__0));
    TopMain__DOT___T__DOT__id__DOT__instrType = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_10)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_9)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_8)
                                                    ? 4U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_6)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_5)
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_ha61c94bb__0)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_4)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_3)
                                                            ? 1U
                                                            : 
                                                           ((0x1a3U 
                                                             == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                             ? 2U
                                                             : 
                                                            ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_2)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h8cc90303__0)
                                                               ? 7U
                                                               : 
                                                              (6U 
                                                               | (0x3f3U 
                                                                  == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))))))))))))));
    vlSelf->jumpTrace_instr_jump = ((IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hba57bb90__0) 
                                    & (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h9e44594c__0));
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h198f517f__0 
        = ((0x6fU != (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
           & (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hba57bb90__0));
    vlSelf->pipelineTrace_id_ex_pcEnable = vlSelf->TopMain__DOT__pcEnable_id_ex;
    vlSelf->TopMain__DOT__pcEnable_if_id = vlSelf->TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange;
    vlSelf->debug_forward_idu_B_data = vlSelf->debug_hazard_hu_idu_ctrl_forwardB;
    vlSelf->debug_forward_idu_A_data = vlSelf->debug_hazard_hu_idu_ctrl_forwardA;
    vlSelf->TopMain__DOT___HU__DOT___lwstall_T = ((IData)(vlSelf->debug_rdE_data) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                      >> 0xfU)));
    vlSelf->debug_forwardA_data = vlSelf->debug_hazard_hu_exu_ctrl_forwardA;
    vlSelf->debug_forwardB_data = vlSelf->debug_hazard_hu_exu_ctrl_forwardB;
    TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h98f07f6e__0 
        = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hed5ee32e__0) 
           | ((0x37U == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
              | ((0x17U == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                 | ((0x6fU == (0x7fU & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U])) 
                    | ((0x67U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
                       | (0x63U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)))))));
    vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm 
        = ((7U == TopMain__DOT___T__DOT__id__DOT__instrType)
            ? (QData)((IData)((0x1fU & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                        >> 0xfU))))
            : ((5U == TopMain__DOT___T__DOT__id__DOT__instrType)
                ? (((- (QData)((IData)((vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                        >> 0x1fU)))) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]) 
                                                 | ((0x800U 
                                                     & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                          >> 0x14U)))))))
                : ((4U == TopMain__DOT___T__DOT__id__DOT__instrType)
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U]))))
                    : ((3U == TopMain__DOT___T__DOT__id__DOT__instrType)
                        ? (((- (QData)((IData)((vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       ((0x800U 
                                                         & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                 >> 7U)))))))
                        : ((2U == TopMain__DOT___T__DOT__id__DOT__instrType)
                            ? (((- (QData)((IData)(
                                                   (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                >> 0x14U)) 
                                                            | (IData)(vlSelf->debug_rdD_data)))))
                            : ((1U == TopMain__DOT___T__DOT__id__DOT__instrType)
                                ? (((- (QData)((IData)(
                                                       (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                >> 0x14U))))
                                : 0ULL))))));
    vlSelf->jumpTrace_instr_pcPlusSrc = ((IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h198f517f__0) 
                                         & (0x67U == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h0357b6a5__0 
        = ((0x67U != (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN)) 
           & (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h198f517f__0));
    vlSelf->TopMain__DOT___HU__DOT____VdfgTmp_h9dc61ef2__0 
        = ((IData)(vlSelf->TopMain__DOT___HU__DOT___lwstall_T) 
           | ((IData)(vlSelf->debug_rdE_data) == (0x1fU 
                                                  & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                     >> 0x14U))));
    vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h5bdbc692__0 
        = ((IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h98f07f6e__0) 
           | (IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h3012a933__0));
    vlSelf->__VdfgTmp_hbc2f4814__0 = ((IData)(TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h98f07f6e__0)
                                       ? 0U : ((0xe3U 
                                                == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                ? 1U
                                                : (
                                                   (0x263U 
                                                    == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                    ? 4U
                                                    : 
                                                   ((0x2e3U 
                                                     == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                     ? 5U
                                                     : 
                                                    ((0x363U 
                                                      == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))
                                                      ? 6U
                                                      : 
                                                     (7U 
                                                      & (- (IData)(
                                                                   (0x3e3U 
                                                                    == (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN))))))))));
    vlSelf->jumpTrace_instr_branch = ((IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h0357b6a5__0) 
                                      & (IData)(vlSelf->TopMain__DOT___T__DOT__id__DOT___GEN_7));
    vlSelf->pipelineTrace_if_id_pcEnable = vlSelf->TopMain__DOT__pcEnable_if_id;
    vlSelf->jumpTrace_bruCtrl = vlSelf->__VdfgTmp_hbc2f4814__0;
}

VL_INLINE_OPT void VTopMain___024root___nba_sequent__TOP__2(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ TopMain__DOT_____05FArbiter_IFU_R_s2mRvalid;
    TopMain__DOT_____05FArbiter_IFU_R_s2mRvalid = 0;
    CData/*0:0*/ TopMain__DOT_____05FArbiter_LSU_R_s2mRvalid;
    TopMain__DOT_____05FArbiter_LSU_R_s2mRvalid = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_33;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_33 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_58;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_58 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_64;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_64 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_71;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_71 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_78;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_78 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_84;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_84 = 0;
    QData/*63:0*/ TopMain__DOT___EXU__DOT__alu__DOT___GEN_1;
    TopMain__DOT___EXU__DOT__alu__DOT___GEN_1 = 0;
    QData/*32:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_122;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_122 = 0;
    IData/*31:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_135;
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_135 = 0;
    VlWide<4>/*126:0*/ TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167;
    VL_ZERO_W(127, TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167);
    QData/*63:0*/ TopMain__DOT___EXU__DOT__alu__DOT____VdfgTmp_he38b5b04__0;
    TopMain__DOT___EXU__DOT__alu__DOT____VdfgTmp_he38b5b04__0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_h5592ea3c__0;
    VlWide<8>/*255:0*/ __Vtemp_h88351555__0;
    VlWide<8>/*255:0*/ __Vtemp_h43f95042__0;
    VlWide<8>/*255:0*/ __Vtemp_h156d5ebb__0;
    VlWide<8>/*255:0*/ __Vtemp_hbdbc1d9e__0;
    VlWide<16>/*511:0*/ __Vtemp_h2fbc06bc__0;
    VlWide<4>/*127:0*/ __Vtemp_h3cff9c58__0;
    VlWide<4>/*127:0*/ __Vtemp_h05d85f7a__0;
    VlWide<4>/*127:0*/ __Vtemp_h41fec228__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6a68ec4__0;
    VlWide<4>/*127:0*/ __Vtemp_h5480a268__0;
    VlWide<3>/*95:0*/ __Vtemp_h652bbbe6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb8a4d751__0;
    VlWide<3>/*95:0*/ __Vtemp_hbeb9291b__0;
    // Body
    vlSelf->TopMain__DOT___TP_SRAM__DOT__mem__DOT__writeLen 
        = (0xffU & ((((6U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                       ? 0xfU : ((5U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                                  ? 3U : ((4U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                                           ? 1U : (
                                                   (3U 
                                                    == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                                                    ? 0xffU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                                                     ? 0xfU
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))
                                                      ? 3U
                                                      : 
                                                     (0U 
                                                      == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)))))))) 
                     >> 7U) + ((IData)(vlSelf->__VdfgTmp_h43d5d70f__0) 
                               + (((IData)(vlSelf->__VdfgTmp_h43d5d70f__0) 
                                   + (IData)(vlSelf->__VdfgTmp_h43d5d70f__0)) 
                                  + (((IData)(vlSelf->__VdfgTmp_h5d2dc4b8__0) 
                                      + (IData)(vlSelf->__VdfgTmp_h5d2dc4b8__0)) 
                                     + (((6U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                         | ((5U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                            | ((4U 
                                                != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                               & ((3U 
                                                   == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                     | (1U 
                                                        == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))))))) 
                                        + ((6U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                           | ((5U == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                              | ((4U 
                                                  == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth)) 
                                                          | (0U 
                                                             == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth))))))))))))));
    vlSelf->TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK 
        = vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
    vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK 
        = vlSelf->__Vdly__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_writeData 
        = vlSelf->TopMain__DOT___EXU__DOT__data2;
    vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut = vlSelf->debug_alu_data_E_data;
    if (vlSelf->reset) {
        vlSelf->TopMain__DOT__rPC = 0x80000000ULL;
        vlSelf->__Vdly__TopMain__DOT__rNPC = 0x80000000ULL;
        vlSelf->__Vdly__TopMain__DOT__rNPCValid = 0U;
    } else {
        if (((~ (IData)(vlSelf->debug_hazard_stallF)) 
             & (IData)(vlSelf->TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange))) {
            vlSelf->TopMain__DOT__rPC = ((IData)(vlSelf->TopMain__DOT__rNPCValid)
                                          ? vlSelf->TopMain__DOT__rNPC
                                          : ((IData)(vlSelf->jumpTrace_idu_pcSrc)
                                              ? vlSelf->TopMain__DOT_____05FT_io_npc_pc
                                              : vlSelf->TopMain__DOT_____05FT_3_ioInternal_oPCPlus4));
        }
        if ((1U & (~ (IData)(vlSelf->TopMain__DOT__rNPCValid)))) {
            vlSelf->__Vdly__TopMain__DOT__rNPC = ((IData)(vlSelf->jumpTrace_idu_pcSrc)
                                                   ? vlSelf->TopMain__DOT_____05FT_io_npc_pc
                                                   : vlSelf->TopMain__DOT_____05FT_3_ioInternal_oPCPlus4);
        }
        vlSelf->__Vdly__TopMain__DOT__rNPCValid = (
                                                   ((IData)(vlSelf->jumpTrace_idu_pcSrc) 
                                                    & (~ (IData)(vlSelf->TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange) 
                                                        & (IData)(vlSelf->TopMain__DOT__rNPCValid))) 
                                                      & (IData)(vlSelf->TopMain__DOT__rNPCValid)));
    }
    vlSelf->TopMain__DOT__rNPC = vlSelf->__Vdly__TopMain__DOT__rNPC;
    vlSelf->TopMain__DOT__rNPCValid = vlSelf->__Vdly__TopMain__DOT__rNPCValid;
    vlSelf->debug_hazard_stallF = (((IData)(vlSelf->TopMain__DOT___HU__DOT____VdfgTmp_h9dc61ef2__0) 
                                    & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                       >> 0x11U)) | 
                                   (((IData)(vlSelf->jumpTrace_instr_branch) 
                                     & ((vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                         >> 0x13U) 
                                        & (IData)(vlSelf->TopMain__DOT___HU__DOT____VdfgTmp_h9dc61ef2__0))) 
                                    | (((IData)(vlSelf->jumpTrace_instr_branch) 
                                        & ((IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg) 
                                           & ((IData)(vlSelf->TopMain__DOT___HU__DOT___branchstall_T_28) 
                                              | (IData)(vlSelf->TopMain__DOT___HU__DOT___branchstall_T_11)))) 
                                       | (((IData)(vlSelf->jumpTrace_instr_jump) 
                                           & (IData)(vlSelf->jumpTrace_instr_pcPlusSrc)) 
                                          & (((vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                               >> 0x13U) 
                                              & (IData)(vlSelf->TopMain__DOT___HU__DOT___lwstall_T)) 
                                             | ((IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg) 
                                                & (IData)(vlSelf->TopMain__DOT___HU__DOT___branchstall_T_28)))))));
    vlSelf->debug_probe_data = vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut;
    __Vtemp_h5592ea3c__0[0U] = (IData)(((0U == (0x1fU 
                                                & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                   >> 0x14U)))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x7c0U 
                                                                       & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                          >> 0xeU))) 
                                                                     >> 5U)])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                                     (0x3eU 
                                                                      & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                         >> 0x13U))])))));
    __Vtemp_h5592ea3c__0[1U] = (IData)((((0U == (0x1fU 
                                                 & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                           (((IData)(0x3fU) 
                                                             + 
                                                             (0x7c0U 
                                                              & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                 >> 0xeU))) 
                                                            >> 5U)])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                            (0x3eU 
                                                             & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                >> 0x13U))])))) 
                                        >> 0x20U));
    __Vtemp_h5592ea3c__0[2U] = (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut);
    __Vtemp_h5592ea3c__0[3U] = (IData)((vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut 
                                        >> 0x20U));
    __Vtemp_h5592ea3c__0[4U] = (IData)(vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data);
    __Vtemp_h5592ea3c__0[5U] = (IData)((vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data 
                                        >> 0x20U));
    __Vtemp_h5592ea3c__0[6U] = 0U;
    __Vtemp_h5592ea3c__0[7U] = 0U;
    vlSelf->jumpTrace_bruSrcB = (((QData)((IData)(__Vtemp_h5592ea3c__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_h5592ea3c__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_h5592ea3c__0[
                                                       (6U 
                                                        & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardB) 
                                            << 6U)))));
    __Vtemp_h88351555__0[0U] = (IData)(((0U == (0x1fU 
                                                & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                   >> 0xfU)))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x7c0U 
                                                                       & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                          >> 9U))) 
                                                                     >> 5U)])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                                     (0x3eU 
                                                                      & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                         >> 0xeU))])))));
    __Vtemp_h88351555__0[1U] = (IData)((((0U == (0x1fU 
                                                 & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                           (((IData)(0x3fU) 
                                                             + 
                                                             (0x7c0U 
                                                              & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                 >> 9U))) 
                                                            >> 5U)])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->TopMain__DOT___T__DOT__rf__DOT___GEN[
                                                            (0x3eU 
                                                             & (vlSelf->TopMain__DOT___IF_ID__DOT__reg_0[2U] 
                                                                >> 0xeU))])))) 
                                        >> 0x20U));
    __Vtemp_h88351555__0[2U] = (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut);
    __Vtemp_h88351555__0[3U] = (IData)((vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut 
                                        >> 0x20U));
    __Vtemp_h88351555__0[4U] = (IData)(vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data);
    __Vtemp_h88351555__0[5U] = (IData)((vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data 
                                        >> 0x20U));
    __Vtemp_h88351555__0[6U] = 0U;
    __Vtemp_h88351555__0[7U] = 0U;
    vlSelf->jumpTrace_bruSrcA = (((QData)((IData)(__Vtemp_h88351555__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_h88351555__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_h88351555__0[
                                                       (6U 
                                                        & ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->debug_hazard_hu_idu_ctrl_forwardA) 
                                            << 6U)))));
    __Vtemp_h43f95042__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U])) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[6U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U])) 
                                              >> 0x1fU))));
    __Vtemp_h43f95042__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[6U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U])) 
                                               >> 0x1fU))) 
                                        >> 0x20U));
    __Vtemp_h43f95042__0[2U] = (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut);
    __Vtemp_h43f95042__0[3U] = (IData)((vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut 
                                        >> 0x20U));
    __Vtemp_h43f95042__0[4U] = (IData)(vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data);
    __Vtemp_h43f95042__0[5U] = (IData)((vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data 
                                        >> 0x20U));
    __Vtemp_h43f95042__0[6U] = 0U;
    __Vtemp_h43f95042__0[7U] = 0U;
    __Vtemp_h156d5ebb__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_h43f95042__0[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                               << 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp_h43f95042__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                     << 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp_h43f95042__0[
                                                              (6U 
                                                               & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                     << 6U))))));
    __Vtemp_h156d5ebb__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_h43f95042__0[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp_h43f95042__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp_h43f95042__0[
                                                               (6U 
                                                                & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardA) 
                                                      << 6U))))) 
                                        >> 0x20U));
    __Vtemp_h156d5ebb__0[2U] = (IData)(vlSelf->pipelineTrace_id_ex_pc_pc);
    __Vtemp_h156d5ebb__0[3U] = (IData)((vlSelf->pipelineTrace_id_ex_pc_pc 
                                        >> 0x20U));
    __Vtemp_h156d5ebb__0[4U] = 0U;
    __Vtemp_h156d5ebb__0[5U] = 0U;
    __Vtemp_h156d5ebb__0[6U] = (IData)((((QData)((IData)(
                                                         vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U]))));
    __Vtemp_h156d5ebb__0[7U] = (IData)(((((QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U]))) 
                                        >> 0x20U));
    vlSelf->debug_alu_srcA_data = (((QData)((IData)(
                                                    __Vtemp_h156d5ebb__0[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                          >> 0x17U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp_h156d5ebb__0[
                                                                (6U 
                                                                 & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                    >> 0x1cU))])));
    __Vtemp_hbdbc1d9e__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U])) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[4U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U])) 
                                              >> 0x1fU))));
    __Vtemp_hbdbc1d9e__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[5U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[4U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U])) 
                                               >> 0x1fU))) 
                                        >> 0x20U));
    __Vtemp_hbdbc1d9e__0[2U] = (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut);
    __Vtemp_hbdbc1d9e__0[3U] = (IData)((vlSelf->TopMain__DOT___EX_LS__DOT__reg_aluOut 
                                        >> 0x20U));
    __Vtemp_hbdbc1d9e__0[4U] = (IData)(vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data);
    __Vtemp_hbdbc1d9e__0[5U] = (IData)((vlSelf->TopMain__DOT_____05FWBU_io_wbIO_data 
                                        >> 0x20U));
    __Vtemp_hbdbc1d9e__0[6U] = 0U;
    __Vtemp_hbdbc1d9e__0[7U] = 0U;
    vlSelf->TopMain__DOT___EXU__DOT__data2 = (((QData)((IData)(
                                                               __Vtemp_hbdbc1d9e__0[
                                                               (((IData)(0x3fU) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                                     << 6U))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                        << 6U))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                       << 6U)))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   __Vtemp_hbdbc1d9e__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                        << 6U))))) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_hbdbc1d9e__0[
                                                                    (6U 
                                                                     & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                                        << 1U))])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->debug_hazard_hu_exu_ctrl_forwardB) 
                                                        << 6U)))));
    vlSelf->debug_hazard_stallD = vlSelf->debug_hazard_stallF;
    vlSelf->debug_hazard_flushE = vlSelf->debug_hazard_stallF;
    vlSelf->TopMain__DOT_____05FT_3_ioInternal_oPCPlus4 
        = (4ULL + vlSelf->TopMain__DOT__rPC);
    vlSelf->TopMain__DOT___Arbiter__DOT___T_10 = ((~ (IData)(
                                                             (0U 
                                                              != vlSelf->TopMain__DOT__rPC))) 
                                                  & (1U 
                                                     == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW)));
    vlSelf->TopMain__DOT___Arbiter__DOT___T_2 = ((0U 
                                                  != vlSelf->TopMain__DOT__rPC) 
                                                 & (1U 
                                                    == (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW)));
    vlSelf->TopMain__DOT___Arbiter__DOT___T_6 = ((1U 
                                                  != (IData)(vlSelf->TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW)) 
                                                 & (0U 
                                                    != vlSelf->TopMain__DOT__rPC));
    vlSelf->TopMain__DOT_____05FT_io_npc_pc = (((IData)(vlSelf->jumpTrace_instr_pcPlusSrc)
                                                 ? vlSelf->jumpTrace_bruSrcA
                                                 : vlSelf->pipelineTrace_if_id_pc_pc) 
                                               + vlSelf->TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm);
    vlSelf->jumpTrace_bruOutC = ((7U == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0))
                                  ? (vlSelf->jumpTrace_bruSrcA 
                                     >= vlSelf->jumpTrace_bruSrcB)
                                  : ((6U == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0))
                                      ? (vlSelf->jumpTrace_bruSrcA 
                                         < vlSelf->jumpTrace_bruSrcB)
                                      : ((5U == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0))
                                          ? VL_GTES_IQQ(64, vlSelf->jumpTrace_bruSrcA, vlSelf->jumpTrace_bruSrcB)
                                          : ((4U == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0))
                                              ? VL_LTS_IQQ(64, vlSelf->jumpTrace_bruSrcA, vlSelf->jumpTrace_bruSrcB)
                                              : ((1U 
                                                  == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0))
                                                  ? 
                                                 (vlSelf->jumpTrace_bruSrcA 
                                                  != vlSelf->jumpTrace_bruSrcB)
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->__VdfgTmp_hbc2f4814__0)) 
                                                  & (vlSelf->jumpTrace_bruSrcA 
                                                     == vlSelf->jumpTrace_bruSrcB)))))));
    __Vtemp_h2fbc06bc__0[0U] = (IData)(vlSelf->TopMain__DOT___EXU__DOT__data2);
    __Vtemp_h2fbc06bc__0[1U] = (IData)((vlSelf->TopMain__DOT___EXU__DOT__data2 
                                        >> 0x20U));
    __Vtemp_h2fbc06bc__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[9U])) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[8U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U])) 
                                              >> 0x1fU))));
    __Vtemp_h2fbc06bc__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[9U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[8U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[7U])) 
                                               >> 0x1fU))) 
                                        >> 0x20U));
    __Vtemp_h2fbc06bc__0[4U] = 0U;
    __Vtemp_h2fbc06bc__0[5U] = 0U;
    __Vtemp_h2fbc06bc__0[6U] = 4U;
    __Vtemp_h2fbc06bc__0[7U] = 0U;
    __Vtemp_h2fbc06bc__0[8U] = 0xbU;
    __Vtemp_h2fbc06bc__0[9U] = 0U;
    __Vtemp_h2fbc06bc__0[0xaU] = (IData)((((QData)((IData)(
                                                           vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U]))));
    __Vtemp_h2fbc06bc__0[0xbU] = (IData)(((((QData)((IData)(
                                                            vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[2U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[1U]))) 
                                          >> 0x20U));
    __Vtemp_h2fbc06bc__0[0xcU] = 0U;
    __Vtemp_h2fbc06bc__0[0xdU] = 0U;
    __Vtemp_h2fbc06bc__0[0xeU] = 0U;
    __Vtemp_h2fbc06bc__0[0xfU] = 0U;
    vlSelf->debug_alu_srcB_data = (((QData)((IData)(
                                                    __Vtemp_h2fbc06bc__0[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1c0U 
                                                       & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                          >> 0x14U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp_h2fbc06bc__0[
                                                                (0xeU 
                                                                 & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                    >> 0x19U))])));
    vlSelf->TopMain__DOT___Arbiter__DOT___GEN = (1U 
                                                 & ((~ (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6)) 
                                                    | (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)));
    TopMain__DOT_____05FArbiter_IFU_R_s2mRvalid = (
                                                   (~ (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)) 
                                                   & ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6) 
                                                      & (IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK)));
    TopMain__DOT_____05FArbiter_LSU_R_s2mRvalid = (
                                                   ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2) 
                                                    | ((~ (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6)) 
                                                       & (IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_10))) 
                                                   & (IData)(vlSelf->TopMain__DOT___TP_SRAM__DOT__rReadStatuOK));
    vlSelf->jumpTrace_idu_pcSrc = ((IData)(vlSelf->jumpTrace_instr_jump) 
                                   | ((IData)(vlSelf->jumpTrace_bruOutC) 
                                      & (IData)(vlSelf->jumpTrace_instr_branch)));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_135 
        = VL_MODDIVS_III(32, (IData)(vlSelf->debug_alu_srcA_data), (IData)(vlSelf->debug_alu_srcB_data));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_122 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->debug_alu_srcA_data 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->debug_alu_srcA_data))), 
                                        (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->debug_alu_srcB_data 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->debug_alu_srcB_data)))));
    TopMain__DOT___EXU__DOT__alu__DOT____VdfgTmp_he38b5b04__0 
        = VL_MODDIV_QQQ(64, vlSelf->debug_alu_srcA_data, vlSelf->debug_alu_srcB_data);
    TopMain__DOT___EXU__DOT__alu__DOT___GEN_1 = (vlSelf->debug_alu_srcA_data 
                                                 * vlSelf->debug_alu_srcB_data);
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_84 
        = ((IData)(vlSelf->debug_alu_srcA_data) & (IData)(vlSelf->debug_alu_srcB_data));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_78 
        = ((IData)(vlSelf->debug_alu_srcA_data) | (IData)(vlSelf->debug_alu_srcB_data));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_71 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->debug_alu_srcA_data), 
                         (0x1fU & (IData)(vlSelf->debug_alu_srcB_data)));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_64 
        = ((IData)(vlSelf->debug_alu_srcA_data) >> 
           (0x1fU & (IData)(vlSelf->debug_alu_srcB_data)));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_58 
        = ((IData)(vlSelf->debug_alu_srcA_data) ^ (IData)(vlSelf->debug_alu_srcB_data));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_33 
        = ((IData)(vlSelf->debug_alu_srcA_data) - (IData)(vlSelf->debug_alu_srcB_data));
    TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25 
        = ((IData)(vlSelf->debug_alu_srcA_data) + (IData)(vlSelf->debug_alu_srcB_data));
    vlSelf->TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange 
        = ((0U == ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___GEN)
                    ? 0U : (2U & ((~ ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_2)
                                       ? (IData)(TopMain__DOT_____05FArbiter_LSU_R_s2mRvalid)
                                       : ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_6)
                                           ? (IData)(TopMain__DOT_____05FArbiter_IFU_R_s2mRvalid)
                                           : ((IData)(vlSelf->TopMain__DOT___Arbiter__DOT___T_10) 
                                              & (IData)(TopMain__DOT_____05FArbiter_LSU_R_s2mRvalid))))) 
                                  << 1U)))) & (IData)(TopMain__DOT_____05FArbiter_IFU_R_s2mRvalid));
    vlSelf->debug_dynamic_pc = ((IData)(vlSelf->TopMain__DOT__rNPCValid)
                                 ? vlSelf->TopMain__DOT__rNPC
                                 : ((IData)(vlSelf->jumpTrace_idu_pcSrc)
                                     ? vlSelf->TopMain__DOT_____05FT_io_npc_pc
                                     : (4ULL + vlSelf->TopMain__DOT__rPC)));
    __Vtemp_h3cff9c58__0[0U] = (IData)(vlSelf->debug_alu_srcA_data);
    __Vtemp_h3cff9c58__0[1U] = (IData)((vlSelf->debug_alu_srcA_data 
                                        >> 0x20U));
    __Vtemp_h3cff9c58__0[2U] = 0U;
    __Vtemp_h3cff9c58__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h05d85f7a__0, __Vtemp_h3cff9c58__0, 
                  (0x3fU & (IData)(vlSelf->debug_alu_srcB_data)));
    if ((5U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                         >> 0x14U)))) {
        __Vtemp_h41fec228__0[0U] = (IData)((vlSelf->debug_alu_srcA_data 
                                            ^ vlSelf->debug_alu_srcB_data));
        __Vtemp_h41fec228__0[1U] = (IData)(((vlSelf->debug_alu_srcA_data 
                                             ^ vlSelf->debug_alu_srcB_data) 
                                            >> 0x20U));
    } else if ((4U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_h41fec228__0[0U] = (vlSelf->debug_alu_srcA_data 
                                    < vlSelf->debug_alu_srcB_data);
        __Vtemp_h41fec228__0[1U] = 0U;
    } else if ((3U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_h41fec228__0[0U] = VL_LTS_IQQ(64, vlSelf->debug_alu_srcA_data, vlSelf->debug_alu_srcB_data);
        __Vtemp_h41fec228__0[1U] = 0U;
    } else if ((2U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_h41fec228__0[0U] = __Vtemp_h05d85f7a__0[0U];
        __Vtemp_h41fec228__0[1U] = __Vtemp_h05d85f7a__0[1U];
    } else {
        __Vtemp_h41fec228__0[0U] = (IData)(((1U == 
                                             (0x3fU 
                                              & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                 >> 0x14U)))
                                             ? (vlSelf->debug_alu_srcA_data 
                                                - vlSelf->debug_alu_srcB_data)
                                             : ((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                     >> 0x14U)))
                                                 ? 
                                                (vlSelf->debug_alu_srcA_data 
                                                 + vlSelf->debug_alu_srcB_data)
                                                 : 0ULL)));
        __Vtemp_h41fec228__0[1U] = (IData)((((1U == 
                                              (0x3fU 
                                               & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                  >> 0x14U)))
                                              ? (vlSelf->debug_alu_srcA_data 
                                                 - vlSelf->debug_alu_srcB_data)
                                              : ((0U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                      >> 0x14U)))
                                                  ? 
                                                 (vlSelf->debug_alu_srcA_data 
                                                  + vlSelf->debug_alu_srcB_data)
                                                  : 0ULL)) 
                                            >> 0x20U));
    }
    if ((9U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                         >> 0x14U)))) {
        __Vtemp_hb6a68ec4__0[1U] = (IData)(((vlSelf->debug_alu_srcA_data 
                                             & vlSelf->debug_alu_srcB_data) 
                                            >> 0x20U));
        __Vtemp_hb6a68ec4__0[2U] = 0U;
        __Vtemp_hb6a68ec4__0[3U] = 0U;
    } else if ((8U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_hb6a68ec4__0[1U] = (IData)(((vlSelf->debug_alu_srcA_data 
                                             | vlSelf->debug_alu_srcB_data) 
                                            >> 0x20U));
        __Vtemp_hb6a68ec4__0[2U] = 0U;
        __Vtemp_hb6a68ec4__0[3U] = 0U;
    } else if ((7U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_hb6a68ec4__0[1U] = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->debug_alu_srcA_data, 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->debug_alu_srcB_data))) 
                                            >> 0x20U));
        __Vtemp_hb6a68ec4__0[2U] = 0U;
        __Vtemp_hb6a68ec4__0[3U] = 0U;
    } else if ((6U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
        __Vtemp_hb6a68ec4__0[1U] = (IData)(((vlSelf->debug_alu_srcA_data 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->debug_alu_srcB_data))) 
                                            >> 0x20U));
        __Vtemp_hb6a68ec4__0[2U] = 0U;
        __Vtemp_hb6a68ec4__0[3U] = 0U;
    } else {
        __Vtemp_hb6a68ec4__0[1U] = __Vtemp_h41fec228__0[1U];
        if ((5U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                             >> 0x14U)))) {
            __Vtemp_hb6a68ec4__0[2U] = 0U;
            __Vtemp_hb6a68ec4__0[3U] = 0U;
        } else if ((4U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                    >> 0x14U)))) {
            __Vtemp_hb6a68ec4__0[2U] = 0U;
            __Vtemp_hb6a68ec4__0[3U] = 0U;
        } else if ((3U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                    >> 0x14U)))) {
            __Vtemp_hb6a68ec4__0[2U] = 0U;
            __Vtemp_hb6a68ec4__0[3U] = 0U;
        } else if ((2U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                    >> 0x14U)))) {
            __Vtemp_hb6a68ec4__0[2U] = __Vtemp_h05d85f7a__0[2U];
            __Vtemp_hb6a68ec4__0[3U] = __Vtemp_h05d85f7a__0[3U];
        } else {
            __Vtemp_hb6a68ec4__0[2U] = 0U;
            __Vtemp_hb6a68ec4__0[3U] = 0U;
        }
    }
    __Vtemp_h5480a268__0[0U] = ((0x21U == (0x3fU & 
                                           (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                            >> 0x14U)))
                                 ? (IData)(((~ vlSelf->debug_alu_srcB_data) 
                                            & vlSelf->debug_alu_srcA_data))
                                 : ((9U == (0x3fU & 
                                            (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                             >> 0x14U)))
                                     ? (IData)((vlSelf->debug_alu_srcA_data 
                                                & vlSelf->debug_alu_srcB_data))
                                     : ((8U == (0x3fU 
                                                & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                   >> 0x14U)))
                                         ? (IData)(
                                                   (vlSelf->debug_alu_srcA_data 
                                                    | vlSelf->debug_alu_srcB_data))
                                         : ((7U == 
                                             (0x3fU 
                                              & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                 >> 0x14U)))
                                             ? (IData)(
                                                       VL_SHIFTRS_QQI(64,64,6, vlSelf->debug_alu_srcA_data, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->debug_alu_srcB_data))))
                                             : ((6U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                     >> 0x14U)))
                                                 ? (IData)(
                                                           (vlSelf->debug_alu_srcA_data 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->debug_alu_srcB_data))))
                                                 : 
                                                __Vtemp_h41fec228__0[0U])))));
    if ((0xaU == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                           >> 0x14U)))) {
        TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[0U] 
            = (IData)((((QData)((IData)((- (IData)(
                                                   (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25))));
        TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[1U] 
            = (IData)(((((QData)((IData)((- (IData)(
                                                    (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_25))) 
                       >> 0x20U));
        TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[2U] = 0U;
        TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[3U] = 0U;
    } else {
        TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[0U] 
            = __Vtemp_h5480a268__0[0U];
        if ((0x21U == (0x3fU & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                >> 0x14U)))) {
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[1U] 
                = (IData)((((~ vlSelf->debug_alu_srcB_data) 
                            & vlSelf->debug_alu_srcA_data) 
                           >> 0x20U));
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[2U] = 0U;
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[3U] = 0U;
        } else {
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[1U] 
                = __Vtemp_hb6a68ec4__0[1U];
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[2U] 
                = __Vtemp_hb6a68ec4__0[2U];
            TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[3U] 
                = (0x7fffffffU & __Vtemp_hb6a68ec4__0[3U]);
        }
    }
    vlSelf->jumpTrace_dynamic_pc = vlSelf->debug_dynamic_pc;
    __Vtemp_h652bbbe6__0[0U] = (IData)(vlSelf->debug_alu_srcA_data);
    __Vtemp_h652bbbe6__0[1U] = (IData)((vlSelf->debug_alu_srcA_data 
                                        >> 0x20U));
    __Vtemp_h652bbbe6__0[2U] = (1U & (IData)((vlSelf->debug_alu_srcA_data 
                                              >> 0x3fU)));
    __Vtemp_hb8a4d751__0[0U] = (IData)(vlSelf->debug_alu_srcB_data);
    __Vtemp_hb8a4d751__0[1U] = (IData)((vlSelf->debug_alu_srcB_data 
                                        >> 0x20U));
    __Vtemp_hb8a4d751__0[2U] = (1U & (IData)((vlSelf->debug_alu_srcB_data 
                                              >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp_hbeb9291b__0, __Vtemp_h652bbbe6__0, __Vtemp_hb8a4d751__0);
    vlSelf->debug_alu_data_E_data = ((0x20U == (0x3fU 
                                                & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                   >> 0x14U)))
                                      ? (QData)((IData)(
                                                        VL_MODDIV_III(32, (IData)(vlSelf->debug_alu_srcA_data), (IData)(vlSelf->debug_alu_srcB_data))))
                                      : ((0x1fU == 
                                          (0x3fU & 
                                           (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                            >> 0x14U)))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_135 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_135)))
                                          : ((0x1eU 
                                              == (0x3fU 
                                                  & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                     >> 0x14U)))
                                              ? (QData)((IData)(
                                                                VL_DIV_III(32, (IData)(vlSelf->debug_alu_srcA_data), (IData)(vlSelf->debug_alu_srcB_data))))
                                              : ((0x1dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                      >> 0x14U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_122 
                                                                                >> 0x20U)))))))) 
                                                   << 0x21U) 
                                                  | TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_122)
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                       >> 0x14U)))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->debug_alu_srcA_data 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->debug_alu_srcA_data))) 
                                                   * 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->debug_alu_srcB_data 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->debug_alu_srcB_data))))
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                        >> 0x14U)))
                                                    ? TopMain__DOT___EXU__DOT__alu__DOT____VdfgTmp_he38b5b04__0
                                                    : 
                                                   ((0x1aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                         >> 0x14U)))
                                                     ? TopMain__DOT___EXU__DOT__alu__DOT____VdfgTmp_he38b5b04__0
                                                     : 
                                                    ((0x19U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     VL_DIV_QQQ(64, vlSelf->debug_alu_srcA_data, vlSelf->debug_alu_srcB_data)
                                                      : 
                                                     ((0x18U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                           >> 0x14U)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        __Vtemp_hbeb9291b__0[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         __Vtemp_hbeb9291b__0[0U])))
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                            >> 0x14U)))
                                                        ? 
                                                       (TopMain__DOT___EXU__DOT__alu__DOT___GEN_1 
                                                        >> 0x20U)
                                                        : 
                                                       ((0x16U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                             >> 0x14U)))
                                                         ? 
                                                        (TopMain__DOT___EXU__DOT__alu__DOT___GEN_1 
                                                         >> 0x20U)
                                                         : 
                                                        ((0x15U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                              >> 0x14U)))
                                                          ? 
                                                         (TopMain__DOT___EXU__DOT__alu__DOT___GEN_1 
                                                          >> 0x20U)
                                                          : 
                                                         ((0x14U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                               >> 0x14U)))
                                                           ? TopMain__DOT___EXU__DOT__alu__DOT___GEN_1
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                >> 0x14U)))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_84 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_84)))
                                                            : 
                                                           ((0x12U 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                 >> 0x14U)))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_78 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_78)))
                                                             : 
                                                            ((0x11U 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                  >> 0x14U)))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_71 
                                                                                >> 0x1fU))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_71)))
                                                              : 
                                                             ((0x10U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                   >> 0x14U)))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_64 
                                                                                >> 0x1fU))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_64)))
                                                               : 
                                                              ((0xfU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                    >> 0x14U)))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_58 
                                                                                >> 0x1fU))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_58)))
                                                                : 
                                                               ((0xeU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                     >> 0x14U)))
                                                                 ? (QData)((IData)(
                                                                                ((IData)(vlSelf->debug_alu_srcA_data) 
                                                                                < (IData)(vlSelf->debug_alu_srcB_data))))
                                                                 : 
                                                                ((0xdU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                      >> 0x14U)))
                                                                  ? 
                                                                 (- (QData)((IData)(
                                                                                VL_LTS_III(32, (IData)(vlSelf->debug_alu_srcA_data), (IData)(vlSelf->debug_alu_srcB_data)))))
                                                                  : 
                                                                 ((0xcU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                       >> 0x14U)))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((QData)((IData)(vlSelf->debug_alu_srcA_data)) 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->debug_alu_srcB_data))) 
                                                                                >> 0x1fU)))))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                ((IData)(vlSelf->debug_alu_srcA_data) 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->debug_alu_srcB_data))))))
                                                                   : 
                                                                  ((0xbU 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->TopMain__DOT___ID_EX__DOT__reg_0[3U] 
                                                                        >> 0x14U)))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_33 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_33)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                TopMain__DOT___EXU__DOT__alu__DOT___io_outC_T_167[0U])))))))))))))))))))))))));
}

void VTopMain___024root___nba_sequent__TOP__1(VTopMain___024root* vlSelf);

void VTopMain___024root___eval_nba(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTopMain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTopMain___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTopMain___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VTopMain___024root___eval_triggers__act(VTopMain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopMain___024root___dump_triggers__act(VTopMain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopMain___024root___dump_triggers__nba(VTopMain___024root* vlSelf);
#endif  // VL_DEBUG

void VTopMain___024root___eval(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTopMain___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTopMain___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/TopMain.v", 1637, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTopMain___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTopMain___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/marinatoo/ysyx-workbench/npc/soc/vsrc/TopMain.v", 1637, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTopMain___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTopMain___024root___eval_debug_assertions(VTopMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
