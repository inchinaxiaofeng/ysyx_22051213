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
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+339,"io_commit", false,-1);
    tracep->declQuad(c+340,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+339,"io_commit", false,-1);
    tracep->declQuad(c+340,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+95,"io_aw_valid", false,-1);
    tracep->declBus(c+96,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_w_valid", false,-1);
    tracep->declQuad(c+97,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_b_ready", false,-1);
    tracep->declBit(c+100,"io_ar_valid", false,-1);
    tracep->declBus(c+101,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+414,"io_r_ready", false,-1);
    tracep->declBit(c+102,"io_aw_ready", false,-1);
    tracep->declBit(c+102,"io_w_ready", false,-1);
    tracep->declBit(c+103,"io_b_valid", false,-1);
    tracep->declBit(c+104,"io_ar_ready", false,-1);
    tracep->declBit(c+105,"io_r_valid", false,-1);
    tracep->declQuad(c+415,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+105,"state_load", false,-1);
    tracep->declBit(c+103,"state_store", false,-1);
    tracep->declQuad(c+5,"c", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+105,"iRen", false,-1, 0,0);
    tracep->declBus(c+103,"iWen", false,-1, 0,0);
    tracep->declBus(c+101,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+96,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+99,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+97,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+415,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+106,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+108,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+97,"writeData", false,-1, 63,0);
    tracep->declBus(c+110,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+111,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+112,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"InstFetch_r_ready", false,-1);
    tracep->declBit(c+95,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+96,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+97,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"LoadStore_b_ready", false,-1);
    tracep->declBit(c+114,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+96,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"LoadStore_r_ready", false,-1);
    tracep->declBit(c+102,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+102,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+103,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+104,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+105,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+415,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+104,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+105,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+415,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+102,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+102,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+103,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+104,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+105,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+415,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+95,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+96,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+97,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"Arbiter_b_ready", false,-1);
    tracep->declBit(c+100,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+101,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+414,"Arbiter_r_ready", false,-1);
    tracep->declBus(c+115,"state", false,-1, 1,0);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->declQuad(c+10,"c_1", false,-1, 63,0);
    tracep->declQuad(c+12,"c_2", false,-1, 63,0);
    tracep->declQuad(c+14,"c_3", false,-1, 63,0);
    tracep->declQuad(c+16,"c_4", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+104,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+102,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+102,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+103,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+111,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+112,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_imem_r_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+97,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+114,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+344,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+18,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+19,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+116,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+119,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+121,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+123,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+125,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+126,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+127,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+128,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+129,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+130,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+131,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+132,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+133,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+134,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+136,"ringBufferHead", false,-1);
    tracep->declBit(c+21,"ringBufferTail", false,-1);
    tracep->declBit(c+417,"ringBufferAllowin", false,-1);
    tracep->declBus(c+137,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+22,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+138,"io_in_0_valid", false,-1);
    tracep->declQuad(c+119,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+121,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+123,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+125,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+126,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+127,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+128,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+129,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+130,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+131,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+132,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+133,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+134,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+418,"io_in_1_valid", false,-1);
    tracep->declBus(c+139,"io_flush", false,-1, 1,0);
    tracep->declBit(c+102,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+102,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+103,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+140,"io_in_0_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+97,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+114,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declQuad(c+344,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+18,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+19,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+116,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+141,"valid", false,-1);
    tracep->declQuad(c+142,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+144,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+146,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+148,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+149,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+150,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+151,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+152,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+153,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+155,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+157,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+18,"valid_1", false,-1);
    tracep->declQuad(c+24,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+26,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+19,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+116,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+28,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+29,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+30,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+31,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+32,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+34,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+36,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+38,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+40,"c", false,-1, 63,0);
    tracep->declQuad(c+42,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+141,"io_in_valid", false,-1);
    tracep->declQuad(c+142,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+144,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+146,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+148,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+149,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+150,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+151,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+152,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+153,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+155,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+157,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+118,"io_flush", false,-1);
    tracep->declBit(c+102,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+102,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+103,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+159,"io_in_ready", false,-1);
    tracep->declBit(c+160,"io_out_valid", false,-1);
    tracep->declQuad(c+142,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+144,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+146,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+161,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+163,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+149,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+164,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+152,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+165,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+419,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+167,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+169,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+95,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+97,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+114,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+141,"io_forward_valid", false,-1);
    tracep->declBit(c+151,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+152,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+421,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+149,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+44,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+171,"io_in_valid", false,-1);
    tracep->declQuad(c+153,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+155,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+150,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+142,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+144,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+157,"io_offset", false,-1, 63,0);
    tracep->declBit(c+171,"io_out_valid", false,-1);
    tracep->declQuad(c+165,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+172,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+174,"io_redirect_valid", false,-1);
    tracep->declArray(c+175,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+178,"xorRes", false,-1, 63,0);
    tracep->declBit(c+180,"slt", false,-1);
    tracep->declQuad(c+181,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+183,"shamt", false,-1, 5,0);
    tracep->declQuad(c+46,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+184,"io_in_valid", false,-1);
    tracep->declQuad(c+153,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+155,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+150,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+142,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+144,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+148,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+185,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+186,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+187,"io_instrValid", false,-1);
    tracep->declQuad(c+169,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+188,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+190,"io_redirect_valid", false,-1);
    tracep->declBit(c+191,"io_wenFix", false,-1);
    tracep->declQuad(c+406,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+48,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+50,"mcause", false,-1, 63,0);
    tracep->declQuad(c+52,"mepc", false,-1, 63,0);
    tracep->declQuad(c+54,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+56,"satp", false,-1, 63,0);
    tracep->declBus(c+58,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+192,"csri", false,-1, 63,0);
    tracep->declBit(c+194,"isIllegalAccess", false,-1);
    tracep->declBit(c+195,"resetSatp", false,-1);
    tracep->declBit(c+196,"raiseExceptionIntr", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+197,"io_in_valid", false,-1);
    tracep->declQuad(c+153,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+157,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+150,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+155,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+102,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+102,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+103,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+198,"io_out_valid", false,-1);
    tracep->declQuad(c+419,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+95,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+97,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+114,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+185,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+186,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+59,"c", false,-1, 63,0);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+197,"io_in_valid", false,-1);
    tracep->declQuad(c+199,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+150,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+155,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+102,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+102,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+103,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+61,"io_in_ready", false,-1);
    tracep->declBit(c+198,"io_out_valid", false,-1);
    tracep->declQuad(c+419,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+95,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+95,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+97,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+99,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+114,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+185,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+186,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+62,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+201,"isStore", false,-1);
    tracep->declBit(c+202,"partialLoad", false,-1);
    tracep->declBus(c+64,"state_load", false,-1, 1,0);
    tracep->declBit(c+4,"state_store", false,-1);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->declQuad(c+67,"c_1", false,-1, 63,0);
    tracep->declBus(c+203,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+95,"wValid", false,-1);
    tracep->declBit(c+114,"rValid", false,-1);
    tracep->declQuad(c+69,"c_2", false,-1, 63,0);
    tracep->declQuad(c+71,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+73,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+153,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+155,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+150,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+167,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+204,"isDivSign", false,-1);
    tracep->declQuad(c+205,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+207,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+209,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+211,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+215,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+218,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+221,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+138,"io_in_0_valid", false,-1);
    tracep->declQuad(c+119,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+121,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+123,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+125,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+126,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+127,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+128,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+129,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+130,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+131,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+132,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+133,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+134,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+159,"io_out_ready", false,-1);
    tracep->declBit(c+75,"io_wb_rfWen", false,-1);
    tracep->declBus(c+31,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+226,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+141,"io_forward_valid", false,-1);
    tracep->declBit(c+151,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+152,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+421,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+149,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+118,"io_flush", false,-1);
    tracep->declBit(c+140,"io_in_0_ready", false,-1);
    tracep->declBit(c+228,"io_out_valid", false,-1);
    tracep->declQuad(c+119,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+121,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+123,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+125,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+128,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+129,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+132,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+133,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+423,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+425,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+134,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+229,"forwardRfWen", false,-1);
    tracep->declBit(c+230,"dontForward", false,-1);
    tracep->declBit(c+231,"srcADependEX", false,-1);
    tracep->declBit(c+232,"srcBDependEX", false,-1);
    tracep->declBit(c+233,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+234,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+235,"srcAForward", false,-1);
    tracep->declBit(c+236,"srcBForward", false,-1);
    tracep->declBus(c+76,"busy", false,-1, 31,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+427,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R0_en", false,-1);
    tracep->declBit(c+337,"R0_clk", false,-1);
    tracep->declBus(c+429,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R1_en", false,-1);
    tracep->declBit(c+337,"R1_clk", false,-1);
    tracep->declBus(c+430,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R2_en", false,-1);
    tracep->declBit(c+337,"R2_clk", false,-1);
    tracep->declBus(c+431,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R3_en", false,-1);
    tracep->declBit(c+337,"R3_clk", false,-1);
    tracep->declBus(c+432,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R4_en", false,-1);
    tracep->declBit(c+337,"R4_clk", false,-1);
    tracep->declBus(c+433,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R5_en", false,-1);
    tracep->declBit(c+337,"R5_clk", false,-1);
    tracep->declBus(c+434,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R6_en", false,-1);
    tracep->declBit(c+337,"R6_clk", false,-1);
    tracep->declBus(c+435,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R7_en", false,-1);
    tracep->declBit(c+337,"R7_clk", false,-1);
    tracep->declBus(c+436,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R8_en", false,-1);
    tracep->declBit(c+337,"R8_clk", false,-1);
    tracep->declBus(c+437,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R9_en", false,-1);
    tracep->declBit(c+337,"R9_clk", false,-1);
    tracep->declBus(c+438,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R10_en", false,-1);
    tracep->declBit(c+337,"R10_clk", false,-1);
    tracep->declBus(c+439,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R11_en", false,-1);
    tracep->declBit(c+337,"R11_clk", false,-1);
    tracep->declBus(c+440,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R12_en", false,-1);
    tracep->declBit(c+337,"R12_clk", false,-1);
    tracep->declBus(c+441,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R13_en", false,-1);
    tracep->declBit(c+337,"R13_clk", false,-1);
    tracep->declBus(c+442,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R14_en", false,-1);
    tracep->declBit(c+337,"R14_clk", false,-1);
    tracep->declBus(c+443,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R15_en", false,-1);
    tracep->declBit(c+337,"R15_clk", false,-1);
    tracep->declBus(c+444,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R16_en", false,-1);
    tracep->declBit(c+337,"R16_clk", false,-1);
    tracep->declBus(c+445,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R17_en", false,-1);
    tracep->declBit(c+337,"R17_clk", false,-1);
    tracep->declBus(c+446,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R18_en", false,-1);
    tracep->declBit(c+337,"R18_clk", false,-1);
    tracep->declBus(c+447,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R19_en", false,-1);
    tracep->declBit(c+337,"R19_clk", false,-1);
    tracep->declBus(c+448,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R20_en", false,-1);
    tracep->declBit(c+337,"R20_clk", false,-1);
    tracep->declBus(c+449,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R21_en", false,-1);
    tracep->declBit(c+337,"R21_clk", false,-1);
    tracep->declBus(c+450,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R22_en", false,-1);
    tracep->declBit(c+337,"R22_clk", false,-1);
    tracep->declBus(c+451,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R23_en", false,-1);
    tracep->declBit(c+337,"R23_clk", false,-1);
    tracep->declBus(c+452,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R24_en", false,-1);
    tracep->declBit(c+337,"R24_clk", false,-1);
    tracep->declBus(c+453,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R25_en", false,-1);
    tracep->declBit(c+337,"R25_clk", false,-1);
    tracep->declBus(c+454,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R26_en", false,-1);
    tracep->declBit(c+337,"R26_clk", false,-1);
    tracep->declBus(c+455,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R27_en", false,-1);
    tracep->declBit(c+337,"R27_clk", false,-1);
    tracep->declBus(c+456,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R28_en", false,-1);
    tracep->declBit(c+337,"R28_clk", false,-1);
    tracep->declBus(c+457,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R29_en", false,-1);
    tracep->declBit(c+337,"R29_clk", false,-1);
    tracep->declBus(c+458,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R30_en", false,-1);
    tracep->declBit(c+337,"R30_clk", false,-1);
    tracep->declBus(c+459,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R31_en", false,-1);
    tracep->declBit(c+337,"R31_clk", false,-1);
    tracep->declBus(c+130,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R32_en", false,-1);
    tracep->declBit(c+337,"R32_clk", false,-1);
    tracep->declBus(c+131,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+428,"R33_en", false,-1);
    tracep->declBit(c+337,"R33_clk", false,-1);
    tracep->declBus(c+31,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+75,"W0_en", false,-1);
    tracep->declBit(c+337,"W0_clk", false,-1);
    tracep->declQuad(c+226,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+237,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+344,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+400,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+346,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+404,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+348,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+239,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+241,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+243+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+18,"io_in_valid", false,-1);
    tracep->declQuad(c+24,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+19,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+116,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+28,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+29,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+30,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+31,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+32,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+34,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+36,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+38,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+75,"io_wb_rfWen", false,-1);
    tracep->declBus(c+31,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+226,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declBit(c+18,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+19,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+116,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+77,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+104,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+307,"io_out_0_ready", false,-1);
    tracep->declBit(c+428,"io_out_1_ready", false,-1);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declBit(c+111,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+112,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_imem_r_ready", false,-1);
    tracep->declBit(c+308,"io_out_0_valid", false,-1);
    tracep->declQuad(c+309,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+315,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+316,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+317,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+318,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+319,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+320,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+321,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+322,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+323,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+324,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+460,"io_out_1_valid", false,-1);
    tracep->declQuad(c+461,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+460,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+464,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+461,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+326,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+308,"valid", false,-1);
    tracep->declQuad(c+309,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+79,"c", false,-1, 63,0);
    tracep->declQuad(c+81,"c_1", false,-1, 63,0);
    tracep->declQuad(c+83,"c_2", false,-1, 63,0);
    tracep->declQuad(c+85,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+308,"io_in_0_valid", false,-1);
    tracep->declQuad(c+309,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+307,"io_out_0_ready", false,-1);
    tracep->declBit(c+428,"io_out_1_ready", false,-1);
    tracep->declBit(c+111,"io_in_0_ready", false,-1);
    tracep->declBit(c+308,"io_out_0_valid", false,-1);
    tracep->declQuad(c+309,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+315,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+316,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+317,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+318,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+319,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+320,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+321,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+322,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+323,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+324,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+460,"io_out_1_valid", false,-1);
    tracep->declQuad(c+461,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+460,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+464,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+460,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+427,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+461,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+308,"io_in_valid", false,-1);
    tracep->declQuad(c+309,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+307,"io_out_ready", false,-1);
    tracep->declBit(c+111,"io_in_ready", false,-1);
    tracep->declBit(c+308,"io_out_valid", false,-1);
    tracep->declQuad(c+309,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+311,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+315,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+316,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+317,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+318,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+319,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+320,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+321,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+322,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+323,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+324,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+327,"io_isWFI", false,-1);
    tracep->declBus(c+328,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+329,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+330,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+460,"io_in_valid", false,-1);
    tracep->declQuad(c+461,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+461,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+461,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+428,"io_out_ready", false,-1);
    tracep->declBit(c+428,"io_in_ready", false,-1);
    tracep->declBit(c+460,"io_out_valid", false,-1);
    tracep->declQuad(c+461,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+460,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+460,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+460,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+463,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+464,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+427,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+427,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+460,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+427,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+461,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+460,"io_isWFI", false,-1);
    tracep->declBus(c+465,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+466,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+464,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+337,"clock", false,-1);
    tracep->declBit(c+338,"reset", false,-1);
    tracep->declBit(c+104,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+415,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+111,"io_out_ready", false,-1);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declBit(c+111,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+112,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_imem_r_ready", false,-1);
    tracep->declBit(c+331,"io_out_valid", false,-1);
    tracep->declQuad(c+415,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+332,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+334,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+326,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+332,"pc", false,-1, 63,0);
    tracep->declQuad(c+334,"snpc", false,-1, 63,0);
    tracep->declQuad(c+87,"c", false,-1, 63,0);
    tracep->declQuad(c+89,"c_1", false,-1, 63,0);
    tracep->declQuad(c+91,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+93,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"wen", false,-1);
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
    bufp->fullQData(oldp+16,(vlSelf->SimTop__DOT__arbiter__DOT__c_4),64);
    bufp->fullBit(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+21,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
    bufp->fullBit(oldp+61,(((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                            & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))));
    bufp->fullQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load),2);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
    bufp->fullBit(oldp+75,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+76,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+85,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+87,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+89,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+91,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+93,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+95,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+96,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+97,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+99,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+100,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid))
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)))));
    bufp->fullIData(oldp+101,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))
                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)))),32);
    bufp->fullBit(oldp+102,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))));
    bufp->fullBit(oldp+103,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store));
    bufp->fullBit(oldp+104,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)))));
    bufp->fullBit(oldp+105,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    bufp->fullQData(oldp+106,((QData)((IData)(((0U 
                                                != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                ? (
                                                   (1U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))
                                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)))))),64);
    bufp->fullQData(oldp+108,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+110,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+111,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+112,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+113,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1));
    bufp->fullBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    bufp->fullCData(oldp+115,(vlSelf->SimTop__DOT__arbiter__DOT__state),2);
    bufp->fullQData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+118,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+123,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+125,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+126,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+130,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+136,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+137,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+138,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+139,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+140,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+142,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+161,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+163,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+164,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_42)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+167,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+191,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+192,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+203,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+211,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+299,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+303,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+307,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+308,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+309,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+311,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+313,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+315,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+316,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+317,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+319,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+320,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+321,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+322,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+323,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+324,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+326,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+327,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+328,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+329,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+330,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+331,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+334,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+336,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullBit(oldp+337,(vlSelf->clock));
    bufp->fullBit(oldp+338,(vlSelf->reset));
    bufp->fullBit(oldp+339,(vlSelf->io_commit));
    bufp->fullQData(oldp+340,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+342,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+344,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+346,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+398,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+400,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+402,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+404,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+406,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+408,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+410,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+412,(vlSelf->io_csr_regs_3),64);
    bufp->fullBit(oldp+414,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)
                                  : (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)))));
    bufp->fullQData(oldp+415,(vlSelf->SimTop__DOT__TP_SRAM__DOT___mem_oReadData),64);
    bufp->fullBit(oldp+417,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+418,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+419,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+421,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullQData(oldp+423,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+425,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+427,(0U),5);
    bufp->fullBit(oldp+428,(1U));
    bufp->fullCData(oldp+429,(0xaU),5);
    bufp->fullCData(oldp+430,(0xbU),5);
    bufp->fullCData(oldp+431,(0xcU),5);
    bufp->fullCData(oldp+432,(0xdU),5);
    bufp->fullCData(oldp+433,(0xeU),5);
    bufp->fullCData(oldp+434,(0xfU),5);
    bufp->fullCData(oldp+435,(0x10U),5);
    bufp->fullCData(oldp+436,(0x11U),5);
    bufp->fullCData(oldp+437,(0x12U),5);
    bufp->fullCData(oldp+438,(0x13U),5);
    bufp->fullCData(oldp+439,(1U),5);
    bufp->fullCData(oldp+440,(0x14U),5);
    bufp->fullCData(oldp+441,(0x15U),5);
    bufp->fullCData(oldp+442,(0x16U),5);
    bufp->fullCData(oldp+443,(0x17U),5);
    bufp->fullCData(oldp+444,(0x18U),5);
    bufp->fullCData(oldp+445,(0x19U),5);
    bufp->fullCData(oldp+446,(0x1aU),5);
    bufp->fullCData(oldp+447,(0x1bU),5);
    bufp->fullCData(oldp+448,(0x1cU),5);
    bufp->fullCData(oldp+449,(0x1dU),5);
    bufp->fullCData(oldp+450,(2U),5);
    bufp->fullCData(oldp+451,(0x1eU),5);
    bufp->fullCData(oldp+452,(0x1fU),5);
    bufp->fullCData(oldp+453,(3U),5);
    bufp->fullCData(oldp+454,(4U),5);
    bufp->fullCData(oldp+455,(5U),5);
    bufp->fullCData(oldp+456,(6U),5);
    bufp->fullCData(oldp+457,(7U),5);
    bufp->fullCData(oldp+458,(8U),5);
    bufp->fullCData(oldp+459,(9U),5);
    bufp->fullBit(oldp+460,(0U));
    bufp->fullQData(oldp+461,(0ULL),64);
    bufp->fullCData(oldp+463,(3U),3);
    bufp->fullCData(oldp+464,(0U),7);
    bufp->fullCData(oldp+465,(0U),3);
    bufp->fullCData(oldp+466,(3U),2);
}
