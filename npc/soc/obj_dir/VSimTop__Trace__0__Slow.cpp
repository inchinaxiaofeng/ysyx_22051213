// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+336,"io_commit", false,-1);
    tracep->declQuad(c+337,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+336,"io_commit", false,-1);
    tracep->declQuad(c+337,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+4,"c", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+84,"io_aw_valid", false,-1);
    tracep->declBus(c+85,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_w_valid", false,-1);
    tracep->declQuad(c+86,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+89,"io_ar_valid", false,-1);
    tracep->declBus(c+90,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_aw_ready", false,-1);
    tracep->declBit(c+84,"io_w_ready", false,-1);
    tracep->declBit(c+91,"io_b_valid", false,-1);
    tracep->declBit(c+89,"io_ar_ready", false,-1);
    tracep->declBit(c+92,"io_r_valid", false,-1);
    tracep->declQuad(c+411,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+91,"rWriteStatuOK", false,-1);
    tracep->declBit(c+92,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+92,"iRen", false,-1, 0,0);
    tracep->declBus(c+91,"iWen", false,-1, 0,0);
    tracep->declBus(c+90,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+85,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+88,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+86,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+411,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+93,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+95,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+86,"writeData", false,-1, 63,0);
    tracep->declBus(c+97,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+98,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+99,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+85,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+86,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+85,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+84,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+91,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+89,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+92,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+411,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+101,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+102,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+326,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+84,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+84,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+91,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+103,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+104,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+328,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+84,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+85,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+86,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+89,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+90,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+101,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+102,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+326,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+103,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+98,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+99,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+86,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+341,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+105,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+108,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+110,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+114,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+115,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+116,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+117,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+118,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+119,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+120,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+121,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+122,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+123,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+125,"ringBufferHead", false,-1);
    tracep->declBit(c+9,"ringBufferTail", false,-1);
    tracep->declBit(c+413,"ringBufferAllowin", false,-1);
    tracep->declBus(c+126,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+10,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+127,"io_in_0_valid", false,-1);
    tracep->declQuad(c+108,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+110,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+114,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+115,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+116,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+117,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+119,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+121,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+122,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+123,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+414,"io_in_1_valid", false,-1);
    tracep->declBus(c+128,"io_flush", false,-1, 1,0);
    tracep->declBit(c+84,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+103,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+129,"io_in_0_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+86,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+105,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_redirect_valid", false,-1);
    tracep->declQuad(c+341,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+105,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+130,"valid", false,-1);
    tracep->declQuad(c+131,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+133,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+135,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+137,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+138,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+139,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+140,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+141,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+142,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+144,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+146,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+6,"valid_1", false,-1);
    tracep->declQuad(c+12,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+105,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+16,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+17,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+18,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+19,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+20,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+22,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+24,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+26,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+28,"c", false,-1, 63,0);
    tracep->declQuad(c+30,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+130,"io_in_valid", false,-1);
    tracep->declQuad(c+131,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+133,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+135,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+137,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+138,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+139,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+140,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+141,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+142,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+144,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+107,"io_flush", false,-1);
    tracep->declBit(c+84,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+103,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+148,"io_in_ready", false,-1);
    tracep->declBit(c+149,"io_out_valid", false,-1);
    tracep->declQuad(c+131,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+133,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+135,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+150,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+152,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+138,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+153,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+141,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+154,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+330,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+156,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+158,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+86,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+130,"io_forward_valid", false,-1);
    tracep->declBit(c+140,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+141,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+332,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+138,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+32,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+160,"io_in_valid", false,-1);
    tracep->declQuad(c+142,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+144,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+139,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+131,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+133,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+146,"io_offset", false,-1, 63,0);
    tracep->declBit(c+160,"io_out_valid", false,-1);
    tracep->declQuad(c+154,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+161,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+163,"io_redirect_valid", false,-1);
    tracep->declQuad(c+34,"c", false,-1, 63,0);
    tracep->declArray(c+164,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+167,"xorRes", false,-1, 63,0);
    tracep->declBit(c+169,"slt", false,-1);
    tracep->declQuad(c+170,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+172,"shamt", false,-1, 5,0);
    tracep->declQuad(c+36,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+173,"io_in_valid", false,-1);
    tracep->declQuad(c+142,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+144,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+139,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+131,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+133,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+137,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+174,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+175,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+176,"io_instrValid", false,-1);
    tracep->declQuad(c+158,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+177,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+179,"io_redirect_valid", false,-1);
    tracep->declBit(c+180,"io_wenFix", false,-1);
    tracep->declQuad(c+403,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+38,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+40,"mcause", false,-1, 63,0);
    tracep->declQuad(c+42,"mepc", false,-1, 63,0);
    tracep->declQuad(c+44,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+46,"satp", false,-1, 63,0);
    tracep->declBus(c+48,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+181,"csri", false,-1, 63,0);
    tracep->declBit(c+183,"isIllegalAccess", false,-1);
    tracep->declBit(c+184,"resetSatp", false,-1);
    tracep->declBit(c+185,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+49,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+186,"io_in_valid", false,-1);
    tracep->declQuad(c+142,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+139,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+144,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+103,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+187,"io_out_valid", false,-1);
    tracep->declQuad(c+330,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+86,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+174,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+175,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+186,"io_in_valid", false,-1);
    tracep->declQuad(c+188,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+139,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+144,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+84,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+103,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+187,"io_out_valid", false,-1);
    tracep->declQuad(c+330,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+84,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+84,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+86,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+100,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+85,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+174,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+175,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+51,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+190,"isStore", false,-1);
    tracep->declBit(c+191,"partialLoad", false,-1);
    tracep->declBus(c+53,"state", false,-1, 1,0);
    tracep->declBus(c+192,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+84,"wValid", false,-1);
    tracep->declQuad(c+54,"c", false,-1, 63,0);
    tracep->declQuad(c+56,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+58,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+142,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+144,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+139,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+156,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+193,"isDivSign", false,-1);
    tracep->declQuad(c+194,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+196,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+198,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+200,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+204,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+207,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+210,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+127,"io_in_0_valid", false,-1);
    tracep->declQuad(c+108,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+110,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+114,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+115,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+116,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+117,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+119,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+121,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+122,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+123,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+148,"io_out_ready", false,-1);
    tracep->declBit(c+60,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+215,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+130,"io_forward_valid", false,-1);
    tracep->declBit(c+140,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+141,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+332,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+138,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+107,"io_flush", false,-1);
    tracep->declBit(c+129,"io_in_0_ready", false,-1);
    tracep->declBit(c+217,"io_out_valid", false,-1);
    tracep->declQuad(c+108,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+110,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+114,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+117,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+118,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+121,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+122,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+415,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+417,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+123,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+218,"forwardRfWen", false,-1);
    tracep->declBit(c+219,"dontForward", false,-1);
    tracep->declBit(c+220,"srcADependEX", false,-1);
    tracep->declBit(c+221,"srcBDependEX", false,-1);
    tracep->declBit(c+222,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+223,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+224,"srcAForward", false,-1);
    tracep->declBit(c+225,"srcBForward", false,-1);
    tracep->declBus(c+61,"busy", false,-1, 31,0);
    tracep->declQuad(c+62,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+419,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R0_en", false,-1);
    tracep->declBit(c+334,"R0_clk", false,-1);
    tracep->declBus(c+421,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R1_en", false,-1);
    tracep->declBit(c+334,"R1_clk", false,-1);
    tracep->declBus(c+422,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R2_en", false,-1);
    tracep->declBit(c+334,"R2_clk", false,-1);
    tracep->declBus(c+423,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R3_en", false,-1);
    tracep->declBit(c+334,"R3_clk", false,-1);
    tracep->declBus(c+424,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R4_en", false,-1);
    tracep->declBit(c+334,"R4_clk", false,-1);
    tracep->declBus(c+425,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R5_en", false,-1);
    tracep->declBit(c+334,"R5_clk", false,-1);
    tracep->declBus(c+426,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R6_en", false,-1);
    tracep->declBit(c+334,"R6_clk", false,-1);
    tracep->declBus(c+427,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R7_en", false,-1);
    tracep->declBit(c+334,"R7_clk", false,-1);
    tracep->declBus(c+428,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R8_en", false,-1);
    tracep->declBit(c+334,"R8_clk", false,-1);
    tracep->declBus(c+429,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R9_en", false,-1);
    tracep->declBit(c+334,"R9_clk", false,-1);
    tracep->declBus(c+430,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R10_en", false,-1);
    tracep->declBit(c+334,"R10_clk", false,-1);
    tracep->declBus(c+431,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R11_en", false,-1);
    tracep->declBit(c+334,"R11_clk", false,-1);
    tracep->declBus(c+432,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R12_en", false,-1);
    tracep->declBit(c+334,"R12_clk", false,-1);
    tracep->declBus(c+433,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R13_en", false,-1);
    tracep->declBit(c+334,"R13_clk", false,-1);
    tracep->declBus(c+434,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R14_en", false,-1);
    tracep->declBit(c+334,"R14_clk", false,-1);
    tracep->declBus(c+435,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R15_en", false,-1);
    tracep->declBit(c+334,"R15_clk", false,-1);
    tracep->declBus(c+436,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R16_en", false,-1);
    tracep->declBit(c+334,"R16_clk", false,-1);
    tracep->declBus(c+437,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R17_en", false,-1);
    tracep->declBit(c+334,"R17_clk", false,-1);
    tracep->declBus(c+438,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R18_en", false,-1);
    tracep->declBit(c+334,"R18_clk", false,-1);
    tracep->declBus(c+439,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R19_en", false,-1);
    tracep->declBit(c+334,"R19_clk", false,-1);
    tracep->declBus(c+440,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R20_en", false,-1);
    tracep->declBit(c+334,"R20_clk", false,-1);
    tracep->declBus(c+441,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R21_en", false,-1);
    tracep->declBit(c+334,"R21_clk", false,-1);
    tracep->declBus(c+442,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R22_en", false,-1);
    tracep->declBit(c+334,"R22_clk", false,-1);
    tracep->declBus(c+443,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R23_en", false,-1);
    tracep->declBit(c+334,"R23_clk", false,-1);
    tracep->declBus(c+444,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R24_en", false,-1);
    tracep->declBit(c+334,"R24_clk", false,-1);
    tracep->declBus(c+445,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R25_en", false,-1);
    tracep->declBit(c+334,"R25_clk", false,-1);
    tracep->declBus(c+446,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R26_en", false,-1);
    tracep->declBit(c+334,"R26_clk", false,-1);
    tracep->declBus(c+447,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R27_en", false,-1);
    tracep->declBit(c+334,"R27_clk", false,-1);
    tracep->declBus(c+448,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R28_en", false,-1);
    tracep->declBit(c+334,"R28_clk", false,-1);
    tracep->declBus(c+449,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R29_en", false,-1);
    tracep->declBit(c+334,"R29_clk", false,-1);
    tracep->declBus(c+450,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R30_en", false,-1);
    tracep->declBit(c+334,"R30_clk", false,-1);
    tracep->declBus(c+451,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R31_en", false,-1);
    tracep->declBit(c+334,"R31_clk", false,-1);
    tracep->declBus(c+119,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R32_en", false,-1);
    tracep->declBit(c+334,"R32_clk", false,-1);
    tracep->declBus(c+120,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+420,"R33_en", false,-1);
    tracep->declBit(c+334,"R33_clk", false,-1);
    tracep->declBus(c+19,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+60,"W0_en", false,-1);
    tracep->declBit(c+334,"W0_clk", false,-1);
    tracep->declQuad(c+215,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+226,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+359,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+361,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+363,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+365,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+367,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+369,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+371,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+373,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+375,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+377,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+341,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+379,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+381,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+383,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+385,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+387,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+389,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+391,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+393,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+395,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+397,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+343,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+399,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+401,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+345,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+347,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+349,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+351,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+353,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+355,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+357,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+228,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+230,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+232+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+6,"io_in_valid", false,-1);
    tracep->declQuad(c+12,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+105,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+16,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+17,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+18,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+19,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+20,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+22,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+24,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+26,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+60,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+215,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+105,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_redirect_valid", false,-1);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+105,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+64,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+101,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+102,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+326,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+296,"io_out_0_ready", false,-1);
    tracep->declBit(c+420,"io_out_1_ready", false,-1);
    tracep->declQuad(c+105,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_redirect_valid", false,-1);
    tracep->declBit(c+98,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+99,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+297,"io_out_0_valid", false,-1);
    tracep->declQuad(c+298,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+305,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+307,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+308,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+311,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+312,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+313,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+452,"io_out_1_valid", false,-1);
    tracep->declQuad(c+453,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+452,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+455,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+456,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+453,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+315,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+297,"valid", false,-1);
    tracep->declQuad(c+298,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+66,"c", false,-1, 63,0);
    tracep->declQuad(c+68,"c_1", false,-1, 63,0);
    tracep->declQuad(c+70,"c_2", false,-1, 63,0);
    tracep->declQuad(c+72,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+297,"io_in_0_valid", false,-1);
    tracep->declQuad(c+298,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+296,"io_out_0_ready", false,-1);
    tracep->declBit(c+420,"io_out_1_ready", false,-1);
    tracep->declBit(c+98,"io_in_0_ready", false,-1);
    tracep->declBit(c+297,"io_out_0_valid", false,-1);
    tracep->declQuad(c+298,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+305,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+307,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+308,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+311,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+312,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+313,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+452,"io_out_1_valid", false,-1);
    tracep->declQuad(c+453,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+452,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+455,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+456,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+452,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+419,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+453,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+297,"io_in_valid", false,-1);
    tracep->declQuad(c+298,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+296,"io_out_ready", false,-1);
    tracep->declBit(c+98,"io_in_ready", false,-1);
    tracep->declBit(c+297,"io_out_valid", false,-1);
    tracep->declQuad(c+298,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+300,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+304,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+305,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+306,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+307,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+308,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+309,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+310,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+311,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+312,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+313,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+316,"io_isWFI", false,-1);
    tracep->declBus(c+317,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+318,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+319,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+452,"io_in_valid", false,-1);
    tracep->declQuad(c+453,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+453,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+453,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+420,"io_out_ready", false,-1);
    tracep->declBit(c+420,"io_in_ready", false,-1);
    tracep->declBit(c+452,"io_out_valid", false,-1);
    tracep->declQuad(c+453,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+453,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+452,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+452,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+452,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+455,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+456,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+419,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+419,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+452,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+419,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+453,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+452,"io_isWFI", false,-1);
    tracep->declBus(c+457,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+458,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+456,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+334,"clock", false,-1);
    tracep->declBit(c+335,"reset", false,-1);
    tracep->declBit(c+101,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+102,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+326,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+98,"io_out_ready", false,-1);
    tracep->declQuad(c+105,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+107,"io_redirect_valid", false,-1);
    tracep->declBit(c+98,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+99,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+320,"io_out_valid", false,-1);
    tracep->declQuad(c+326,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+321,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+323,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+315,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+321,"pc", false,-1, 63,0);
    tracep->declQuad(c+323,"snpc", false,-1, 63,0);
    tracep->declQuad(c+74,"c", false,-1, 63,0);
    tracep->declQuad(c+76,"c_1", false,-1, 63,0);
    tracep->declQuad(c+78,"c_2", false,-1, 63,0);
    tracep->declQuad(c+80,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+82,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+325,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h423c1b3d__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->SimTop__DOT__io_commit_REG));
    bufp->fullQData(oldp+2,(vlSelf->SimTop__DOT__io_pc_REG),64);
    bufp->fullQData(oldp+4,(vlSelf->SimTop__DOT__c),64);
    bufp->fullBit(oldp+6,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+7,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+9,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+10,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullQData(oldp+12,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+14,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+16,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
    bufp->fullQData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+51,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+53,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+72,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+74,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+78,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+80,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+82,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+84,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+85,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+86,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
                                       << 0x30U) | 
                                      (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))) 
                                        << 0x20U) | 
                                       (((QData)((IData)(
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
                                                ? (
                                                   ((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB)))
                                                : 0ULL) 
                                              | ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
                                                  ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB
                                                  : 0ULL))))),64);
    bufp->fullCData(oldp+88,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+89,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+90,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+92,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+93,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+95,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+97,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                        >> 7U) + ((1U 
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
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))))))))))),32);
    bufp->fullBit(oldp+98,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+99,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+100,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+102,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+104,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+105,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+107,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+108,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+115,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+116,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+118,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+120,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+123,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+125,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+126,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+128,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+129,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+130,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+137,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+140,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+142,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+150,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+152,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+153,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+156,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+173,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+180,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+181,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+192,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+200,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+286,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+292,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+294,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+296,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+297,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+298,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+304,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+305,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+306,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+307,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+308,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
                                ? ((0x58U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2))
                                    ? ((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0)
                                        ? 0x5cU : (
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                 >> 0xfU)))) 
                                                    | (5U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                                   >> 0xfU)))))
                                                    ? 0x5eU
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4)))
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4))
                                : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2))),7);
    bufp->fullCData(oldp+309,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+310,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+311,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+312,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+313,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+315,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+316,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+317,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+319,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+321,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+323,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+325,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+326,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+328,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+330,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+334,(vlSelf->clock));
    bufp->fullBit(oldp+335,(vlSelf->reset));
    bufp->fullBit(oldp+336,(vlSelf->io_commit));
    bufp->fullQData(oldp+337,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+339,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+341,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+343,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+345,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+347,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+349,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+351,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+353,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+355,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+357,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+359,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+361,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+363,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+365,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+367,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+369,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+371,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+373,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+375,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+377,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+379,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+381,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+383,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+385,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+387,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+389,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+391,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+393,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+395,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+397,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+399,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+401,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+403,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+405,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+407,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+409,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+411,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+413,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+414,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+415,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+417,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+419,(0U),5);
    bufp->fullBit(oldp+420,(1U));
    bufp->fullCData(oldp+421,(0xaU),5);
    bufp->fullCData(oldp+422,(0xbU),5);
    bufp->fullCData(oldp+423,(0xcU),5);
    bufp->fullCData(oldp+424,(0xdU),5);
    bufp->fullCData(oldp+425,(0xeU),5);
    bufp->fullCData(oldp+426,(0xfU),5);
    bufp->fullCData(oldp+427,(0x10U),5);
    bufp->fullCData(oldp+428,(0x11U),5);
    bufp->fullCData(oldp+429,(0x12U),5);
    bufp->fullCData(oldp+430,(0x13U),5);
    bufp->fullCData(oldp+431,(1U),5);
    bufp->fullCData(oldp+432,(0x14U),5);
    bufp->fullCData(oldp+433,(0x15U),5);
    bufp->fullCData(oldp+434,(0x16U),5);
    bufp->fullCData(oldp+435,(0x17U),5);
    bufp->fullCData(oldp+436,(0x18U),5);
    bufp->fullCData(oldp+437,(0x19U),5);
    bufp->fullCData(oldp+438,(0x1aU),5);
    bufp->fullCData(oldp+439,(0x1bU),5);
    bufp->fullCData(oldp+440,(0x1cU),5);
    bufp->fullCData(oldp+441,(0x1dU),5);
    bufp->fullCData(oldp+442,(2U),5);
    bufp->fullCData(oldp+443,(0x1eU),5);
    bufp->fullCData(oldp+444,(0x1fU),5);
    bufp->fullCData(oldp+445,(3U),5);
    bufp->fullCData(oldp+446,(4U),5);
    bufp->fullCData(oldp+447,(5U),5);
    bufp->fullCData(oldp+448,(6U),5);
    bufp->fullCData(oldp+449,(7U),5);
    bufp->fullCData(oldp+450,(8U),5);
    bufp->fullCData(oldp+451,(9U),5);
    bufp->fullBit(oldp+452,(0U));
    bufp->fullQData(oldp+453,(0ULL),64);
    bufp->fullCData(oldp+455,(3U),3);
    bufp->fullCData(oldp+456,(0U),7);
    bufp->fullCData(oldp+457,(0U),3);
    bufp->fullCData(oldp+458,(3U),2);
}
