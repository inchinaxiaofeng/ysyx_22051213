// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h423c1b3d__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->SimTop__DOT__io_commit_REG));
        bufp->chgQData(oldp+1,(vlSelf->SimTop__DOT__io_pc_REG),64);
        bufp->chgBit(oldp+3,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store));
        bufp->chgQData(oldp+4,(vlSelf->SimTop__DOT__TP_SRAM__DOT__c),64);
        bufp->chgBit(oldp+6,((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))));
        bufp->chgBit(oldp+7,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
        bufp->chgQData(oldp+8,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
        bufp->chgBit(oldp+10,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
        bufp->chgQData(oldp+11,(vlSelf->SimTop__DOT__core__DOT__c),64);
        bufp->chgQData(oldp+13,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
        bufp->chgQData(oldp+15,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
        bufp->chgBit(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
        bufp->chgCData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
        bufp->chgBit(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
        bufp->chgCData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
        bufp->chgQData(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
        bufp->chgQData(oldp+23,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
        bufp->chgQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
        bufp->chgQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
        bufp->chgQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
        bufp->chgQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
        bufp->chgQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
        bufp->chgQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
        bufp->chgQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
        bufp->chgQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
        bufp->chgQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
        bufp->chgQData(oldp+43,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
        bufp->chgQData(oldp+45,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
        bufp->chgQData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
        bufp->chgCData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
        bufp->chgQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
        bufp->chgQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c_1),64);
        bufp->chgBit(oldp+54,(((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                               & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))));
        bufp->chgQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
        bufp->chgCData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load),2);
        bufp->chgQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
        bufp->chgQData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
        bufp->chgQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
        bufp->chgQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
        bufp->chgQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
        bufp->chgQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_4),64);
        bufp->chgBit(oldp+70,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
        bufp->chgIData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
        bufp->chgQData(oldp+72,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
        bufp->chgQData(oldp+74,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
        bufp->chgQData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
        bufp->chgQData(oldp+78,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
        bufp->chgQData(oldp+80,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
        bufp->chgQData(oldp+82,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
        bufp->chgQData(oldp+84,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
        bufp->chgQData(oldp+86,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
        bufp->chgQData(oldp+88,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
        bufp->chgQData(oldp+90,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
        bufp->chgQData(oldp+92,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+94,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
        bufp->chgIData(oldp+95,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
        bufp->chgQData(oldp+96,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                   ? 0ULL : (((QData)((IData)(
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
                                 | (((1U == (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                      ? (((QData)((IData)(
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
                                      : 0ULL) | (((2U 
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
                                                     : 0ULL))))),64);
        bufp->chgCData(oldp+98,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
        bufp->chgBit(oldp+99,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)
                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                    : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4) 
                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid))))));
        bufp->chgIData(oldp+100,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                       : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                           ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                           : 0U)))),32);
        bufp->chgBit(oldp+101,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))));
        bufp->chgBit(oldp+102,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store));
        bufp->chgBit(oldp+103,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)))));
        bufp->chgBit(oldp+104,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
        bufp->chgQData(oldp+105,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                     : 0U)))))),64);
        bufp->chgQData(oldp+107,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
        bufp->chgIData(oldp+109,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                            >> 7U) 
                                           + ((1U & 
                                               ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                >> 6U)) 
                                              + ((1U 
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
                                                          & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))))))))))),32);
        bufp->chgBit(oldp+110,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
        bufp->chgIData(oldp+111,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
        bufp->chgBit(oldp+112,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1));
        bufp->chgBit(oldp+113,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
        bufp->chgBit(oldp+114,(((~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)) 
                                & (IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0))));
        bufp->chgBit(oldp+115,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
        bufp->chgBit(oldp+116,(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                                & (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load))));
        bufp->chgQData(oldp+118,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
        bufp->chgBit(oldp+120,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
        bufp->chgQData(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
        bufp->chgQData(oldp+123,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
        bufp->chgQData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
        bufp->chgBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
        bufp->chgBit(oldp+128,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
        bufp->chgBit(oldp+129,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
        bufp->chgCData(oldp+130,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
        bufp->chgCData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
        bufp->chgCData(oldp+132,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
        bufp->chgCData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
        bufp->chgBit(oldp+134,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
        bufp->chgCData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
        bufp->chgQData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
        bufp->chgBit(oldp+138,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
        bufp->chgCData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
        bufp->chgBit(oldp+140,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
        bufp->chgCData(oldp+141,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+142,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                      | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
        bufp->chgBit(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
        bufp->chgQData(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
        bufp->chgQData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
        bufp->chgQData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
        bufp->chgBit(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
        bufp->chgCData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
        bufp->chgCData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
        bufp->chgBit(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
        bufp->chgCData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
        bufp->chgQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
        bufp->chgQData(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
        bufp->chgQData(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
        bufp->chgBit(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
        bufp->chgBit(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
        bufp->chgQData(oldp+163,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                   ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                   : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
        bufp->chgBit(oldp+165,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
        bufp->chgBit(oldp+166,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                    | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47)))) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
        bufp->chgQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
        bufp->chgQData(oldp+169,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                   : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
        bufp->chgQData(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
        bufp->chgBit(oldp+173,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
        bufp->chgQData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
        bufp->chgBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
        bufp->chgWData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
        bufp->chgQData(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
        bufp->chgBit(oldp+182,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
        bufp->chgQData(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
        bufp->chgCData(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
        bufp->chgBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
        bufp->chgBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
        bufp->chgBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
        bufp->chgBit(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
        bufp->chgQData(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
        bufp->chgBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
        bufp->chgBit(oldp+193,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
        bufp->chgQData(oldp+194,((QData)((IData)((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                             >> 0xfU)))))),64);
        bufp->chgBit(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
        bufp->chgBit(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
        bufp->chgBit(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
        bufp->chgBit(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
        bufp->chgBit(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
        bufp->chgQData(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
        bufp->chgBit(oldp+203,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
        bufp->chgBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
        bufp->chgSData(oldp+205,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                             << (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
        bufp->chgBit(oldp+206,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
        bufp->chgQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
        bufp->chgQData(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
        bufp->chgQData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
        __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
        __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
        __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
        __Vtemp_h423c1b3d__0[3U] = 0U;
        bufp->chgWData(oldp+213,(__Vtemp_h423c1b3d__0),128);
        bufp->chgWData(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
        bufp->chgWData(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
        bufp->chgWData(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
        bufp->chgQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
        bufp->chgBit(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
        bufp->chgBit(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
        bufp->chgBit(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
        bufp->chgBit(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
        bufp->chgBit(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
        bufp->chgBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
        bufp->chgBit(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
        bufp->chgBit(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
        bufp->chgBit(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
        bufp->chgQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [0U]),64);
        bufp->chgQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
        bufp->chgQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
        bufp->chgQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+299,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+303,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+307,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
        bufp->chgBit(oldp+309,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
        bufp->chgBit(oldp+310,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
        bufp->chgQData(oldp+311,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
        bufp->chgQData(oldp+313,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
        bufp->chgQData(oldp+315,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
        bufp->chgBit(oldp+317,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
        bufp->chgBit(oldp+318,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
        bufp->chgBit(oldp+319,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
        bufp->chgCData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
        bufp->chgCData(oldp+321,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
                                   ? ((0x58U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2))
                                       ? ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0)
                                           ? 0x5cU : 
                                          (((1U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU)))) 
                                            | (5U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                           >> 0xfU)))))
                                            ? 0x5eU
                                            : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4)))
                                       : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4))
                                   : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2))),7);
        bufp->chgCData(oldp+322,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                   ? 0U : (0x1fU & (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                            >> 0xfU))))),5);
        bufp->chgCData(oldp+323,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                   ? 0U : (0x1fU & (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                            >> 0x14U))))),5);
        bufp->chgBit(oldp+324,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
        bufp->chgCData(oldp+325,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                   ? (0x1fU & (IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                       >> 7U)))
                                   : 0U)),5);
        bufp->chgQData(oldp+326,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
        bufp->chgCData(oldp+328,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
        bufp->chgBit(oldp+329,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
        bufp->chgCData(oldp+330,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
        bufp->chgCData(oldp+331,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
        bufp->chgCData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
        bufp->chgBit(oldp+333,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
        bufp->chgQData(oldp+334,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
        bufp->chgQData(oldp+336,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
        bufp->chgBit(oldp+338,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+339,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
        bufp->chgQData(oldp+341,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
        bufp->chgQData(oldp+343,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
        bufp->chgQData(oldp+345,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    }
    bufp->chgBit(oldp+347,(vlSelf->clock));
    bufp->chgBit(oldp+348,(vlSelf->reset));
    bufp->chgBit(oldp+349,(vlSelf->io_commit));
    bufp->chgQData(oldp+350,(vlSelf->io_pc),64);
    bufp->chgQData(oldp+352,(vlSelf->io_gpr_regs_0),64);
    bufp->chgQData(oldp+354,(vlSelf->io_gpr_regs_1),64);
    bufp->chgQData(oldp+356,(vlSelf->io_gpr_regs_2),64);
    bufp->chgQData(oldp+358,(vlSelf->io_gpr_regs_3),64);
    bufp->chgQData(oldp+360,(vlSelf->io_gpr_regs_4),64);
    bufp->chgQData(oldp+362,(vlSelf->io_gpr_regs_5),64);
    bufp->chgQData(oldp+364,(vlSelf->io_gpr_regs_6),64);
    bufp->chgQData(oldp+366,(vlSelf->io_gpr_regs_7),64);
    bufp->chgQData(oldp+368,(vlSelf->io_gpr_regs_8),64);
    bufp->chgQData(oldp+370,(vlSelf->io_gpr_regs_9),64);
    bufp->chgQData(oldp+372,(vlSelf->io_gpr_regs_10),64);
    bufp->chgQData(oldp+374,(vlSelf->io_gpr_regs_11),64);
    bufp->chgQData(oldp+376,(vlSelf->io_gpr_regs_12),64);
    bufp->chgQData(oldp+378,(vlSelf->io_gpr_regs_13),64);
    bufp->chgQData(oldp+380,(vlSelf->io_gpr_regs_14),64);
    bufp->chgQData(oldp+382,(vlSelf->io_gpr_regs_15),64);
    bufp->chgQData(oldp+384,(vlSelf->io_gpr_regs_16),64);
    bufp->chgQData(oldp+386,(vlSelf->io_gpr_regs_17),64);
    bufp->chgQData(oldp+388,(vlSelf->io_gpr_regs_18),64);
    bufp->chgQData(oldp+390,(vlSelf->io_gpr_regs_19),64);
    bufp->chgQData(oldp+392,(vlSelf->io_gpr_regs_20),64);
    bufp->chgQData(oldp+394,(vlSelf->io_gpr_regs_21),64);
    bufp->chgQData(oldp+396,(vlSelf->io_gpr_regs_22),64);
    bufp->chgQData(oldp+398,(vlSelf->io_gpr_regs_23),64);
    bufp->chgQData(oldp+400,(vlSelf->io_gpr_regs_24),64);
    bufp->chgQData(oldp+402,(vlSelf->io_gpr_regs_25),64);
    bufp->chgQData(oldp+404,(vlSelf->io_gpr_regs_26),64);
    bufp->chgQData(oldp+406,(vlSelf->io_gpr_regs_27),64);
    bufp->chgQData(oldp+408,(vlSelf->io_gpr_regs_28),64);
    bufp->chgQData(oldp+410,(vlSelf->io_gpr_regs_29),64);
    bufp->chgQData(oldp+412,(vlSelf->io_gpr_regs_30),64);
    bufp->chgQData(oldp+414,(vlSelf->io_gpr_regs_31),64);
    bufp->chgQData(oldp+416,(vlSelf->io_csr_regs_0),64);
    bufp->chgQData(oldp+418,(vlSelf->io_csr_regs_1),64);
    bufp->chgQData(oldp+420,(vlSelf->io_csr_regs_2),64);
    bufp->chgQData(oldp+422,(vlSelf->io_csr_regs_3),64);
    bufp->chgBit(oldp+424,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                             ? (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                             : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)
                                 : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))))));
    bufp->chgQData(oldp+425,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->chgBit(oldp+427,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                             != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                            & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                      - (IData)(2U))) 
                               != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->chgBit(oldp+428,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                             != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                            & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->chgQData(oldp+429,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
                                ? vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc
                                : 0ULL) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle)
                                             ? vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData
                                             : 0ULL) 
                                           | ((((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle)) 
                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward))
                                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1
                                                : 0ULL) 
                                              | (((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType) 
                                                  | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle) 
                                                     | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward) 
                                                        | (0U 
                                                           == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA)))))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]))))),64);
    bufp->chgQData(oldp+431,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
                                ? vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm
                                : 0ULL) | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle)
                                             ? vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData
                                             : 0ULL) 
                                           | ((((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle)) 
                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward))
                                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1
                                                : 0ULL) 
                                              | (((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType) 
                                                  | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle) 
                                                     | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward) 
                                                        | (0U 
                                                           == (IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB)))))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]))))),64);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
