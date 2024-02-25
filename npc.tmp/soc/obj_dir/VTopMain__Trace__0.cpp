// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopMain__Syms.h"


void VTopMain___024root__trace_chg_sub_0(VTopMain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTopMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root__trace_chg_top_0\n"); );
    // Init
    VTopMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopMain___024root*>(voidSelf);
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTopMain___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTopMain___024root__trace_chg_sub_0(VTopMain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->TopMain__DOT__pc_rf_pc),64);
        bufp->chgIData(oldp+2,(vlSelf->TopMain__DOT__instr_rf_instr),32);
        bufp->chgBit(oldp+3,(vlSelf->TopMain__DOT__pcEnable_if_id));
        bufp->chgBit(oldp+4,(vlSelf->TopMain__DOT__pcEnable_id_ex));
        bufp->chgBit(oldp+5,(vlSelf->TopMain__DOT__pcEnable_ex_ls));
        bufp->chgBit(oldp+6,(vlSelf->TopMain__DOT__pcEnable_ls_wb));
        bufp->chgBit(oldp+7,(vlSelf->TopMain__DOT__pcEnable_rf));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+8,(vlSelf->TopMain__DOT__rPC),64);
        bufp->chgQData(oldp+10,(vlSelf->TopMain__DOT__rNPC),64);
        bufp->chgBit(oldp+12,(vlSelf->TopMain__DOT__rNPCValid));
    }
    bufp->chgBit(oldp+13,(vlSelf->clock));
    bufp->chgBit(oldp+14,(vlSelf->reset));
    bufp->chgQData(oldp+15,(vlSelf->gpr_zero),64);
    bufp->chgQData(oldp+17,(vlSelf->gpr_ra),64);
    bufp->chgQData(oldp+19,(vlSelf->gpr_sp),64);
    bufp->chgQData(oldp+21,(vlSelf->gpr_gp),64);
    bufp->chgQData(oldp+23,(vlSelf->gpr_tp),64);
    bufp->chgQData(oldp+25,(vlSelf->gpr_t0),64);
    bufp->chgQData(oldp+27,(vlSelf->gpr_t1),64);
    bufp->chgQData(oldp+29,(vlSelf->gpr_t2),64);
    bufp->chgQData(oldp+31,(vlSelf->gpr_s0),64);
    bufp->chgQData(oldp+33,(vlSelf->gpr_s1),64);
    bufp->chgQData(oldp+35,(vlSelf->gpr_a0),64);
    bufp->chgQData(oldp+37,(vlSelf->gpr_a1),64);
    bufp->chgQData(oldp+39,(vlSelf->gpr_a2),64);
    bufp->chgQData(oldp+41,(vlSelf->gpr_a3),64);
    bufp->chgQData(oldp+43,(vlSelf->gpr_a4),64);
    bufp->chgQData(oldp+45,(vlSelf->gpr_a5),64);
    bufp->chgQData(oldp+47,(vlSelf->gpr_a6),64);
    bufp->chgQData(oldp+49,(vlSelf->gpr_a7),64);
    bufp->chgQData(oldp+51,(vlSelf->gpr_s2),64);
    bufp->chgQData(oldp+53,(vlSelf->gpr_s3),64);
    bufp->chgQData(oldp+55,(vlSelf->gpr_s4),64);
    bufp->chgQData(oldp+57,(vlSelf->gpr_s5),64);
    bufp->chgQData(oldp+59,(vlSelf->gpr_s6),64);
    bufp->chgQData(oldp+61,(vlSelf->gpr_s7),64);
    bufp->chgQData(oldp+63,(vlSelf->gpr_s8),64);
    bufp->chgQData(oldp+65,(vlSelf->gpr_s9),64);
    bufp->chgQData(oldp+67,(vlSelf->gpr_s10),64);
    bufp->chgQData(oldp+69,(vlSelf->gpr_s11),64);
    bufp->chgQData(oldp+71,(vlSelf->gpr_t3),64);
    bufp->chgQData(oldp+73,(vlSelf->gpr_t4),64);
    bufp->chgQData(oldp+75,(vlSelf->gpr_t5),64);
    bufp->chgQData(oldp+77,(vlSelf->gpr_t6),64);
    bufp->chgQData(oldp+79,(vlSelf->csrDebug_mstatus),64);
    bufp->chgQData(oldp+81,(vlSelf->csrDebug_mtvec),64);
    bufp->chgQData(oldp+83,(vlSelf->csrDebug_mepc),64);
    bufp->chgQData(oldp+85,(vlSelf->csrDebug_mcause),64);
    bufp->chgIData(oldp+87,(vlSelf->debug_instr_instr),32);
    bufp->chgQData(oldp+88,(vlSelf->debug_commit_pc),64);
    bufp->chgQData(oldp+90,(vlSelf->debug_dynamic_pc),64);
    bufp->chgBit(oldp+92,(vlSelf->debug_hazard_stallF));
    bufp->chgBit(oldp+93,(vlSelf->debug_hazard_stallD));
    bufp->chgBit(oldp+94,(vlSelf->debug_hazard_flushE));
    bufp->chgCData(oldp+95,(vlSelf->debug_hazard_hu_exu_ctrl_forwardA),2);
    bufp->chgCData(oldp+96,(vlSelf->debug_hazard_hu_exu_ctrl_forwardB),2);
    bufp->chgCData(oldp+97,(vlSelf->debug_hazard_hu_idu_ctrl_forwardA),2);
    bufp->chgCData(oldp+98,(vlSelf->debug_hazard_hu_idu_ctrl_forwardB),2);
    bufp->chgQData(oldp+99,(vlSelf->debug_probe_data),64);
    bufp->chgQData(oldp+101,(vlSelf->debug_alu_data_E_data),64);
    bufp->chgQData(oldp+103,(vlSelf->debug_alu_data_W_data),64);
    bufp->chgCData(oldp+105,(vlSelf->debug_forwardA_data),2);
    bufp->chgCData(oldp+106,(vlSelf->debug_forwardB_data),2);
    bufp->chgCData(oldp+107,(vlSelf->debug_forward_idu_A_data),2);
    bufp->chgCData(oldp+108,(vlSelf->debug_forward_idu_B_data),2);
    bufp->chgQData(oldp+109,(vlSelf->debug_alu_srcA_data),64);
    bufp->chgQData(oldp+111,(vlSelf->debug_alu_srcB_data),64);
    bufp->chgCData(oldp+113,(vlSelf->debug_rdD_data),5);
    bufp->chgCData(oldp+114,(vlSelf->debug_rdE_data),5);
    bufp->chgCData(oldp+115,(vlSelf->debug_rdM_data),5);
    bufp->chgCData(oldp+116,(vlSelf->debug_rdW_data),5);
    bufp->chgQData(oldp+117,(vlSelf->pipelineTrace_if_id_pc_pc),64);
    bufp->chgIData(oldp+119,(vlSelf->pipelineTrace_if_id_instr_instr),32);
    bufp->chgBit(oldp+120,(vlSelf->pipelineTrace_if_id_pcEnable));
    bufp->chgQData(oldp+121,(vlSelf->pipelineTrace_id_ex_pc_pc),64);
    bufp->chgIData(oldp+123,(vlSelf->pipelineTrace_id_ex_instr_instr),32);
    bufp->chgBit(oldp+124,(vlSelf->pipelineTrace_id_ex_pcEnable));
    bufp->chgQData(oldp+125,(vlSelf->pipelineTrace_ex_ls_pc_pc),64);
    bufp->chgIData(oldp+127,(vlSelf->pipelineTrace_ex_ls_instr_instr),32);
    bufp->chgBit(oldp+128,(vlSelf->pipelineTrace_ex_ls_pcEnable));
    bufp->chgQData(oldp+129,(vlSelf->pipelineTrace_ls_wb_pc_pc),64);
    bufp->chgIData(oldp+131,(vlSelf->pipelineTrace_ls_wb_instr_instr),32);
    bufp->chgBit(oldp+132,(vlSelf->pipelineTrace_ls_wb_pcEnable));
    bufp->chgQData(oldp+133,(vlSelf->pipelineTrace_rf_pc_pc),64);
    bufp->chgIData(oldp+135,(vlSelf->pipelineTrace_rf_instr_instr),32);
    bufp->chgBit(oldp+136,(vlSelf->pipelineTrace_rf_pcEnable));
    bufp->chgQData(oldp+137,(vlSelf->jumpTrace_dynamic_pc),64);
    bufp->chgBit(oldp+139,(vlSelf->jumpTrace_instr_jump));
    bufp->chgBit(oldp+140,(vlSelf->jumpTrace_instr_branch));
    bufp->chgBit(oldp+141,(vlSelf->jumpTrace_instr_pcPlusSrc));
    bufp->chgBit(oldp+142,(vlSelf->jumpTrace_idu_pcSrc));
    bufp->chgQData(oldp+143,(vlSelf->jumpTrace_bruSrcA),64);
    bufp->chgQData(oldp+145,(vlSelf->jumpTrace_bruSrcB),64);
    bufp->chgBit(oldp+147,(vlSelf->jumpTrace_bruOutC));
    bufp->chgCData(oldp+148,(vlSelf->jumpTrace_bruCtrl),4);
}

void VTopMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopMain___024root__trace_cleanup\n"); );
    // Init
    VTopMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopMain___024root*>(voidSelf);
    VTopMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
