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
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declQuad(c+333,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+335,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+337,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declQuad(c+333,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+335,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+337,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+85,"io_aw_valid", false,-1);
    tracep->declBus(c+86,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_w_valid", false,-1);
    tracep->declQuad(c+87,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+90,"io_ar_valid", false,-1);
    tracep->declBus(c+91,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_aw_ready", false,-1);
    tracep->declBit(c+85,"io_w_ready", false,-1);
    tracep->declBit(c+92,"io_b_valid", false,-1);
    tracep->declBit(c+90,"io_ar_ready", false,-1);
    tracep->declBit(c+93,"io_r_valid", false,-1);
    tracep->declQuad(c+405,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+92,"rWriteStatuOK", false,-1);
    tracep->declBit(c+93,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+93,"iRen", false,-1, 0,0);
    tracep->declBus(c+92,"iWen", false,-1, 0,0);
    tracep->declBus(c+91,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+86,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+89,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+87,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+405,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+94,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+96,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+87,"writeData", false,-1, 63,0);
    tracep->declBus(c+98,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+99,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+100,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+86,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+87,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+86,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+85,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+92,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+90,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+93,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+405,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+102,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+103,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+323,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+85,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+92,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+104,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+105,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+325,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+86,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+87,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+90,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+91,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+325,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+335,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+337,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+106,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declBit(c+110,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+111,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+112,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+113,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+114,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+115,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+116,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+117,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+118,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+119,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+121,"ringBufferHead", false,-1);
    tracep->declBit(c+1,"ringBufferTail", false,-1);
    tracep->declBit(c+407,"ringBufferAllowin", false,-1);
    tracep->declBus(c+122,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+2,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+123,"io_in_0_valid", false,-1);
    tracep->declQuad(c+106,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+110,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+111,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+112,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+113,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+114,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+115,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+117,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+119,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+408,"io_in_1_valid", false,-1);
    tracep->declBus(c+124,"io_flush", false,-1, 1,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+325,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+125,"io_in_0_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+126,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+128,"io_redirect_valid", false,-1);
    tracep->declQuad(c+335,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+337,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+129,"valid", false,-1);
    tracep->declQuad(c+130,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+132,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declBit(c+134,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+135,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+136,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+137,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+138,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+139,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+143,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+4,"valid_1", false,-1);
    tracep->declQuad(c+5,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+9,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+10,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+12,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+13,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+15,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+17,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+19,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+21,"c", false,-1, 63,0);
    tracep->declQuad(c+23,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+129,"io_in_valid", false,-1);
    tracep->declQuad(c+130,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+132,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+134,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+135,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+136,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+137,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+138,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+139,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+143,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+128,"io_flush", false,-1);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+325,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+145,"io_in_ready", false,-1);
    tracep->declBit(c+146,"io_out_valid", false,-1);
    tracep->declQuad(c+130,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+132,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+147,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+149,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+135,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+150,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+138,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+151,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+327,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+153,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+155,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+129,"io_forward_valid", false,-1);
    tracep->declBit(c+137,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+138,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+329,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+135,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+25,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+157,"io_in_valid", false,-1);
    tracep->declQuad(c+139,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+136,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+130,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+132,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+143,"io_offset", false,-1, 63,0);
    tracep->declBit(c+157,"io_out_valid", false,-1);
    tracep->declQuad(c+151,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+158,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+160,"io_redirect_valid", false,-1);
    tracep->declArray(c+161,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+164,"xorRes", false,-1, 63,0);
    tracep->declBit(c+166,"slt", false,-1);
    tracep->declQuad(c+167,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+169,"shamt", false,-1, 5,0);
    tracep->declQuad(c+27,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+170,"io_in_valid", false,-1);
    tracep->declQuad(c+139,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+136,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+130,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+132,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+134,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+171,"io_instrValid", false,-1);
    tracep->declQuad(c+155,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+172,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+174,"io_redirect_valid", false,-1);
    tracep->declBit(c+175,"io_wenFix", false,-1);
    tracep->declQuad(c+397,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+399,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+403,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+29,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+31,"mcause", false,-1, 63,0);
    tracep->declQuad(c+33,"mepc", false,-1, 63,0);
    tracep->declQuad(c+35,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+37,"satp", false,-1, 63,0);
    tracep->declBus(c+39,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+176,"csri", false,-1, 63,0);
    tracep->declBit(c+178,"isIllegalAccess", false,-1);
    tracep->declBit(c+179,"resetSatp", false,-1);
    tracep->declQuad(c+40,"c", false,-1, 63,0);
    tracep->declBit(c+180,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+42,"c_1", false,-1, 63,0);
    tracep->declQuad(c+44,"c_2", false,-1, 63,0);
    tracep->declQuad(c+46,"c_3", false,-1, 63,0);
    tracep->declQuad(c+48,"c_4", false,-1, 63,0);
    tracep->declQuad(c+50,"c_5", false,-1, 63,0);
    tracep->declQuad(c+52,"c_6", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+181,"io_in_valid", false,-1);
    tracep->declQuad(c+139,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+143,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+136,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+141,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+325,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+182,"io_out_valid", false,-1);
    tracep->declQuad(c+327,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+183,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+184,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+181,"io_in_valid", false,-1);
    tracep->declQuad(c+185,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+136,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+141,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+325,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+182,"io_out_valid", false,-1);
    tracep->declQuad(c+327,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+183,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+184,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+54,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+187,"isStore", false,-1);
    tracep->declBit(c+188,"partialLoad", false,-1);
    tracep->declBus(c+56,"state", false,-1, 1,0);
    tracep->declBus(c+189,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+85,"wValid", false,-1);
    tracep->declQuad(c+57,"c", false,-1, 63,0);
    tracep->declQuad(c+59,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+61,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+139,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+136,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+153,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+190,"isDivSign", false,-1);
    tracep->declQuad(c+191,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+193,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+195,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+197,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+201,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+204,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+207,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+123,"io_in_0_valid", false,-1);
    tracep->declQuad(c+106,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+110,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+111,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+112,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+113,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+114,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+115,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+117,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+119,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+145,"io_out_ready", false,-1);
    tracep->declBit(c+63,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+212,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+129,"io_forward_valid", false,-1);
    tracep->declBit(c+137,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+138,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+329,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+135,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+128,"io_flush", false,-1);
    tracep->declBit(c+125,"io_in_0_ready", false,-1);
    tracep->declBit(c+214,"io_out_valid", false,-1);
    tracep->declQuad(c+106,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+110,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+113,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+114,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+117,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+118,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+409,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+411,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+119,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+335,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+337,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+339,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+341,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+343,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+345,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+347,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+349,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+351,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+353,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+355,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+357,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+359,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+361,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+363,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+365,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+367,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+369,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+371,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+373,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+375,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+377,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+379,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+215,"forwardRfWen", false,-1);
    tracep->declBit(c+216,"dontForward", false,-1);
    tracep->declBit(c+217,"srcADependEX", false,-1);
    tracep->declBit(c+218,"srcBDependEX", false,-1);
    tracep->declBit(c+219,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+220,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+221,"srcAForward", false,-1);
    tracep->declBit(c+222,"srcBForward", false,-1);
    tracep->declBus(c+64,"busy", false,-1, 31,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+413,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R0_en", false,-1);
    tracep->declBit(c+331,"R0_clk", false,-1);
    tracep->declBus(c+415,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R1_en", false,-1);
    tracep->declBit(c+331,"R1_clk", false,-1);
    tracep->declBus(c+416,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R2_en", false,-1);
    tracep->declBit(c+331,"R2_clk", false,-1);
    tracep->declBus(c+417,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R3_en", false,-1);
    tracep->declBit(c+331,"R3_clk", false,-1);
    tracep->declBus(c+418,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R4_en", false,-1);
    tracep->declBit(c+331,"R4_clk", false,-1);
    tracep->declBus(c+419,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R5_en", false,-1);
    tracep->declBit(c+331,"R5_clk", false,-1);
    tracep->declBus(c+420,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R6_en", false,-1);
    tracep->declBit(c+331,"R6_clk", false,-1);
    tracep->declBus(c+421,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R7_en", false,-1);
    tracep->declBit(c+331,"R7_clk", false,-1);
    tracep->declBus(c+422,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R8_en", false,-1);
    tracep->declBit(c+331,"R8_clk", false,-1);
    tracep->declBus(c+423,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R9_en", false,-1);
    tracep->declBit(c+331,"R9_clk", false,-1);
    tracep->declBus(c+424,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R10_en", false,-1);
    tracep->declBit(c+331,"R10_clk", false,-1);
    tracep->declBus(c+425,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R11_en", false,-1);
    tracep->declBit(c+331,"R11_clk", false,-1);
    tracep->declBus(c+426,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R12_en", false,-1);
    tracep->declBit(c+331,"R12_clk", false,-1);
    tracep->declBus(c+427,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R13_en", false,-1);
    tracep->declBit(c+331,"R13_clk", false,-1);
    tracep->declBus(c+428,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R14_en", false,-1);
    tracep->declBit(c+331,"R14_clk", false,-1);
    tracep->declBus(c+429,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R15_en", false,-1);
    tracep->declBit(c+331,"R15_clk", false,-1);
    tracep->declBus(c+430,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R16_en", false,-1);
    tracep->declBit(c+331,"R16_clk", false,-1);
    tracep->declBus(c+431,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R17_en", false,-1);
    tracep->declBit(c+331,"R17_clk", false,-1);
    tracep->declBus(c+432,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R18_en", false,-1);
    tracep->declBit(c+331,"R18_clk", false,-1);
    tracep->declBus(c+433,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R19_en", false,-1);
    tracep->declBit(c+331,"R19_clk", false,-1);
    tracep->declBus(c+434,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R20_en", false,-1);
    tracep->declBit(c+331,"R20_clk", false,-1);
    tracep->declBus(c+435,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R21_en", false,-1);
    tracep->declBit(c+331,"R21_clk", false,-1);
    tracep->declBus(c+436,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R22_en", false,-1);
    tracep->declBit(c+331,"R22_clk", false,-1);
    tracep->declBus(c+437,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R23_en", false,-1);
    tracep->declBit(c+331,"R23_clk", false,-1);
    tracep->declBus(c+438,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R24_en", false,-1);
    tracep->declBit(c+331,"R24_clk", false,-1);
    tracep->declBus(c+439,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R25_en", false,-1);
    tracep->declBit(c+331,"R25_clk", false,-1);
    tracep->declBus(c+440,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R26_en", false,-1);
    tracep->declBit(c+331,"R26_clk", false,-1);
    tracep->declBus(c+441,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R27_en", false,-1);
    tracep->declBit(c+331,"R27_clk", false,-1);
    tracep->declBus(c+442,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R28_en", false,-1);
    tracep->declBit(c+331,"R28_clk", false,-1);
    tracep->declBus(c+443,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R29_en", false,-1);
    tracep->declBit(c+331,"R29_clk", false,-1);
    tracep->declBus(c+444,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R30_en", false,-1);
    tracep->declBit(c+331,"R30_clk", false,-1);
    tracep->declBus(c+445,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R31_en", false,-1);
    tracep->declBit(c+331,"R31_clk", false,-1);
    tracep->declBus(c+115,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R32_en", false,-1);
    tracep->declBit(c+331,"R32_clk", false,-1);
    tracep->declBus(c+116,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+414,"R33_en", false,-1);
    tracep->declBit(c+331,"R33_clk", false,-1);
    tracep->declBus(c+12,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+63,"W0_en", false,-1);
    tracep->declBit(c+331,"W0_clk", false,-1);
    tracep->declQuad(c+212,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+223,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+353,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+355,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+357,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+359,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+361,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+363,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+365,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+367,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+369,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+371,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+335,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+373,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+375,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+377,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+379,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+381,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+383,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+385,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+387,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+389,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+391,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+337,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+393,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+395,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+339,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+341,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+343,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+345,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+347,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+349,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+351,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+225,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+227,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+229+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+4,"io_in_valid", false,-1);
    tracep->declQuad(c+5,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+9,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+10,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+12,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+13,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+15,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+17,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+63,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+212,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+126,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+128,"io_redirect_valid", false,-1);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+293,"io_out_0_ready", false,-1);
    tracep->declBit(c+414,"io_out_1_ready", false,-1);
    tracep->declQuad(c+126,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+128,"io_redirect_valid", false,-1);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+294,"io_out_0_valid", false,-1);
    tracep->declQuad(c+295,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+299,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+300,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+301,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+302,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+303,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+304,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+305,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+307,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+308,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+446,"io_out_1_valid", false,-1);
    tracep->declQuad(c+447,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+447,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+446,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+449,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+450,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+447,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+310,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+294,"valid", false,-1);
    tracep->declQuad(c+295,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+311,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+67,"c", false,-1, 63,0);
    tracep->declQuad(c+69,"c_1", false,-1, 63,0);
    tracep->declQuad(c+71,"c_2", false,-1, 63,0);
    tracep->declQuad(c+73,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+294,"io_in_0_valid", false,-1);
    tracep->declQuad(c+295,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+311,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+293,"io_out_0_ready", false,-1);
    tracep->declBit(c+414,"io_out_1_ready", false,-1);
    tracep->declBit(c+99,"io_in_0_ready", false,-1);
    tracep->declBit(c+294,"io_out_0_valid", false,-1);
    tracep->declQuad(c+295,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+299,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+300,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+301,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+302,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+303,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+304,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+305,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+307,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+308,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+446,"io_out_1_valid", false,-1);
    tracep->declQuad(c+447,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+447,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+446,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+449,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+450,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+446,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+413,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+447,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+294,"io_in_valid", false,-1);
    tracep->declQuad(c+295,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+293,"io_out_ready", false,-1);
    tracep->declBit(c+99,"io_in_ready", false,-1);
    tracep->declBit(c+294,"io_out_valid", false,-1);
    tracep->declQuad(c+295,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+299,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+300,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+301,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+302,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+303,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+304,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+305,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+306,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+307,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+308,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+313,"io_isWFI", false,-1);
    tracep->declBus(c+314,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+315,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+316,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+446,"io_in_valid", false,-1);
    tracep->declQuad(c+447,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+447,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+414,"io_out_ready", false,-1);
    tracep->declBit(c+414,"io_in_ready", false,-1);
    tracep->declBit(c+446,"io_out_valid", false,-1);
    tracep->declQuad(c+447,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+447,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+446,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+446,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+446,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+449,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+450,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+413,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+413,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+446,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+413,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+447,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+446,"io_isWFI", false,-1);
    tracep->declBus(c+451,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+452,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+450,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+331,"clock", false,-1);
    tracep->declBit(c+332,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+99,"io_out_ready", false,-1);
    tracep->declQuad(c+126,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+128,"io_redirect_valid", false,-1);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+317,"io_out_valid", false,-1);
    tracep->declQuad(c+323,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+310,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+318,"pc", false,-1, 63,0);
    tracep->declQuad(c+320,"snpc", false,-1, 63,0);
    tracep->declQuad(c+75,"c", false,-1, 63,0);
    tracep->declQuad(c+77,"c_1", false,-1, 63,0);
    tracep->declQuad(c+79,"c_2", false,-1, 63,0);
    tracep->declQuad(c+81,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declQuad(c+83,"npc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
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
    bufp->fullBit(oldp+1,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+2,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullBit(oldp+4,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+5,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+7,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+9,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+10,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+11,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+12,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+13,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+15,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+23,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_1),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_2),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_3),64);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_4),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_5),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_6),64);
    bufp->fullQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+63,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc),64);
    bufp->fullBit(oldp+85,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+86,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+87,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+89,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+90,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+91,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+92,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+93,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+94,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+96,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+98,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+99,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+100,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+101,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+103,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+105,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+106,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+108,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullBit(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+111,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+113,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+114,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+115,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+118,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+124,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+125,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullQData(oldp+126,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+128,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+130,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullBit(oldp+134,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+137,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+147,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+149,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+150,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+153,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+166,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+175,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+176,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+182,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullBit(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullQData(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+189,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+197,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+293,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+294,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullBit(oldp+299,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+300,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+301,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+303,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+304,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+305,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+306,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+307,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+308,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+310,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullQData(oldp+311,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+313,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+315,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+317,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+320,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+322,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+323,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+325,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+327,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+329,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+331,(vlSelf->clock));
    bufp->fullBit(oldp+332,(vlSelf->reset));
    bufp->fullQData(oldp+333,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+335,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+337,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+339,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+341,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+343,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+345,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+347,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+349,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+351,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+353,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+355,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+357,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+359,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+361,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+363,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+365,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+367,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+369,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+371,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+373,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+375,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+377,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+379,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+381,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+383,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+385,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+387,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+389,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+391,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+393,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+395,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+397,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+399,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+401,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+403,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+405,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+407,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+408,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+409,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+411,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+413,(0U),5);
    bufp->fullBit(oldp+414,(1U));
    bufp->fullCData(oldp+415,(0xaU),5);
    bufp->fullCData(oldp+416,(0xbU),5);
    bufp->fullCData(oldp+417,(0xcU),5);
    bufp->fullCData(oldp+418,(0xdU),5);
    bufp->fullCData(oldp+419,(0xeU),5);
    bufp->fullCData(oldp+420,(0xfU),5);
    bufp->fullCData(oldp+421,(0x10U),5);
    bufp->fullCData(oldp+422,(0x11U),5);
    bufp->fullCData(oldp+423,(0x12U),5);
    bufp->fullCData(oldp+424,(0x13U),5);
    bufp->fullCData(oldp+425,(1U),5);
    bufp->fullCData(oldp+426,(0x14U),5);
    bufp->fullCData(oldp+427,(0x15U),5);
    bufp->fullCData(oldp+428,(0x16U),5);
    bufp->fullCData(oldp+429,(0x17U),5);
    bufp->fullCData(oldp+430,(0x18U),5);
    bufp->fullCData(oldp+431,(0x19U),5);
    bufp->fullCData(oldp+432,(0x1aU),5);
    bufp->fullCData(oldp+433,(0x1bU),5);
    bufp->fullCData(oldp+434,(0x1cU),5);
    bufp->fullCData(oldp+435,(0x1dU),5);
    bufp->fullCData(oldp+436,(2U),5);
    bufp->fullCData(oldp+437,(0x1eU),5);
    bufp->fullCData(oldp+438,(0x1fU),5);
    bufp->fullCData(oldp+439,(3U),5);
    bufp->fullCData(oldp+440,(4U),5);
    bufp->fullCData(oldp+441,(5U),5);
    bufp->fullCData(oldp+442,(6U),5);
    bufp->fullCData(oldp+443,(7U),5);
    bufp->fullCData(oldp+444,(8U),5);
    bufp->fullCData(oldp+445,(9U),5);
    bufp->fullBit(oldp+446,(0U));
    bufp->fullQData(oldp+447,(0ULL),64);
    bufp->fullCData(oldp+449,(3U),3);
    bufp->fullCData(oldp+450,(0U),7);
    bufp->fullCData(oldp+451,(0U),3);
    bufp->fullCData(oldp+452,(3U),2);
}
