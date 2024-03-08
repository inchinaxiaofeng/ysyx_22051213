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
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+342,"io_commit", false,-1);
    tracep->declQuad(c+343,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+342,"io_commit", false,-1);
    tracep->declQuad(c+343,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+99,"io_aw_valid", false,-1);
    tracep->declBus(c+100,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_w_valid", false,-1);
    tracep->declQuad(c+101,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_b_ready", false,-1);
    tracep->declBit(c+104,"io_ar_valid", false,-1);
    tracep->declBus(c+105,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+417,"io_r_ready", false,-1);
    tracep->declBit(c+106,"io_aw_ready", false,-1);
    tracep->declBit(c+106,"io_w_ready", false,-1);
    tracep->declBit(c+107,"io_b_valid", false,-1);
    tracep->declBit(c+108,"io_ar_ready", false,-1);
    tracep->declBit(c+109,"io_r_valid", false,-1);
    tracep->declQuad(c+418,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+109,"state_load", false,-1);
    tracep->declBit(c+107,"state_store", false,-1);
    tracep->declQuad(c+5,"c", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+109,"iRen", false,-1, 0,0);
    tracep->declBus(c+107,"iWen", false,-1, 0,0);
    tracep->declBus(c+105,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+100,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+103,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+101,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+418,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+110,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+112,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+101,"writeData", false,-1, 63,0);
    tracep->declBus(c+114,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+115,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+116,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+117,"InstFetch_r_ready", false,-1);
    tracep->declBit(c+99,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+100,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+101,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"LoadStore_b_ready", false,-1);
    tracep->declBit(c+118,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+100,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"LoadStore_r_ready", false,-1);
    tracep->declBit(c+106,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+106,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+107,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+108,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+109,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+418,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+108,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+109,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+418,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+106,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+106,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+107,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+108,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+109,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+418,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+99,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+100,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+101,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"Arbiter_b_ready", false,-1);
    tracep->declBit(c+104,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+105,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+417,"Arbiter_r_ready", false,-1);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->declQuad(c+10,"c_1", false,-1, 63,0);
    tracep->declQuad(c+12,"c_2", false,-1, 63,0);
    tracep->declQuad(c+14,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+106,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+107,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+108,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+115,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+116,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+117,"io_imem_r_ready", false,-1);
    tracep->declBit(c+99,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+101,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+118,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+347,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+16,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+17,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+122,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+124,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+128,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+129,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+130,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+131,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+132,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+133,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+134,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+135,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+137,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+139,"ringBufferHead", false,-1);
    tracep->declBit(c+19,"ringBufferTail", false,-1);
    tracep->declBit(c+420,"ringBufferAllowin", false,-1);
    tracep->declBus(c+140,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+20,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+141,"io_in_0_valid", false,-1);
    tracep->declQuad(c+122,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+124,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+128,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+129,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+130,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+131,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+132,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+133,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+134,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+135,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+137,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+421,"io_in_1_valid", false,-1);
    tracep->declBus(c+142,"io_flush", false,-1, 1,0);
    tracep->declBit(c+106,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+107,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+108,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+143,"io_in_0_ready", false,-1);
    tracep->declBit(c+99,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+101,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+118,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+119,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_redirect_valid", false,-1);
    tracep->declQuad(c+347,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+16,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+17,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+144,"valid", false,-1);
    tracep->declQuad(c+145,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+147,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+149,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+151,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+152,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+153,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+154,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+158,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+160,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+16,"valid_1", false,-1);
    tracep->declQuad(c+22,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+24,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+119,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+26,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+27,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+28,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+29,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+30,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+32,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+34,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+36,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+38,"c", false,-1, 63,0);
    tracep->declQuad(c+40,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+144,"io_in_valid", false,-1);
    tracep->declQuad(c+145,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+147,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+149,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+151,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+152,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+153,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+154,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+158,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+121,"io_flush", false,-1);
    tracep->declBit(c+106,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+107,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+108,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+162,"io_in_ready", false,-1);
    tracep->declBit(c+163,"io_out_valid", false,-1);
    tracep->declQuad(c+145,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+147,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+149,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+164,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+166,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+152,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+167,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+168,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+422,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+170,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+172,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+99,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+101,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+118,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+144,"io_forward_valid", false,-1);
    tracep->declBit(c+154,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+155,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+424,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+152,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+42,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+174,"io_in_valid", false,-1);
    tracep->declQuad(c+156,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+158,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+153,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+145,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+147,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+160,"io_offset", false,-1, 63,0);
    tracep->declBit(c+174,"io_out_valid", false,-1);
    tracep->declQuad(c+168,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+175,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+177,"io_redirect_valid", false,-1);
    tracep->declArray(c+178,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+181,"xorRes", false,-1, 63,0);
    tracep->declBit(c+183,"slt", false,-1);
    tracep->declQuad(c+184,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+186,"shamt", false,-1, 5,0);
    tracep->declQuad(c+44,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+187,"io_in_valid", false,-1);
    tracep->declQuad(c+156,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+158,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+153,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+145,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+147,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+151,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+188,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+189,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+190,"io_instrValid", false,-1);
    tracep->declQuad(c+172,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+191,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+193,"io_redirect_valid", false,-1);
    tracep->declBit(c+194,"io_wenFix", false,-1);
    tracep->declQuad(c+409,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+413,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+415,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+46,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+48,"mcause", false,-1, 63,0);
    tracep->declQuad(c+50,"mepc", false,-1, 63,0);
    tracep->declQuad(c+52,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+54,"satp", false,-1, 63,0);
    tracep->declBus(c+56,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+195,"csri", false,-1, 63,0);
    tracep->declBit(c+197,"isIllegalAccess", false,-1);
    tracep->declBit(c+198,"resetSatp", false,-1);
    tracep->declBit(c+199,"raiseExceptionIntr", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+200,"io_in_valid", false,-1);
    tracep->declQuad(c+156,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+153,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+158,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+106,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+107,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+108,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+201,"io_out_valid", false,-1);
    tracep->declQuad(c+422,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+99,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+101,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+118,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+188,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+189,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+57,"c", false,-1, 63,0);
    tracep->declQuad(c+59,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+200,"io_in_valid", false,-1);
    tracep->declQuad(c+202,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+153,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+158,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+106,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+107,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+108,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+61,"io_in_ready", false,-1);
    tracep->declBit(c+201,"io_out_valid", false,-1);
    tracep->declQuad(c+422,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+99,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+99,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+101,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+103,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+118,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+188,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+189,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+62,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+204,"isStore", false,-1);
    tracep->declBit(c+205,"partialLoad", false,-1);
    tracep->declBus(c+64,"state_load", false,-1, 1,0);
    tracep->declBit(c+4,"state_store", false,-1);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->declQuad(c+67,"c_1", false,-1, 63,0);
    tracep->declQuad(c+69,"c_2", false,-1, 63,0);
    tracep->declBus(c+206,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+99,"wValid", false,-1);
    tracep->declBit(c+118,"rValid", false,-1);
    tracep->declQuad(c+71,"c_3", false,-1, 63,0);
    tracep->declQuad(c+73,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+75,"c_4", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+156,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+158,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+153,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+170,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+207,"isDivSign", false,-1);
    tracep->declQuad(c+208,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+210,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+212,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+214,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+218,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+221,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+224,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+141,"io_in_0_valid", false,-1);
    tracep->declQuad(c+122,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+124,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+128,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+129,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+130,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+131,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+132,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+133,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+134,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+135,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+137,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+162,"io_out_ready", false,-1);
    tracep->declBit(c+77,"io_wb_rfWen", false,-1);
    tracep->declBus(c+29,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+229,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+144,"io_forward_valid", false,-1);
    tracep->declBit(c+154,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+155,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+424,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+152,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+121,"io_flush", false,-1);
    tracep->declBit(c+143,"io_in_0_ready", false,-1);
    tracep->declBit(c+231,"io_out_valid", false,-1);
    tracep->declQuad(c+122,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+124,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+128,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+131,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+132,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+135,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+426,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+428,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+137,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+232,"forwardRfWen", false,-1);
    tracep->declBit(c+233,"dontForward", false,-1);
    tracep->declBit(c+234,"srcADependEX", false,-1);
    tracep->declBit(c+235,"srcBDependEX", false,-1);
    tracep->declBit(c+236,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+237,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+238,"srcAForward", false,-1);
    tracep->declBit(c+239,"srcBForward", false,-1);
    tracep->declBus(c+78,"busy", false,-1, 31,0);
    tracep->declQuad(c+79,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+430,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R0_en", false,-1);
    tracep->declBit(c+340,"R0_clk", false,-1);
    tracep->declBus(c+432,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R1_en", false,-1);
    tracep->declBit(c+340,"R1_clk", false,-1);
    tracep->declBus(c+433,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R2_en", false,-1);
    tracep->declBit(c+340,"R2_clk", false,-1);
    tracep->declBus(c+434,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R3_en", false,-1);
    tracep->declBit(c+340,"R3_clk", false,-1);
    tracep->declBus(c+435,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R4_en", false,-1);
    tracep->declBit(c+340,"R4_clk", false,-1);
    tracep->declBus(c+436,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R5_en", false,-1);
    tracep->declBit(c+340,"R5_clk", false,-1);
    tracep->declBus(c+437,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R6_en", false,-1);
    tracep->declBit(c+340,"R6_clk", false,-1);
    tracep->declBus(c+438,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R7_en", false,-1);
    tracep->declBit(c+340,"R7_clk", false,-1);
    tracep->declBus(c+439,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R8_en", false,-1);
    tracep->declBit(c+340,"R8_clk", false,-1);
    tracep->declBus(c+440,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R9_en", false,-1);
    tracep->declBit(c+340,"R9_clk", false,-1);
    tracep->declBus(c+441,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R10_en", false,-1);
    tracep->declBit(c+340,"R10_clk", false,-1);
    tracep->declBus(c+442,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R11_en", false,-1);
    tracep->declBit(c+340,"R11_clk", false,-1);
    tracep->declBus(c+443,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R12_en", false,-1);
    tracep->declBit(c+340,"R12_clk", false,-1);
    tracep->declBus(c+444,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R13_en", false,-1);
    tracep->declBit(c+340,"R13_clk", false,-1);
    tracep->declBus(c+445,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R14_en", false,-1);
    tracep->declBit(c+340,"R14_clk", false,-1);
    tracep->declBus(c+446,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R15_en", false,-1);
    tracep->declBit(c+340,"R15_clk", false,-1);
    tracep->declBus(c+447,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R16_en", false,-1);
    tracep->declBit(c+340,"R16_clk", false,-1);
    tracep->declBus(c+448,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R17_en", false,-1);
    tracep->declBit(c+340,"R17_clk", false,-1);
    tracep->declBus(c+449,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R18_en", false,-1);
    tracep->declBit(c+340,"R18_clk", false,-1);
    tracep->declBus(c+450,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R19_en", false,-1);
    tracep->declBit(c+340,"R19_clk", false,-1);
    tracep->declBus(c+451,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R20_en", false,-1);
    tracep->declBit(c+340,"R20_clk", false,-1);
    tracep->declBus(c+452,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R21_en", false,-1);
    tracep->declBit(c+340,"R21_clk", false,-1);
    tracep->declBus(c+453,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R22_en", false,-1);
    tracep->declBit(c+340,"R22_clk", false,-1);
    tracep->declBus(c+454,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R23_en", false,-1);
    tracep->declBit(c+340,"R23_clk", false,-1);
    tracep->declBus(c+455,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R24_en", false,-1);
    tracep->declBit(c+340,"R24_clk", false,-1);
    tracep->declBus(c+456,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R25_en", false,-1);
    tracep->declBit(c+340,"R25_clk", false,-1);
    tracep->declBus(c+457,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R26_en", false,-1);
    tracep->declBit(c+340,"R26_clk", false,-1);
    tracep->declBus(c+458,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R27_en", false,-1);
    tracep->declBit(c+340,"R27_clk", false,-1);
    tracep->declBus(c+459,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R28_en", false,-1);
    tracep->declBit(c+340,"R28_clk", false,-1);
    tracep->declBus(c+460,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R29_en", false,-1);
    tracep->declBit(c+340,"R29_clk", false,-1);
    tracep->declBus(c+461,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R30_en", false,-1);
    tracep->declBit(c+340,"R30_clk", false,-1);
    tracep->declBus(c+462,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R31_en", false,-1);
    tracep->declBit(c+340,"R31_clk", false,-1);
    tracep->declBus(c+133,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R32_en", false,-1);
    tracep->declBit(c+340,"R32_clk", false,-1);
    tracep->declBus(c+134,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+431,"R33_en", false,-1);
    tracep->declBit(c+340,"R33_clk", false,-1);
    tracep->declBus(c+29,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+77,"W0_en", false,-1);
    tracep->declBit(c+340,"W0_clk", false,-1);
    tracep->declQuad(c+229,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+240,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+365,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+367,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+369,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+371,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+373,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+375,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+377,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+379,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+381,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+383,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+347,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+385,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+387,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+389,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+391,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+393,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+395,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+397,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+399,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+401,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+403,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+349,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+405,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+407,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+351,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+353,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+355,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+357,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+359,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+361,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+363,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+242,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+246+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+16,"io_in_valid", false,-1);
    tracep->declQuad(c+22,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+24,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+26,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+27,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+28,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+29,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+30,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+32,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+34,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+36,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+77,"io_wb_rfWen", false,-1);
    tracep->declBus(c+29,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+229,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+119,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_redirect_valid", false,-1);
    tracep->declBit(c+16,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+17,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+81,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+310,"io_out_0_ready", false,-1);
    tracep->declBit(c+431,"io_out_1_ready", false,-1);
    tracep->declQuad(c+119,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_redirect_valid", false,-1);
    tracep->declBit(c+115,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+116,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+117,"io_imem_r_ready", false,-1);
    tracep->declBit(c+311,"io_out_0_valid", false,-1);
    tracep->declQuad(c+312,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+318,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+319,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+320,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+321,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+322,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+323,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+324,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+325,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+326,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+327,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+463,"io_out_1_valid", false,-1);
    tracep->declQuad(c+464,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+463,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+466,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+467,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+464,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+329,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+311,"valid", false,-1);
    tracep->declQuad(c+312,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+83,"c", false,-1, 63,0);
    tracep->declQuad(c+85,"c_1", false,-1, 63,0);
    tracep->declQuad(c+87,"c_2", false,-1, 63,0);
    tracep->declQuad(c+89,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+311,"io_in_0_valid", false,-1);
    tracep->declQuad(c+312,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+310,"io_out_0_ready", false,-1);
    tracep->declBit(c+431,"io_out_1_ready", false,-1);
    tracep->declBit(c+115,"io_in_0_ready", false,-1);
    tracep->declBit(c+311,"io_out_0_valid", false,-1);
    tracep->declQuad(c+312,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+318,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+319,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+320,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+321,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+322,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+323,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+324,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+325,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+326,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+327,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+463,"io_out_1_valid", false,-1);
    tracep->declQuad(c+464,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+463,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+466,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+467,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+463,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+430,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+464,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+311,"io_in_valid", false,-1);
    tracep->declQuad(c+312,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+310,"io_out_ready", false,-1);
    tracep->declBit(c+115,"io_in_ready", false,-1);
    tracep->declBit(c+311,"io_out_valid", false,-1);
    tracep->declQuad(c+312,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+314,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+316,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+318,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+319,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+320,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+321,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+322,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+323,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+324,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+325,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+326,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+327,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+330,"io_isWFI", false,-1);
    tracep->declBus(c+331,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+332,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+333,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+463,"io_in_valid", false,-1);
    tracep->declQuad(c+464,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+464,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+464,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+431,"io_out_ready", false,-1);
    tracep->declBit(c+431,"io_in_ready", false,-1);
    tracep->declBit(c+463,"io_out_valid", false,-1);
    tracep->declQuad(c+464,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+464,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+463,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+463,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+463,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+466,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+467,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+430,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+430,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+463,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+430,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+464,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+463,"io_isWFI", false,-1);
    tracep->declBus(c+468,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+469,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+467,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+340,"clock", false,-1);
    tracep->declBit(c+341,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+418,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+115,"io_out_ready", false,-1);
    tracep->declQuad(c+119,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+121,"io_redirect_valid", false,-1);
    tracep->declBit(c+115,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+116,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+117,"io_imem_r_ready", false,-1);
    tracep->declBit(c+334,"io_out_valid", false,-1);
    tracep->declQuad(c+418,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+335,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+337,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+329,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+335,"pc", false,-1, 63,0);
    tracep->declQuad(c+337,"snpc", false,-1, 63,0);
    tracep->declQuad(c+91,"c", false,-1, 63,0);
    tracep->declQuad(c+93,"c_1", false,-1, 63,0);
    tracep->declQuad(c+95,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+97,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"wen", false,-1);
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
    bufp->fullBit(oldp+4,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store));
    bufp->fullQData(oldp+5,(vlSelf->SimTop__DOT__TP_SRAM__DOT__c),64);
    bufp->fullBit(oldp+7,((1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))));
    bufp->fullQData(oldp+8,(vlSelf->SimTop__DOT__arbiter__DOT__c),64);
    bufp->fullQData(oldp+10,(vlSelf->SimTop__DOT__arbiter__DOT__c_1),64);
    bufp->fullQData(oldp+12,(vlSelf->SimTop__DOT__arbiter__DOT__c_2),64);
    bufp->fullQData(oldp+14,(vlSelf->SimTop__DOT__arbiter__DOT__c_3),64);
    bufp->fullBit(oldp+16,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+19,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullQData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c_1),64);
    bufp->fullBit(oldp+61,(((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                            & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))));
    bufp->fullQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load),2);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_4),64);
    bufp->fullBit(oldp+77,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+78,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+85,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+87,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+89,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+91,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+93,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+95,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+97,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+99,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+100,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+101,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+103,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+104,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_7)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                  : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_14) 
                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid))))));
    bufp->fullIData(oldp+105,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_7)
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                    : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_14)
                                        ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                        : 0U)))),32);
    bufp->fullBit(oldp+106,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))));
    bufp->fullBit(oldp+107,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store));
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)))));
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    bufp->fullQData(oldp+110,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_7)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_14)
                                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                     : 0U)))))),64);
    bufp->fullQData(oldp+112,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+114,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
                                         >> 7U) + (
                                                   (1U 
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
    bufp->fullBit(oldp+115,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+116,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+117,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1));
    bufp->fullBit(oldp+118,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    bufp->fullQData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+126,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+128,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+130,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+132,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+135,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+137,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+139,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+141,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+142,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+143,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+147,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+164,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+166,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+167,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+170,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+194,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+195,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+206,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+214,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+286,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+292,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+294,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+296,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+298,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+306,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+308,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+310,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+311,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+312,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+318,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+319,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+321,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+322,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+323,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+324,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+325,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+326,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+327,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+329,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+330,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+331,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+333,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+334,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+335,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+337,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+339,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullBit(oldp+340,(vlSelf->clock));
    bufp->fullBit(oldp+341,(vlSelf->reset));
    bufp->fullBit(oldp+342,(vlSelf->io_commit));
    bufp->fullQData(oldp+343,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+345,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+347,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+349,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+351,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+353,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+355,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+357,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+359,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+361,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+363,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+365,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+367,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+369,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+371,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+373,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+375,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+377,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+379,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+381,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+383,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+385,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+387,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+389,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+391,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+393,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+395,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+397,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+399,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+401,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+403,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+405,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+407,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+409,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+411,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+413,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+415,(vlSelf->io_csr_regs_3),64);
    bufp->fullBit(oldp+417,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                              ? (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_7)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)
                                  : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_14) 
                                     & (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))))));
    bufp->fullQData(oldp+418,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+420,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+421,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+422,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+424,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullQData(oldp+426,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+428,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+430,(0U),5);
    bufp->fullBit(oldp+431,(1U));
    bufp->fullCData(oldp+432,(0xaU),5);
    bufp->fullCData(oldp+433,(0xbU),5);
    bufp->fullCData(oldp+434,(0xcU),5);
    bufp->fullCData(oldp+435,(0xdU),5);
    bufp->fullCData(oldp+436,(0xeU),5);
    bufp->fullCData(oldp+437,(0xfU),5);
    bufp->fullCData(oldp+438,(0x10U),5);
    bufp->fullCData(oldp+439,(0x11U),5);
    bufp->fullCData(oldp+440,(0x12U),5);
    bufp->fullCData(oldp+441,(0x13U),5);
    bufp->fullCData(oldp+442,(1U),5);
    bufp->fullCData(oldp+443,(0x14U),5);
    bufp->fullCData(oldp+444,(0x15U),5);
    bufp->fullCData(oldp+445,(0x16U),5);
    bufp->fullCData(oldp+446,(0x17U),5);
    bufp->fullCData(oldp+447,(0x18U),5);
    bufp->fullCData(oldp+448,(0x19U),5);
    bufp->fullCData(oldp+449,(0x1aU),5);
    bufp->fullCData(oldp+450,(0x1bU),5);
    bufp->fullCData(oldp+451,(0x1cU),5);
    bufp->fullCData(oldp+452,(0x1dU),5);
    bufp->fullCData(oldp+453,(2U),5);
    bufp->fullCData(oldp+454,(0x1eU),5);
    bufp->fullCData(oldp+455,(0x1fU),5);
    bufp->fullCData(oldp+456,(3U),5);
    bufp->fullCData(oldp+457,(4U),5);
    bufp->fullCData(oldp+458,(5U),5);
    bufp->fullCData(oldp+459,(6U),5);
    bufp->fullCData(oldp+460,(7U),5);
    bufp->fullCData(oldp+461,(8U),5);
    bufp->fullCData(oldp+462,(9U),5);
    bufp->fullBit(oldp+463,(0U));
    bufp->fullQData(oldp+464,(0ULL),64);
    bufp->fullCData(oldp+466,(3U),3);
    bufp->fullCData(oldp+467,(0U),7);
    bufp->fullCData(oldp+468,(0U),3);
    bufp->fullCData(oldp+469,(3U),2);
}
