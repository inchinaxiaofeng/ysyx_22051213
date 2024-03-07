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
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+338,"io_commit", false,-1);
    tracep->declQuad(c+339,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+338,"io_commit", false,-1);
    tracep->declQuad(c+339,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+4,"c", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+86,"io_aw_valid", false,-1);
    tracep->declBus(c+87,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_w_valid", false,-1);
    tracep->declQuad(c+88,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_ar_valid", false,-1);
    tracep->declBus(c+92,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_aw_ready", false,-1);
    tracep->declBit(c+86,"io_w_ready", false,-1);
    tracep->declBit(c+93,"io_b_valid", false,-1);
    tracep->declBit(c+91,"io_ar_ready", false,-1);
    tracep->declBit(c+94,"io_r_valid", false,-1);
    tracep->declQuad(c+413,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+93,"rWriteStatuOK", false,-1);
    tracep->declBit(c+94,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+94,"iRen", false,-1, 0,0);
    tracep->declBus(c+93,"iWen", false,-1, 0,0);
    tracep->declBus(c+92,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+87,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+90,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+88,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+413,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+95,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+97,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+88,"writeData", false,-1, 63,0);
    tracep->declBus(c+99,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+100,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+101,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+87,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+88,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+87,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+86,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+93,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+91,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+94,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+413,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+103,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+104,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+328,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+86,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+86,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+93,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+105,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+106,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+330,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+86,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+87,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+88,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+92,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+103,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+93,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+105,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+330,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+100,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+101,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+88,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+343,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+107,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+110,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+112,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+114,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+116,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+117,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+118,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+119,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+120,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+121,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+122,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+123,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+125,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+127,"ringBufferHead", false,-1);
    tracep->declBit(c+9,"ringBufferTail", false,-1);
    tracep->declBit(c+415,"ringBufferAllowin", false,-1);
    tracep->declBus(c+128,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+10,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+129,"io_in_0_valid", false,-1);
    tracep->declQuad(c+110,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+114,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+116,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+117,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+118,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+119,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+121,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+122,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+123,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+125,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+416,"io_in_1_valid", false,-1);
    tracep->declBus(c+130,"io_flush", false,-1, 1,0);
    tracep->declBit(c+86,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+93,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+105,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+330,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+131,"io_in_0_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+88,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+107,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_redirect_valid", false,-1);
    tracep->declQuad(c+343,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+107,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+132,"valid", false,-1);
    tracep->declQuad(c+133,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+135,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+137,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+139,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+140,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+141,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+142,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+143,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+144,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+148,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+6,"valid_1", false,-1);
    tracep->declQuad(c+12,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+107,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
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
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+132,"io_in_valid", false,-1);
    tracep->declQuad(c+133,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+135,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+137,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+139,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+140,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+141,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+142,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+143,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+144,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+148,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+109,"io_flush", false,-1);
    tracep->declBit(c+86,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+93,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+105,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+330,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+150,"io_in_ready", false,-1);
    tracep->declBit(c+151,"io_out_valid", false,-1);
    tracep->declQuad(c+133,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+135,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+137,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+152,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+154,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+140,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+155,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+143,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+332,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+158,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+160,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+88,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+132,"io_forward_valid", false,-1);
    tracep->declBit(c+142,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+143,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+334,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+140,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+32,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+162,"io_in_valid", false,-1);
    tracep->declQuad(c+144,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+141,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+133,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+135,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+148,"io_offset", false,-1, 63,0);
    tracep->declBit(c+162,"io_out_valid", false,-1);
    tracep->declQuad(c+156,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+163,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+165,"io_redirect_valid", false,-1);
    tracep->declQuad(c+34,"c", false,-1, 63,0);
    tracep->declArray(c+166,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+169,"xorRes", false,-1, 63,0);
    tracep->declBit(c+171,"slt", false,-1);
    tracep->declQuad(c+172,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+174,"shamt", false,-1, 5,0);
    tracep->declQuad(c+36,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+175,"io_in_valid", false,-1);
    tracep->declQuad(c+144,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+141,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+133,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+135,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+139,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+176,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+177,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+178,"io_instrValid", false,-1);
    tracep->declQuad(c+160,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+179,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+181,"io_redirect_valid", false,-1);
    tracep->declBit(c+182,"io_wenFix", false,-1);
    tracep->declQuad(c+405,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+407,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+411,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+38,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+40,"mcause", false,-1, 63,0);
    tracep->declQuad(c+42,"mepc", false,-1, 63,0);
    tracep->declQuad(c+44,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+46,"satp", false,-1, 63,0);
    tracep->declBus(c+48,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+183,"csri", false,-1, 63,0);
    tracep->declBit(c+185,"isIllegalAccess", false,-1);
    tracep->declBit(c+186,"resetSatp", false,-1);
    tracep->declBit(c+187,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+49,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+188,"io_in_valid", false,-1);
    tracep->declQuad(c+144,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+148,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+141,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+146,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+93,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+105,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+330,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+189,"io_out_valid", false,-1);
    tracep->declQuad(c+332,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+88,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+176,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+177,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+188,"io_in_valid", false,-1);
    tracep->declQuad(c+190,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+141,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+146,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+86,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+93,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+105,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+106,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+330,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+189,"io_out_valid", false,-1);
    tracep->declQuad(c+332,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+86,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+86,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+88,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+90,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+102,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+87,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+176,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+177,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+51,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+192,"isStore", false,-1);
    tracep->declBit(c+193,"partialLoad", false,-1);
    tracep->declBus(c+53,"state", false,-1, 1,0);
    tracep->declQuad(c+54,"c", false,-1, 63,0);
    tracep->declBus(c+194,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+86,"wValid", false,-1);
    tracep->declQuad(c+56,"c_1", false,-1, 63,0);
    tracep->declQuad(c+58,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+60,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+144,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+141,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+158,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+195,"isDivSign", false,-1);
    tracep->declQuad(c+196,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+198,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+200,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+202,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+206,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+209,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+212,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+129,"io_in_0_valid", false,-1);
    tracep->declQuad(c+110,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+114,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+116,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+117,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+118,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+119,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+121,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+122,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+123,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+125,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+150,"io_out_ready", false,-1);
    tracep->declBit(c+62,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+217,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+132,"io_forward_valid", false,-1);
    tracep->declBit(c+142,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+143,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+334,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+140,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+109,"io_flush", false,-1);
    tracep->declBit(c+131,"io_in_0_ready", false,-1);
    tracep->declBit(c+219,"io_out_valid", false,-1);
    tracep->declQuad(c+110,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+112,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+114,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+116,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+119,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+120,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+123,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+417,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+419,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+125,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+220,"forwardRfWen", false,-1);
    tracep->declBit(c+221,"dontForward", false,-1);
    tracep->declBit(c+222,"srcADependEX", false,-1);
    tracep->declBit(c+223,"srcBDependEX", false,-1);
    tracep->declBit(c+224,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+225,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+226,"srcAForward", false,-1);
    tracep->declBit(c+227,"srcBForward", false,-1);
    tracep->declBus(c+63,"busy", false,-1, 31,0);
    tracep->declQuad(c+64,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+421,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R0_en", false,-1);
    tracep->declBit(c+336,"R0_clk", false,-1);
    tracep->declBus(c+423,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R1_en", false,-1);
    tracep->declBit(c+336,"R1_clk", false,-1);
    tracep->declBus(c+424,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R2_en", false,-1);
    tracep->declBit(c+336,"R2_clk", false,-1);
    tracep->declBus(c+425,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R3_en", false,-1);
    tracep->declBit(c+336,"R3_clk", false,-1);
    tracep->declBus(c+426,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R4_en", false,-1);
    tracep->declBit(c+336,"R4_clk", false,-1);
    tracep->declBus(c+427,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R5_en", false,-1);
    tracep->declBit(c+336,"R5_clk", false,-1);
    tracep->declBus(c+428,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R6_en", false,-1);
    tracep->declBit(c+336,"R6_clk", false,-1);
    tracep->declBus(c+429,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R7_en", false,-1);
    tracep->declBit(c+336,"R7_clk", false,-1);
    tracep->declBus(c+430,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R8_en", false,-1);
    tracep->declBit(c+336,"R8_clk", false,-1);
    tracep->declBus(c+431,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R9_en", false,-1);
    tracep->declBit(c+336,"R9_clk", false,-1);
    tracep->declBus(c+432,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R10_en", false,-1);
    tracep->declBit(c+336,"R10_clk", false,-1);
    tracep->declBus(c+433,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R11_en", false,-1);
    tracep->declBit(c+336,"R11_clk", false,-1);
    tracep->declBus(c+434,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R12_en", false,-1);
    tracep->declBit(c+336,"R12_clk", false,-1);
    tracep->declBus(c+435,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R13_en", false,-1);
    tracep->declBit(c+336,"R13_clk", false,-1);
    tracep->declBus(c+436,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R14_en", false,-1);
    tracep->declBit(c+336,"R14_clk", false,-1);
    tracep->declBus(c+437,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R15_en", false,-1);
    tracep->declBit(c+336,"R15_clk", false,-1);
    tracep->declBus(c+438,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R16_en", false,-1);
    tracep->declBit(c+336,"R16_clk", false,-1);
    tracep->declBus(c+439,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R17_en", false,-1);
    tracep->declBit(c+336,"R17_clk", false,-1);
    tracep->declBus(c+440,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R18_en", false,-1);
    tracep->declBit(c+336,"R18_clk", false,-1);
    tracep->declBus(c+441,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R19_en", false,-1);
    tracep->declBit(c+336,"R19_clk", false,-1);
    tracep->declBus(c+442,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R20_en", false,-1);
    tracep->declBit(c+336,"R20_clk", false,-1);
    tracep->declBus(c+443,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R21_en", false,-1);
    tracep->declBit(c+336,"R21_clk", false,-1);
    tracep->declBus(c+444,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R22_en", false,-1);
    tracep->declBit(c+336,"R22_clk", false,-1);
    tracep->declBus(c+445,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R23_en", false,-1);
    tracep->declBit(c+336,"R23_clk", false,-1);
    tracep->declBus(c+446,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R24_en", false,-1);
    tracep->declBit(c+336,"R24_clk", false,-1);
    tracep->declBus(c+447,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R25_en", false,-1);
    tracep->declBit(c+336,"R25_clk", false,-1);
    tracep->declBus(c+448,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R26_en", false,-1);
    tracep->declBit(c+336,"R26_clk", false,-1);
    tracep->declBus(c+449,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R27_en", false,-1);
    tracep->declBit(c+336,"R27_clk", false,-1);
    tracep->declBus(c+450,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R28_en", false,-1);
    tracep->declBit(c+336,"R28_clk", false,-1);
    tracep->declBus(c+451,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R29_en", false,-1);
    tracep->declBit(c+336,"R29_clk", false,-1);
    tracep->declBus(c+452,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R30_en", false,-1);
    tracep->declBit(c+336,"R30_clk", false,-1);
    tracep->declBus(c+453,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R31_en", false,-1);
    tracep->declBit(c+336,"R31_clk", false,-1);
    tracep->declBus(c+121,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R32_en", false,-1);
    tracep->declBit(c+336,"R32_clk", false,-1);
    tracep->declBus(c+122,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+422,"R33_en", false,-1);
    tracep->declBit(c+336,"R33_clk", false,-1);
    tracep->declBus(c+19,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+62,"W0_en", false,-1);
    tracep->declBit(c+336,"W0_clk", false,-1);
    tracep->declQuad(c+217,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+228,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+361,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+363,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+365,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+367,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+369,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+371,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+373,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+375,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+377,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+379,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+343,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+381,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+383,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+385,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+387,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+389,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+391,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+393,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+395,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+397,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+399,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+345,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+401,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+403,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+347,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+349,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+351,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+353,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+355,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+357,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+359,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+230,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+232,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+234+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+6,"io_in_valid", false,-1);
    tracep->declQuad(c+12,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+107,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+16,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+17,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+18,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+19,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+20,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+22,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+24,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+26,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+62,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+217,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+107,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_redirect_valid", false,-1);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+107,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+66,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+103,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+298,"io_out_0_ready", false,-1);
    tracep->declBit(c+422,"io_out_1_ready", false,-1);
    tracep->declQuad(c+107,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_redirect_valid", false,-1);
    tracep->declBit(c+100,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+101,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+299,"io_out_0_valid", false,-1);
    tracep->declQuad(c+300,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+307,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+308,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+311,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+312,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+313,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+314,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+315,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+454,"io_out_1_valid", false,-1);
    tracep->declQuad(c+455,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+454,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+457,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+458,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+455,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+317,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+299,"valid", false,-1);
    tracep->declQuad(c+300,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+68,"c", false,-1, 63,0);
    tracep->declQuad(c+70,"c_1", false,-1, 63,0);
    tracep->declQuad(c+72,"c_2", false,-1, 63,0);
    tracep->declQuad(c+74,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+299,"io_in_0_valid", false,-1);
    tracep->declQuad(c+300,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+298,"io_out_0_ready", false,-1);
    tracep->declBit(c+422,"io_out_1_ready", false,-1);
    tracep->declBit(c+100,"io_in_0_ready", false,-1);
    tracep->declBit(c+299,"io_out_0_valid", false,-1);
    tracep->declQuad(c+300,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+307,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+308,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+311,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+312,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+313,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+314,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+315,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+454,"io_out_1_valid", false,-1);
    tracep->declQuad(c+455,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+454,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+457,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+458,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+454,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+421,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+455,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+299,"io_in_valid", false,-1);
    tracep->declQuad(c+300,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+298,"io_out_ready", false,-1);
    tracep->declBit(c+100,"io_in_ready", false,-1);
    tracep->declBit(c+299,"io_out_valid", false,-1);
    tracep->declQuad(c+300,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+302,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+304,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+306,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+307,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+308,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+309,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+310,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+311,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+312,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+313,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+314,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+315,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+318,"io_isWFI", false,-1);
    tracep->declBus(c+319,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+320,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+321,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+454,"io_in_valid", false,-1);
    tracep->declQuad(c+455,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+455,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+455,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+422,"io_out_ready", false,-1);
    tracep->declBit(c+422,"io_in_ready", false,-1);
    tracep->declBit(c+454,"io_out_valid", false,-1);
    tracep->declQuad(c+455,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+454,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+454,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+454,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+457,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+458,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+421,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+421,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+454,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+421,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+455,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+454,"io_isWFI", false,-1);
    tracep->declBus(c+459,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+460,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+458,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+336,"clock", false,-1);
    tracep->declBit(c+337,"reset", false,-1);
    tracep->declBit(c+103,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+104,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+328,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+100,"io_out_ready", false,-1);
    tracep->declQuad(c+107,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+109,"io_redirect_valid", false,-1);
    tracep->declBit(c+100,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+101,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+322,"io_out_valid", false,-1);
    tracep->declQuad(c+328,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+323,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+325,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+317,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+323,"pc", false,-1, 63,0);
    tracep->declQuad(c+325,"snpc", false,-1, 63,0);
    tracep->declQuad(c+76,"c", false,-1, 63,0);
    tracep->declQuad(c+78,"c_1", false,-1, 63,0);
    tracep->declQuad(c+80,"c_2", false,-1, 63,0);
    tracep->declQuad(c+82,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+84,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"wen", false,-1);
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
    bufp->fullQData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullBit(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+72,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+74,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+78,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+80,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+82,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+84,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+86,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+87,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+88,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+90,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+92,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+93,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+94,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+95,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+97,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+99,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+100,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+101,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+102,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+104,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+105,(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    bufp->fullBit(oldp+106,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+107,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+114,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+116,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+118,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+120,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+130,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+131,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+137,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+142,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+152,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+154,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+155,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+158,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+166,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+182,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+183,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+194,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+202,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+206,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+286,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+292,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+294,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+296,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+298,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+299,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+306,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+307,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+308,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+309,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+310,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+311,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+312,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+313,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+314,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+315,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+317,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+318,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+319,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+321,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+322,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+323,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+325,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+327,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+328,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+330,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+334,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+336,(vlSelf->clock));
    bufp->fullBit(oldp+337,(vlSelf->reset));
    bufp->fullBit(oldp+338,(vlSelf->io_commit));
    bufp->fullQData(oldp+339,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+341,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+343,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+345,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+347,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+349,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+351,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+353,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+355,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+357,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+359,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+361,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+363,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+365,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+367,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+369,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+371,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+373,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+375,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+377,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+379,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+381,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+383,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+385,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+387,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+389,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+391,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+393,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+395,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+397,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+399,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+401,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+403,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+405,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+407,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+409,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+411,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+413,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+415,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+416,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+417,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+419,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+421,(0U),5);
    bufp->fullBit(oldp+422,(1U));
    bufp->fullCData(oldp+423,(0xaU),5);
    bufp->fullCData(oldp+424,(0xbU),5);
    bufp->fullCData(oldp+425,(0xcU),5);
    bufp->fullCData(oldp+426,(0xdU),5);
    bufp->fullCData(oldp+427,(0xeU),5);
    bufp->fullCData(oldp+428,(0xfU),5);
    bufp->fullCData(oldp+429,(0x10U),5);
    bufp->fullCData(oldp+430,(0x11U),5);
    bufp->fullCData(oldp+431,(0x12U),5);
    bufp->fullCData(oldp+432,(0x13U),5);
    bufp->fullCData(oldp+433,(1U),5);
    bufp->fullCData(oldp+434,(0x14U),5);
    bufp->fullCData(oldp+435,(0x15U),5);
    bufp->fullCData(oldp+436,(0x16U),5);
    bufp->fullCData(oldp+437,(0x17U),5);
    bufp->fullCData(oldp+438,(0x18U),5);
    bufp->fullCData(oldp+439,(0x19U),5);
    bufp->fullCData(oldp+440,(0x1aU),5);
    bufp->fullCData(oldp+441,(0x1bU),5);
    bufp->fullCData(oldp+442,(0x1cU),5);
    bufp->fullCData(oldp+443,(0x1dU),5);
    bufp->fullCData(oldp+444,(2U),5);
    bufp->fullCData(oldp+445,(0x1eU),5);
    bufp->fullCData(oldp+446,(0x1fU),5);
    bufp->fullCData(oldp+447,(3U),5);
    bufp->fullCData(oldp+448,(4U),5);
    bufp->fullCData(oldp+449,(5U),5);
    bufp->fullCData(oldp+450,(6U),5);
    bufp->fullCData(oldp+451,(7U),5);
    bufp->fullCData(oldp+452,(8U),5);
    bufp->fullCData(oldp+453,(9U),5);
    bufp->fullBit(oldp+454,(0U));
    bufp->fullQData(oldp+455,(0ULL),64);
    bufp->fullCData(oldp+457,(3U),3);
    bufp->fullCData(oldp+458,(0U),7);
    bufp->fullCData(oldp+459,(0U),3);
    bufp->fullCData(oldp+460,(3U),2);
}
