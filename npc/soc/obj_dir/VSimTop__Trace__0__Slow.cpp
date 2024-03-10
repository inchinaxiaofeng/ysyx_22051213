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
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+345,"io_commit", false,-1);
    tracep->declQuad(c+346,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+345,"io_commit", false,-1);
    tracep->declQuad(c+346,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+101,"io_aw_valid", false,-1);
    tracep->declBus(c+102,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_w_valid", false,-1);
    tracep->declQuad(c+103,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_b_ready", false,-1);
    tracep->declBit(c+106,"io_ar_valid", false,-1);
    tracep->declBus(c+107,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+420,"io_r_ready", false,-1);
    tracep->declBit(c+108,"io_aw_ready", false,-1);
    tracep->declBit(c+108,"io_w_ready", false,-1);
    tracep->declBit(c+109,"io_b_valid", false,-1);
    tracep->declBit(c+110,"io_ar_ready", false,-1);
    tracep->declBit(c+111,"io_r_valid", false,-1);
    tracep->declQuad(c+421,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+111,"state_load", false,-1);
    tracep->declBit(c+109,"state_store", false,-1);
    tracep->declQuad(c+5,"c", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+111,"iRen", false,-1, 0,0);
    tracep->declBus(c+109,"iWen", false,-1, 0,0);
    tracep->declBus(c+107,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+102,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+105,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+103,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+421,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+112,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+114,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+103,"writeData", false,-1, 63,0);
    tracep->declBus(c+116,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+117,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+118,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+119,"InstFetch_r_ready", false,-1);
    tracep->declBit(c+101,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+102,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+103,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"LoadStore_b_ready", false,-1);
    tracep->declBit(c+120,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+102,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"LoadStore_r_ready", false,-1);
    tracep->declBit(c+108,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+108,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+109,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+110,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+111,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+421,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+110,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+111,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+421,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+108,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+108,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+109,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+110,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+111,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+421,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+101,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+102,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+103,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"Arbiter_b_ready", false,-1);
    tracep->declBit(c+106,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+107,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+420,"Arbiter_r_ready", false,-1);
    tracep->declBus(c+121,"state", false,-1, 1,0);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+110,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+108,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+108,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+117,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+118,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+119,"io_imem_r_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+103,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+350,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+10,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+11,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+122,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+125,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+127,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+131,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+132,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+133,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+134,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+135,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+136,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+137,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+138,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+139,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+140,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+142,"ringBufferHead", false,-1);
    tracep->declBit(c+13,"ringBufferTail", false,-1);
    tracep->declQuad(c+14,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+143,"io_in_0_valid", false,-1);
    tracep->declQuad(c+125,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+131,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+132,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+133,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+134,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+135,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+136,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+137,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+138,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+139,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+140,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+423,"io_in_1_valid", false,-1);
    tracep->declBus(c+144,"io_flush", false,-1, 1,0);
    tracep->declBit(c+108,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+108,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+145,"io_in_0_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+103,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+122,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_redirect_valid", false,-1);
    tracep->declQuad(c+350,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+10,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+11,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+122,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+146,"valid", false,-1);
    tracep->declQuad(c+147,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+149,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+151,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+153,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+154,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+155,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+156,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+157,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+158,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+162,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+10,"valid_1", false,-1);
    tracep->declQuad(c+16,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+18,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+11,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+122,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+20,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+21,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+22,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+23,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+24,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+26,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+28,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+30,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+32,"c", false,-1, 63,0);
    tracep->declQuad(c+34,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+146,"io_in_valid", false,-1);
    tracep->declQuad(c+147,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+149,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+151,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+153,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+154,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+155,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+156,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+157,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+158,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+162,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+124,"io_flush", false,-1);
    tracep->declBit(c+108,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+108,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+164,"io_in_ready", false,-1);
    tracep->declBit(c+165,"io_out_valid", false,-1);
    tracep->declQuad(c+147,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+149,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+151,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+166,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+168,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+154,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+169,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+157,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+170,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+424,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+172,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+174,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+101,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+103,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+146,"io_forward_valid", false,-1);
    tracep->declBit(c+156,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+157,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+426,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+154,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+36,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+176,"io_in_valid", false,-1);
    tracep->declQuad(c+158,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+155,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+147,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+149,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+162,"io_offset", false,-1, 63,0);
    tracep->declBit(c+176,"io_out_valid", false,-1);
    tracep->declQuad(c+170,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+177,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+179,"io_redirect_valid", false,-1);
    tracep->declArray(c+180,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+183,"xorRes", false,-1, 63,0);
    tracep->declBit(c+185,"slt", false,-1);
    tracep->declQuad(c+38,"c", false,-1, 63,0);
    tracep->declQuad(c+186,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+188,"shamt", false,-1, 5,0);
    tracep->declQuad(c+189,"target", false,-1, 63,0);
    tracep->declQuad(c+40,"c_1", false,-1, 63,0);
    tracep->declQuad(c+42,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+191,"io_in_valid", false,-1);
    tracep->declQuad(c+158,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+155,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+147,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+149,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+153,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+192,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+193,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+194,"io_instrValid", false,-1);
    tracep->declQuad(c+174,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+195,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+197,"io_redirect_valid", false,-1);
    tracep->declBit(c+198,"io_wenFix", false,-1);
    tracep->declQuad(c+412,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+418,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+44,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+46,"mcause", false,-1, 63,0);
    tracep->declQuad(c+48,"mepc", false,-1, 63,0);
    tracep->declQuad(c+50,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+52,"satp", false,-1, 63,0);
    tracep->declBus(c+54,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+199,"csri", false,-1, 63,0);
    tracep->declBit(c+201,"isIllegalAccess", false,-1);
    tracep->declBit(c+202,"resetSatp", false,-1);
    tracep->declBit(c+203,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+55,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+204,"io_in_valid", false,-1);
    tracep->declQuad(c+158,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+162,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+155,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+160,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+108,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+205,"io_out_valid", false,-1);
    tracep->declQuad(c+424,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+101,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+103,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+192,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+193,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+57,"c", false,-1, 63,0);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+204,"io_in_valid", false,-1);
    tracep->declQuad(c+206,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+155,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+160,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+108,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+109,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+59,"io_in_ready", false,-1);
    tracep->declBit(c+205,"io_out_valid", false,-1);
    tracep->declQuad(c+424,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+101,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+101,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+103,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+105,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+102,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+192,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+193,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+60,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+208,"isStore", false,-1);
    tracep->declBit(c+209,"partialLoad", false,-1);
    tracep->declBus(c+62,"state_load", false,-1, 1,0);
    tracep->declBit(c+4,"state_store", false,-1);
    tracep->declQuad(c+63,"c", false,-1, 63,0);
    tracep->declQuad(c+65,"c_1", false,-1, 63,0);
    tracep->declQuad(c+67,"c_2", false,-1, 63,0);
    tracep->declBus(c+210,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+101,"wValid", false,-1);
    tracep->declBit(c+120,"rValid", false,-1);
    tracep->declQuad(c+69,"c_3", false,-1, 63,0);
    tracep->declQuad(c+71,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+73,"c_4", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+158,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+160,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+155,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+172,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+211,"isDivSign", false,-1);
    tracep->declQuad(c+212,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+214,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+216,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+218,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+222,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+225,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+228,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+143,"io_in_0_valid", false,-1);
    tracep->declQuad(c+125,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+131,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+132,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+133,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+134,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+135,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+136,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+137,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+138,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+139,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+140,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+164,"io_out_ready", false,-1);
    tracep->declBit(c+75,"io_wb_rfWen", false,-1);
    tracep->declBus(c+23,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+233,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+146,"io_forward_valid", false,-1);
    tracep->declBit(c+156,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+157,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+426,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+154,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+124,"io_flush", false,-1);
    tracep->declBit(c+145,"io_in_0_ready", false,-1);
    tracep->declBit(c+235,"io_out_valid", false,-1);
    tracep->declQuad(c+125,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+127,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+131,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+134,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+135,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+138,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+139,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+428,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+430,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+140,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+236,"forwardRfWen", false,-1);
    tracep->declBit(c+237,"dontForward", false,-1);
    tracep->declBit(c+238,"srcADependEX", false,-1);
    tracep->declBit(c+239,"srcBDependEX", false,-1);
    tracep->declBit(c+240,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+241,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+242,"srcAForward", false,-1);
    tracep->declBit(c+243,"srcBForward", false,-1);
    tracep->declBus(c+76,"busy", false,-1, 31,0);
    tracep->declQuad(c+77,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+136,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R0_en", false,-1);
    tracep->declBit(c+343,"R0_clk", false,-1);
    tracep->declBus(c+433,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R1_en", false,-1);
    tracep->declBit(c+343,"R1_clk", false,-1);
    tracep->declBus(c+434,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R2_en", false,-1);
    tracep->declBit(c+343,"R2_clk", false,-1);
    tracep->declBus(c+435,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R3_en", false,-1);
    tracep->declBit(c+343,"R3_clk", false,-1);
    tracep->declBus(c+436,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R4_en", false,-1);
    tracep->declBit(c+343,"R4_clk", false,-1);
    tracep->declBus(c+437,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R5_en", false,-1);
    tracep->declBit(c+343,"R5_clk", false,-1);
    tracep->declBus(c+438,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R6_en", false,-1);
    tracep->declBit(c+343,"R6_clk", false,-1);
    tracep->declBus(c+439,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R7_en", false,-1);
    tracep->declBit(c+343,"R7_clk", false,-1);
    tracep->declBus(c+440,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R8_en", false,-1);
    tracep->declBit(c+343,"R8_clk", false,-1);
    tracep->declBus(c+441,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R9_en", false,-1);
    tracep->declBit(c+343,"R9_clk", false,-1);
    tracep->declBus(c+442,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R10_en", false,-1);
    tracep->declBit(c+343,"R10_clk", false,-1);
    tracep->declBus(c+443,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R11_en", false,-1);
    tracep->declBit(c+343,"R11_clk", false,-1);
    tracep->declBus(c+444,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R12_en", false,-1);
    tracep->declBit(c+343,"R12_clk", false,-1);
    tracep->declBus(c+445,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R13_en", false,-1);
    tracep->declBit(c+343,"R13_clk", false,-1);
    tracep->declBus(c+446,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R14_en", false,-1);
    tracep->declBit(c+343,"R14_clk", false,-1);
    tracep->declBus(c+447,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R15_en", false,-1);
    tracep->declBit(c+343,"R15_clk", false,-1);
    tracep->declBus(c+448,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R16_en", false,-1);
    tracep->declBit(c+343,"R16_clk", false,-1);
    tracep->declBus(c+449,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R17_en", false,-1);
    tracep->declBit(c+343,"R17_clk", false,-1);
    tracep->declBus(c+450,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R18_en", false,-1);
    tracep->declBit(c+343,"R18_clk", false,-1);
    tracep->declBus(c+451,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R19_en", false,-1);
    tracep->declBit(c+343,"R19_clk", false,-1);
    tracep->declBus(c+452,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R20_en", false,-1);
    tracep->declBit(c+343,"R20_clk", false,-1);
    tracep->declBus(c+453,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R21_en", false,-1);
    tracep->declBit(c+343,"R21_clk", false,-1);
    tracep->declBus(c+454,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R22_en", false,-1);
    tracep->declBit(c+343,"R22_clk", false,-1);
    tracep->declBus(c+455,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R23_en", false,-1);
    tracep->declBit(c+343,"R23_clk", false,-1);
    tracep->declBus(c+456,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R24_en", false,-1);
    tracep->declBit(c+343,"R24_clk", false,-1);
    tracep->declBus(c+457,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R25_en", false,-1);
    tracep->declBit(c+343,"R25_clk", false,-1);
    tracep->declBus(c+458,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R26_en", false,-1);
    tracep->declBit(c+343,"R26_clk", false,-1);
    tracep->declBus(c+459,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R27_en", false,-1);
    tracep->declBit(c+343,"R27_clk", false,-1);
    tracep->declBus(c+460,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R28_en", false,-1);
    tracep->declBit(c+343,"R28_clk", false,-1);
    tracep->declBus(c+461,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R29_en", false,-1);
    tracep->declBit(c+343,"R29_clk", false,-1);
    tracep->declBus(c+462,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R30_en", false,-1);
    tracep->declBit(c+343,"R30_clk", false,-1);
    tracep->declBus(c+463,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R31_en", false,-1);
    tracep->declBit(c+343,"R31_clk", false,-1);
    tracep->declBus(c+464,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R32_en", false,-1);
    tracep->declBit(c+343,"R32_clk", false,-1);
    tracep->declBus(c+136,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R33_en", false,-1);
    tracep->declBit(c+343,"R33_clk", false,-1);
    tracep->declBus(c+137,"R34_addr", false,-1, 4,0);
    tracep->declBit(c+432,"R34_en", false,-1);
    tracep->declBit(c+343,"R34_clk", false,-1);
    tracep->declBus(c+23,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+75,"W0_en", false,-1);
    tracep->declBit(c+343,"W0_clk", false,-1);
    tracep->declQuad(c+233,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+246,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+400,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+404,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+406,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+408,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+410,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R33_data", false,-1, 63,0);
    tracep->declQuad(c+248,"R34_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+250+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+10,"io_in_valid", false,-1);
    tracep->declQuad(c+16,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+11,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+122,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+20,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+21,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+22,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+23,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+24,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+26,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+28,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+30,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+75,"io_wb_rfWen", false,-1);
    tracep->declBus(c+23,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+233,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+122,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_redirect_valid", false,-1);
    tracep->declBit(c+10,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+11,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+122,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+79,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+110,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+314,"io_out_0_ready", false,-1);
    tracep->declQuad(c+122,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_redirect_valid", false,-1);
    tracep->declBit(c+117,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+118,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+119,"io_imem_r_ready", false,-1);
    tracep->declBit(c+315,"io_out_0_valid", false,-1);
    tracep->declQuad(c+316,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+322,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+323,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+324,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+325,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+326,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+327,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+328,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+329,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+330,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+331,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+333,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+315,"valid", false,-1);
    tracep->declQuad(c+316,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+81,"c", false,-1, 63,0);
    tracep->declQuad(c+83,"c_1", false,-1, 63,0);
    tracep->declQuad(c+85,"c_2", false,-1, 63,0);
    tracep->declQuad(c+87,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+315,"io_in_0_valid", false,-1);
    tracep->declQuad(c+316,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+314,"io_out_0_ready", false,-1);
    tracep->declBit(c+117,"io_in_0_ready", false,-1);
    tracep->declBit(c+315,"io_out_0_valid", false,-1);
    tracep->declQuad(c+316,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+322,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+323,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+324,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+325,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+326,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+327,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+328,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+329,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+330,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+331,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+315,"io_in_valid", false,-1);
    tracep->declQuad(c+316,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+314,"io_out_ready", false,-1);
    tracep->declBit(c+117,"io_in_ready", false,-1);
    tracep->declBit(c+315,"io_out_valid", false,-1);
    tracep->declQuad(c+316,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+320,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+322,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+323,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+324,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+325,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+326,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+327,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+328,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+329,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+330,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+331,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+334,"io_isWFI", false,-1);
    tracep->declBus(c+335,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+336,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+337,"decodeList_2", false,-1, 6,0);
    tracep->declQuad(c+89,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declQuad(c+91,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+343,"clock", false,-1);
    tracep->declBit(c+344,"reset", false,-1);
    tracep->declBit(c+110,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+421,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+117,"io_out_ready", false,-1);
    tracep->declQuad(c+122,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+124,"io_redirect_valid", false,-1);
    tracep->declBit(c+117,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+118,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+119,"io_imem_r_ready", false,-1);
    tracep->declBit(c+338,"io_out_valid", false,-1);
    tracep->declQuad(c+421,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+339,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+341,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+333,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+339,"pc", false,-1, 63,0);
    tracep->declQuad(c+341,"snpc", false,-1, 63,0);
    tracep->declQuad(c+93,"c", false,-1, 63,0);
    tracep->declQuad(c+95,"c_1", false,-1, 63,0);
    tracep->declQuad(c+97,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+99,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
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
    bufp->fullBit(oldp+10,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+11,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+13,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+14,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullQData(oldp+16,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+22,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+23,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
    bufp->fullBit(oldp+59,(((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                            & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))));
    bufp->fullQData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load),2);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_4),64);
    bufp->fullBit(oldp+75,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+85,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+87,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+89,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__c),64);
    bufp->fullQData(oldp+91,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder2__DOT__c),64);
    bufp->fullQData(oldp+93,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+95,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+97,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+99,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+101,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+102,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+103,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+105,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+106,(((0U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready))
                              : ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)))));
    bufp->fullIData(oldp+107,(((0U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                ? ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc))
                                : ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)))),32);
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))));
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store));
    bufp->fullBit(oldp+110,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)))));
    bufp->fullBit(oldp+111,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    bufp->fullQData(oldp+112,((QData)((IData)(((0U 
                                                == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                ? ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)))))),64);
    bufp->fullQData(oldp+114,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+116,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+117,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+118,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+119,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1));
    bufp->fullBit(oldp+120,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    bufp->fullCData(oldp+121,(vlSelf->SimTop__DOT__arbiter__DOT__state),2);
    bufp->fullQData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+124,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+127,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+131,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+133,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+137,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+138,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+142,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullBit(oldp+143,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+144,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+145,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+147,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+166,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+168,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+169,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+172,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target),64);
    bufp->fullBit(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+198,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+199,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+203,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+206,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+210,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+218,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+286,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+292,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+294,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+296,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+298,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+306,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+308,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+310,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+312,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+314,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+315,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+322,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+323,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+324,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+325,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+326,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+327,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+328,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+329,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+330,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+331,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+333,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+334,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+335,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+336,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+337,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+338,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+339,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+341,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+343,(vlSelf->clock));
    bufp->fullBit(oldp+344,(vlSelf->reset));
    bufp->fullBit(oldp+345,(vlSelf->io_commit));
    bufp->fullQData(oldp+346,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+398,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+400,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+402,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+404,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+406,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+408,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+410,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+412,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+414,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+416,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+418,(vlSelf->io_csr_regs_3),64);
    bufp->fullBit(oldp+420,(((0U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1))
                              : ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)
                                  : (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))))));
    bufp->fullQData(oldp+421,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+423,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+424,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+426,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullQData(oldp+428,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+430,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullBit(oldp+432,(1U));
    bufp->fullCData(oldp+433,(0U),5);
    bufp->fullCData(oldp+434,(0xaU),5);
    bufp->fullCData(oldp+435,(0xbU),5);
    bufp->fullCData(oldp+436,(0xcU),5);
    bufp->fullCData(oldp+437,(0xdU),5);
    bufp->fullCData(oldp+438,(0xeU),5);
    bufp->fullCData(oldp+439,(0xfU),5);
    bufp->fullCData(oldp+440,(0x10U),5);
    bufp->fullCData(oldp+441,(0x11U),5);
    bufp->fullCData(oldp+442,(0x12U),5);
    bufp->fullCData(oldp+443,(0x13U),5);
    bufp->fullCData(oldp+444,(1U),5);
    bufp->fullCData(oldp+445,(0x14U),5);
    bufp->fullCData(oldp+446,(0x15U),5);
    bufp->fullCData(oldp+447,(0x16U),5);
    bufp->fullCData(oldp+448,(0x17U),5);
    bufp->fullCData(oldp+449,(0x18U),5);
    bufp->fullCData(oldp+450,(0x19U),5);
    bufp->fullCData(oldp+451,(0x1aU),5);
    bufp->fullCData(oldp+452,(0x1bU),5);
    bufp->fullCData(oldp+453,(0x1cU),5);
    bufp->fullCData(oldp+454,(0x1dU),5);
    bufp->fullCData(oldp+455,(2U),5);
    bufp->fullCData(oldp+456,(0x1eU),5);
    bufp->fullCData(oldp+457,(0x1fU),5);
    bufp->fullCData(oldp+458,(3U),5);
    bufp->fullCData(oldp+459,(4U),5);
    bufp->fullCData(oldp+460,(5U),5);
    bufp->fullCData(oldp+461,(6U),5);
    bufp->fullCData(oldp+462,(7U),5);
    bufp->fullCData(oldp+463,(8U),5);
    bufp->fullCData(oldp+464,(9U),5);
}
