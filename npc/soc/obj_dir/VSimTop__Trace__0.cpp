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
        bufp->chgBit(oldp+0,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
        bufp->chgQData(oldp+1,(vlSelf->SimTop__DOT__core__DOT__c),64);
        bufp->chgBit(oldp+3,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
        bufp->chgQData(oldp+4,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
        bufp->chgQData(oldp+6,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
        bufp->chgBit(oldp+8,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
        bufp->chgCData(oldp+9,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
        bufp->chgBit(oldp+10,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
        bufp->chgCData(oldp+11,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
        bufp->chgQData(oldp+12,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
        bufp->chgQData(oldp+14,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
        bufp->chgQData(oldp+16,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
        bufp->chgQData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
        bufp->chgQData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
        bufp->chgQData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
        bufp->chgQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
        bufp->chgQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
        bufp->chgQData(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
        bufp->chgQData(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
        bufp->chgQData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
        bufp->chgQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
        bufp->chgQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
        bufp->chgCData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
        bufp->chgQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
        bufp->chgQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_1),64);
        bufp->chgQData(oldp+43,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_2),64);
        bufp->chgQData(oldp+45,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_3),64);
        bufp->chgQData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
        bufp->chgCData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
        bufp->chgQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
        bufp->chgQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
        bufp->chgQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
        bufp->chgBit(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
        bufp->chgIData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
        bufp->chgQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
        bufp->chgQData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
        bufp->chgQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
        bufp->chgQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
        bufp->chgQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
        bufp->chgQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
        bufp->chgQData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
        bufp->chgQData(oldp+72,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
        bufp->chgQData(oldp+74,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
        bufp->chgQData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+78,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
        bufp->chgIData(oldp+79,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
        bufp->chgQData(oldp+80,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
        bufp->chgCData(oldp+82,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
        bufp->chgBit(oldp+83,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
        bufp->chgIData(oldp+84,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                  : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                      ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                      : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                          ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                          : 0U)))),32);
        bufp->chgBit(oldp+85,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
        bufp->chgBit(oldp+86,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
        bufp->chgQData(oldp+87,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
        bufp->chgQData(oldp+89,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
        bufp->chgIData(oldp+91,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                           >> 7U) + 
                                          ((1U & ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                  >> 6U)) 
                                           + ((1U & 
                                               ((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                                >> 5U)) 
                                              + ((1U 
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
        bufp->chgBit(oldp+92,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
        bufp->chgIData(oldp+93,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
        bufp->chgBit(oldp+94,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
        bufp->chgBit(oldp+95,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                               & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
        bufp->chgBit(oldp+96,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
        bufp->chgBit(oldp+97,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                               & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
        bufp->chgBit(oldp+98,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
        bufp->chgQData(oldp+99,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
        bufp->chgQData(oldp+101,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
        bufp->chgBit(oldp+103,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
        bufp->chgBit(oldp+104,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
        bufp->chgBit(oldp+105,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
        bufp->chgCData(oldp+106,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
        bufp->chgCData(oldp+107,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
        bufp->chgCData(oldp+108,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
        bufp->chgCData(oldp+109,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
        bufp->chgBit(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
        bufp->chgCData(oldp+111,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
        bufp->chgQData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
        bufp->chgBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
        bufp->chgCData(oldp+115,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
        bufp->chgBit(oldp+116,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
        bufp->chgCData(oldp+117,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+118,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                      | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
        bufp->chgQData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
        bufp->chgBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
        bufp->chgBit(oldp+122,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
        bufp->chgQData(oldp+123,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
        bufp->chgQData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
        bufp->chgBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
        bufp->chgCData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
        bufp->chgCData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
        bufp->chgBit(oldp+130,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
        bufp->chgCData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
        bufp->chgQData(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
        bufp->chgQData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
        bufp->chgQData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
        bufp->chgBit(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
        bufp->chgBit(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
        bufp->chgQData(oldp+140,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                   ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                   : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
        bufp->chgBit(oldp+142,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                 ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                 : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
        bufp->chgBit(oldp+143,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                    | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                       & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                          | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
        bufp->chgQData(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
        bufp->chgQData(oldp+146,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                   : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
        bufp->chgQData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
        bufp->chgBit(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
        bufp->chgQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
        bufp->chgBit(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
        bufp->chgWData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
        bufp->chgQData(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
        bufp->chgBit(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
        bufp->chgQData(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
        bufp->chgCData(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
        bufp->chgBit(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
        bufp->chgBit(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
        bufp->chgBit(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
        bufp->chgBit(oldp+166,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
        bufp->chgQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
        bufp->chgBit(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
        bufp->chgBit(oldp+170,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
        bufp->chgQData(oldp+171,((QData)((IData)((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                             >> 0xfU)))))),64);
        bufp->chgBit(oldp+173,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
        bufp->chgBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
        bufp->chgBit(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
        bufp->chgBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
        bufp->chgBit(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
        bufp->chgQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
        bufp->chgBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
        bufp->chgBit(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
        bufp->chgSData(oldp+182,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                             << (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
        bufp->chgBit(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
        bufp->chgQData(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
        bufp->chgQData(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
        bufp->chgQData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
        __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
        __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
        __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
        __Vtemp_h423c1b3d__0[3U] = 0U;
        bufp->chgWData(oldp+190,(__Vtemp_h423c1b3d__0),128);
        bufp->chgWData(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
        bufp->chgWData(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
        bufp->chgWData(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
        bufp->chgQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
        bufp->chgBit(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
        bufp->chgBit(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
        bufp->chgBit(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
        bufp->chgBit(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
        bufp->chgBit(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
        bufp->chgBit(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
        bufp->chgBit(oldp+213,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
        bufp->chgBit(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
        bufp->chgBit(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
        bufp->chgQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [0U]),64);
        bufp->chgQData(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
        bufp->chgQData(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                                 [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
        bufp->chgQData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
        bufp->chgBit(oldp+286,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
        bufp->chgBit(oldp+287,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
        bufp->chgQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
        bufp->chgQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
        bufp->chgBit(oldp+292,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
        bufp->chgBit(oldp+293,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
        bufp->chgBit(oldp+294,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
        bufp->chgCData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
        bufp->chgCData(oldp+296,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
        bufp->chgCData(oldp+297,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                   ? 0U : (0x1fU & (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                            >> 0xfU))))),5);
        bufp->chgCData(oldp+298,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                   ? 0U : (0x1fU & (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                            >> 0x14U))))),5);
        bufp->chgBit(oldp+299,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
        bufp->chgCData(oldp+300,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                   ? (0x1fU & (IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                       >> 7U)))
                                   : 0U)),5);
        bufp->chgQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
        bufp->chgCData(oldp+303,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
        bufp->chgQData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
        bufp->chgBit(oldp+306,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                                & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
        bufp->chgCData(oldp+307,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
        bufp->chgCData(oldp+308,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
        bufp->chgCData(oldp+309,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
        bufp->chgBit(oldp+310,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
        bufp->chgQData(oldp+311,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
        bufp->chgQData(oldp+313,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
        bufp->chgBit(oldp+315,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
        bufp->chgQData(oldp+318,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
        bufp->chgQData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
        bufp->chgQData(oldp+322,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    }
    bufp->chgBit(oldp+324,(vlSelf->clock));
    bufp->chgBit(oldp+325,(vlSelf->reset));
    bufp->chgQData(oldp+326,(vlSelf->io_gpr_regs_0),64);
    bufp->chgQData(oldp+328,(vlSelf->io_gpr_regs_1),64);
    bufp->chgQData(oldp+330,(vlSelf->io_gpr_regs_2),64);
    bufp->chgQData(oldp+332,(vlSelf->io_gpr_regs_3),64);
    bufp->chgQData(oldp+334,(vlSelf->io_gpr_regs_4),64);
    bufp->chgQData(oldp+336,(vlSelf->io_gpr_regs_5),64);
    bufp->chgQData(oldp+338,(vlSelf->io_gpr_regs_6),64);
    bufp->chgQData(oldp+340,(vlSelf->io_gpr_regs_7),64);
    bufp->chgQData(oldp+342,(vlSelf->io_gpr_regs_8),64);
    bufp->chgQData(oldp+344,(vlSelf->io_gpr_regs_9),64);
    bufp->chgQData(oldp+346,(vlSelf->io_gpr_regs_10),64);
    bufp->chgQData(oldp+348,(vlSelf->io_gpr_regs_11),64);
    bufp->chgQData(oldp+350,(vlSelf->io_gpr_regs_12),64);
    bufp->chgQData(oldp+352,(vlSelf->io_gpr_regs_13),64);
    bufp->chgQData(oldp+354,(vlSelf->io_gpr_regs_14),64);
    bufp->chgQData(oldp+356,(vlSelf->io_gpr_regs_15),64);
    bufp->chgQData(oldp+358,(vlSelf->io_gpr_regs_16),64);
    bufp->chgQData(oldp+360,(vlSelf->io_gpr_regs_17),64);
    bufp->chgQData(oldp+362,(vlSelf->io_gpr_regs_18),64);
    bufp->chgQData(oldp+364,(vlSelf->io_gpr_regs_19),64);
    bufp->chgQData(oldp+366,(vlSelf->io_gpr_regs_20),64);
    bufp->chgQData(oldp+368,(vlSelf->io_gpr_regs_21),64);
    bufp->chgQData(oldp+370,(vlSelf->io_gpr_regs_22),64);
    bufp->chgQData(oldp+372,(vlSelf->io_gpr_regs_23),64);
    bufp->chgQData(oldp+374,(vlSelf->io_gpr_regs_24),64);
    bufp->chgQData(oldp+376,(vlSelf->io_gpr_regs_25),64);
    bufp->chgQData(oldp+378,(vlSelf->io_gpr_regs_26),64);
    bufp->chgQData(oldp+380,(vlSelf->io_gpr_regs_27),64);
    bufp->chgQData(oldp+382,(vlSelf->io_gpr_regs_28),64);
    bufp->chgQData(oldp+384,(vlSelf->io_gpr_regs_29),64);
    bufp->chgQData(oldp+386,(vlSelf->io_gpr_regs_30),64);
    bufp->chgQData(oldp+388,(vlSelf->io_gpr_regs_31),64);
    bufp->chgQData(oldp+390,(vlSelf->io_csr_regs_0),64);
    bufp->chgQData(oldp+392,(vlSelf->io_csr_regs_1),64);
    bufp->chgQData(oldp+394,(vlSelf->io_csr_regs_2),64);
    bufp->chgQData(oldp+396,(vlSelf->io_csr_regs_3),64);
    bufp->chgQData(oldp+398,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->chgBit(oldp+400,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                             != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                            & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                      - (IData)(2U))) 
                               != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->chgBit(oldp+401,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                             != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                            & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->chgQData(oldp+402,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->chgQData(oldp+404,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
                                ? 0ULL : vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm) 
                              | (((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle)
                                   ? vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData
                                   : 0ULL) | ((((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle)) 
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
