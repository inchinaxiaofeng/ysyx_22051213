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
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+369,"io_commit", false,-1);
    tracep->declQuad(c+370,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+412,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+414,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+416,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+418,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+420,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+422,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+424,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+426,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+428,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+430,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+432,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+434,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+369,"io_commit", false,-1);
    tracep->declQuad(c+370,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+412,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+414,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+416,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+418,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+420,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+422,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+424,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+426,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+428,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+430,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+432,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+434,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+113,"io_aw_valid", false,-1);
    tracep->declBus(c+114,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_w_valid", false,-1);
    tracep->declQuad(c+115,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_b_ready", false,-1);
    tracep->declBit(c+118,"io_ar_valid", false,-1);
    tracep->declBus(c+119,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+444,"io_r_ready", false,-1);
    tracep->declBit(c+120,"io_aw_ready", false,-1);
    tracep->declBit(c+120,"io_w_ready", false,-1);
    tracep->declBit(c+121,"io_b_valid", false,-1);
    tracep->declBit(c+122,"io_ar_ready", false,-1);
    tracep->declBit(c+123,"io_r_valid", false,-1);
    tracep->declQuad(c+445,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+123,"state_load", false,-1);
    tracep->declBit(c+121,"state_store", false,-1);
    tracep->declQuad(c+5,"c", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+123,"iRen", false,-1, 0,0);
    tracep->declBus(c+121,"iWen", false,-1, 0,0);
    tracep->declBus(c+119,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+114,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+117,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+115,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+445,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+124,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+126,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+115,"writeData", false,-1, 63,0);
    tracep->declBus(c+128,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+129,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+130,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+131,"InstFetch_r_ready", false,-1);
    tracep->declBit(c+113,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+114,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+115,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"LoadStore_b_ready", false,-1);
    tracep->declBit(c+132,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+114,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"LoadStore_r_ready", false,-1);
    tracep->declBit(c+120,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+120,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+121,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+122,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+123,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+445,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+133,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+134,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+359,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+120,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+120,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+121,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+135,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+136,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+361,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+113,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+114,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+115,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"Arbiter_b_ready", false,-1);
    tracep->declBit(c+118,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+119,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+444,"Arbiter_r_ready", false,-1);
    tracep->declBus(c+137,"state", false,-1, 1,0);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->declQuad(c+10,"c_1", false,-1, 63,0);
    tracep->declQuad(c+12,"c_2", false,-1, 63,0);
    tracep->declQuad(c+14,"c_3", false,-1, 63,0);
    tracep->declQuad(c+16,"c_4", false,-1, 63,0);
    tracep->declQuad(c+18,"c_5", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+133,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+134,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+359,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+120,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+121,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+135,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+136,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+361,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+129,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+130,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+131,"io_imem_r_ready", false,-1);
    tracep->declBit(c+113,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+115,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+132,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+374,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+412,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+414,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+416,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+418,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+420,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+422,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+424,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+426,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+428,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+430,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+432,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+434,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+20,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+21,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+138,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+141,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+143,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+145,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+147,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+148,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+149,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+150,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+151,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+152,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+153,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+154,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+158,"ringBufferHead", false,-1);
    tracep->declBit(c+23,"ringBufferTail", false,-1);
    tracep->declQuad(c+24,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+159,"io_in_0_valid", false,-1);
    tracep->declQuad(c+141,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+143,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+147,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+148,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+149,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+150,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+151,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+152,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+153,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+154,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+447,"io_in_1_valid", false,-1);
    tracep->declBus(c+160,"io_flush", false,-1, 1,0);
    tracep->declBit(c+120,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+121,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+135,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+136,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+361,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+161,"io_in_0_ready", false,-1);
    tracep->declBit(c+113,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+115,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+132,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declQuad(c+138,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_redirect_valid", false,-1);
    tracep->declQuad(c+374,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+412,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+414,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+416,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+418,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+420,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+422,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+424,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+426,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+428,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+430,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+432,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+434,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+20,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+21,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+138,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+162,"valid", false,-1);
    tracep->declQuad(c+163,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+165,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+167,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+169,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+170,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+171,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+172,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+173,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+174,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+176,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+178,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+20,"valid_1", false,-1);
    tracep->declQuad(c+26,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+28,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+21,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+138,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+30,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+31,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+32,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+33,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+34,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+36,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+38,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+40,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+42,"c", false,-1, 63,0);
    tracep->declQuad(c+44,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+162,"io_in_valid", false,-1);
    tracep->declQuad(c+163,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+165,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+167,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+169,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+170,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+171,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+172,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+173,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+174,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+176,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+178,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+140,"io_flush", false,-1);
    tracep->declBit(c+120,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+121,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+135,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+136,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+361,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+180,"io_in_ready", false,-1);
    tracep->declBit(c+181,"io_out_valid", false,-1);
    tracep->declQuad(c+163,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+165,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+167,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+182,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+184,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+170,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+185,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+173,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+186,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+363,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+188,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+190,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+113,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+115,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+132,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+162,"io_forward_valid", false,-1);
    tracep->declBit(c+172,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+173,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+365,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+170,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+46,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+192,"io_in_valid", false,-1);
    tracep->declQuad(c+174,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+176,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+171,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+163,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+165,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+178,"io_offset", false,-1, 63,0);
    tracep->declBit(c+192,"io_out_valid", false,-1);
    tracep->declQuad(c+186,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+193,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+195,"io_redirect_valid", false,-1);
    tracep->declArray(c+196,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+199,"xorRes", false,-1, 63,0);
    tracep->declBit(c+201,"slt", false,-1);
    tracep->declQuad(c+48,"c", false,-1, 63,0);
    tracep->declQuad(c+202,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+204,"shamt", false,-1, 5,0);
    tracep->declQuad(c+205,"target", false,-1, 63,0);
    tracep->declQuad(c+50,"c_1", false,-1, 63,0);
    tracep->declQuad(c+52,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+207,"io_in_valid", false,-1);
    tracep->declQuad(c+174,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+176,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+171,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+163,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+165,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+169,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+208,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+209,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+210,"io_instrValid", false,-1);
    tracep->declQuad(c+190,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+211,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+213,"io_redirect_valid", false,-1);
    tracep->declBit(c+214,"io_wenFix", false,-1);
    tracep->declQuad(c+436,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+438,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+440,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+442,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+54,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+56,"mcause", false,-1, 63,0);
    tracep->declQuad(c+58,"mepc", false,-1, 63,0);
    tracep->declQuad(c+60,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+62,"satp", false,-1, 63,0);
    tracep->declBus(c+64,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+215,"csri", false,-1, 63,0);
    tracep->declBit(c+217,"isIllegalAccess", false,-1);
    tracep->declBit(c+218,"resetSatp", false,-1);
    tracep->declBit(c+219,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+220,"io_in_valid", false,-1);
    tracep->declQuad(c+174,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+178,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+171,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+176,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+120,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+121,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+135,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+136,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+361,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+221,"io_out_valid", false,-1);
    tracep->declQuad(c+363,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+113,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+115,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+132,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+208,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+209,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+67,"c", false,-1, 63,0);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+220,"io_in_valid", false,-1);
    tracep->declQuad(c+222,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+171,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+176,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+120,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+120,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+121,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+135,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+136,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+361,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+69,"io_in_ready", false,-1);
    tracep->declBit(c+221,"io_out_valid", false,-1);
    tracep->declQuad(c+363,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+113,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+113,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+115,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+117,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+4,"io_dmem_b_ready", false,-1);
    tracep->declBit(c+132,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+114,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+7,"io_dmem_r_ready", false,-1);
    tracep->declBit(c+208,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+209,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+70,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+224,"isStore", false,-1);
    tracep->declBit(c+225,"partialLoad", false,-1);
    tracep->declBus(c+72,"state_load", false,-1, 1,0);
    tracep->declBit(c+4,"state_store", false,-1);
    tracep->declQuad(c+73,"c", false,-1, 63,0);
    tracep->declQuad(c+75,"c_1", false,-1, 63,0);
    tracep->declQuad(c+77,"c_2", false,-1, 63,0);
    tracep->declBus(c+226,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+113,"wValid", false,-1);
    tracep->declBit(c+132,"rValid", false,-1);
    tracep->declQuad(c+79,"c_3", false,-1, 63,0);
    tracep->declQuad(c+81,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+83,"c_4", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+174,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+176,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+171,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+188,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+227,"isDivSign", false,-1);
    tracep->declQuad(c+228,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+230,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+232,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+234,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+238,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+241,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+244,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+159,"io_in_0_valid", false,-1);
    tracep->declQuad(c+141,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+143,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+147,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+148,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+149,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+150,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+151,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+152,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+153,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+154,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+156,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+180,"io_out_ready", false,-1);
    tracep->declBit(c+85,"io_wb_rfWen", false,-1);
    tracep->declBus(c+33,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+249,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+162,"io_forward_valid", false,-1);
    tracep->declBit(c+172,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+173,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+365,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+170,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+140,"io_flush", false,-1);
    tracep->declBit(c+161,"io_in_0_ready", false,-1);
    tracep->declBit(c+251,"io_out_valid", false,-1);
    tracep->declQuad(c+141,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+143,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+145,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+147,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+150,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+151,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+154,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+155,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+448,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+450,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+156,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+410,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+412,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+414,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+416,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+418,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+420,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+422,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+424,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+426,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+428,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+430,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+432,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+434,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+252,"forwardRfWen", false,-1);
    tracep->declBit(c+253,"dontForward", false,-1);
    tracep->declBit(c+254,"srcADependEX", false,-1);
    tracep->declBit(c+255,"srcBDependEX", false,-1);
    tracep->declBit(c+256,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+257,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+258,"srcAForward", false,-1);
    tracep->declBit(c+259,"srcBForward", false,-1);
    tracep->declBus(c+86,"busy", false,-1, 31,0);
    tracep->declQuad(c+87,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+152,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R0_en", false,-1);
    tracep->declBit(c+367,"R0_clk", false,-1);
    tracep->declBus(c+453,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R1_en", false,-1);
    tracep->declBit(c+367,"R1_clk", false,-1);
    tracep->declBus(c+454,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R2_en", false,-1);
    tracep->declBit(c+367,"R2_clk", false,-1);
    tracep->declBus(c+455,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R3_en", false,-1);
    tracep->declBit(c+367,"R3_clk", false,-1);
    tracep->declBus(c+456,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R4_en", false,-1);
    tracep->declBit(c+367,"R4_clk", false,-1);
    tracep->declBus(c+457,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R5_en", false,-1);
    tracep->declBit(c+367,"R5_clk", false,-1);
    tracep->declBus(c+458,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R6_en", false,-1);
    tracep->declBit(c+367,"R6_clk", false,-1);
    tracep->declBus(c+459,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R7_en", false,-1);
    tracep->declBit(c+367,"R7_clk", false,-1);
    tracep->declBus(c+460,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R8_en", false,-1);
    tracep->declBit(c+367,"R8_clk", false,-1);
    tracep->declBus(c+461,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R9_en", false,-1);
    tracep->declBit(c+367,"R9_clk", false,-1);
    tracep->declBus(c+462,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R10_en", false,-1);
    tracep->declBit(c+367,"R10_clk", false,-1);
    tracep->declBus(c+463,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R11_en", false,-1);
    tracep->declBit(c+367,"R11_clk", false,-1);
    tracep->declBus(c+464,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R12_en", false,-1);
    tracep->declBit(c+367,"R12_clk", false,-1);
    tracep->declBus(c+465,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R13_en", false,-1);
    tracep->declBit(c+367,"R13_clk", false,-1);
    tracep->declBus(c+466,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R14_en", false,-1);
    tracep->declBit(c+367,"R14_clk", false,-1);
    tracep->declBus(c+467,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R15_en", false,-1);
    tracep->declBit(c+367,"R15_clk", false,-1);
    tracep->declBus(c+468,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R16_en", false,-1);
    tracep->declBit(c+367,"R16_clk", false,-1);
    tracep->declBus(c+469,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R17_en", false,-1);
    tracep->declBit(c+367,"R17_clk", false,-1);
    tracep->declBus(c+470,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R18_en", false,-1);
    tracep->declBit(c+367,"R18_clk", false,-1);
    tracep->declBus(c+471,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R19_en", false,-1);
    tracep->declBit(c+367,"R19_clk", false,-1);
    tracep->declBus(c+472,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R20_en", false,-1);
    tracep->declBit(c+367,"R20_clk", false,-1);
    tracep->declBus(c+473,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R21_en", false,-1);
    tracep->declBit(c+367,"R21_clk", false,-1);
    tracep->declBus(c+474,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R22_en", false,-1);
    tracep->declBit(c+367,"R22_clk", false,-1);
    tracep->declBus(c+475,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R23_en", false,-1);
    tracep->declBit(c+367,"R23_clk", false,-1);
    tracep->declBus(c+476,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R24_en", false,-1);
    tracep->declBit(c+367,"R24_clk", false,-1);
    tracep->declBus(c+477,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R25_en", false,-1);
    tracep->declBit(c+367,"R25_clk", false,-1);
    tracep->declBus(c+478,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R26_en", false,-1);
    tracep->declBit(c+367,"R26_clk", false,-1);
    tracep->declBus(c+479,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R27_en", false,-1);
    tracep->declBit(c+367,"R27_clk", false,-1);
    tracep->declBus(c+480,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R28_en", false,-1);
    tracep->declBit(c+367,"R28_clk", false,-1);
    tracep->declBus(c+481,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R29_en", false,-1);
    tracep->declBit(c+367,"R29_clk", false,-1);
    tracep->declBus(c+482,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R30_en", false,-1);
    tracep->declBit(c+367,"R30_clk", false,-1);
    tracep->declBus(c+483,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R31_en", false,-1);
    tracep->declBit(c+367,"R31_clk", false,-1);
    tracep->declBus(c+484,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R32_en", false,-1);
    tracep->declBit(c+367,"R32_clk", false,-1);
    tracep->declBus(c+152,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R33_en", false,-1);
    tracep->declBit(c+367,"R33_clk", false,-1);
    tracep->declBus(c+153,"R34_addr", false,-1, 4,0);
    tracep->declBit(c+452,"R34_en", false,-1);
    tracep->declBit(c+367,"R34_clk", false,-1);
    tracep->declBus(c+33,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+85,"W0_en", false,-1);
    tracep->declBit(c+367,"W0_clk", false,-1);
    tracep->declQuad(c+249,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+260,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+262,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+400,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+404,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+406,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+408,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+410,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+412,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+414,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+416,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+418,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+420,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+422,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+424,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+426,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+428,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+430,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+432,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+434,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+260,"R33_data", false,-1, 63,0);
    tracep->declQuad(c+264,"R34_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+266+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+20,"io_in_valid", false,-1);
    tracep->declQuad(c+26,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+28,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+21,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+138,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+30,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+31,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+32,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+33,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+34,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+36,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+38,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+40,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+85,"io_wb_rfWen", false,-1);
    tracep->declBus(c+33,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+249,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+138,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_redirect_valid", false,-1);
    tracep->declBit(c+20,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+21,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+138,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+89,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+133,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+134,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+359,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+330,"io_out_0_ready", false,-1);
    tracep->declQuad(c+138,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_redirect_valid", false,-1);
    tracep->declBit(c+129,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+130,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+131,"io_imem_r_ready", false,-1);
    tracep->declBit(c+331,"io_out_0_valid", false,-1);
    tracep->declQuad(c+332,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+338,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+339,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+340,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+341,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+342,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+343,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+344,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+345,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+346,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+347,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+349,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+331,"valid", false,-1);
    tracep->declQuad(c+332,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+91,"c", false,-1, 63,0);
    tracep->declQuad(c+93,"c_1", false,-1, 63,0);
    tracep->declQuad(c+95,"c_2", false,-1, 63,0);
    tracep->declQuad(c+97,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+331,"io_in_0_valid", false,-1);
    tracep->declQuad(c+332,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+330,"io_out_0_ready", false,-1);
    tracep->declBit(c+129,"io_in_0_ready", false,-1);
    tracep->declBit(c+331,"io_out_0_valid", false,-1);
    tracep->declQuad(c+332,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+338,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+339,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+340,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+341,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+342,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+343,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+344,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+345,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+346,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+347,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+331,"io_in_valid", false,-1);
    tracep->declQuad(c+332,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+330,"io_out_ready", false,-1);
    tracep->declBit(c+129,"io_in_ready", false,-1);
    tracep->declBit(c+331,"io_out_valid", false,-1);
    tracep->declQuad(c+332,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+336,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+338,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+339,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+340,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+341,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+342,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+343,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+344,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+345,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+346,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+347,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+350,"io_isWFI", false,-1);
    tracep->declBus(c+351,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+352,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+353,"decodeList_2", false,-1, 6,0);
    tracep->declQuad(c+99,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declQuad(c+101,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+367,"clock", false,-1);
    tracep->declBit(c+368,"reset", false,-1);
    tracep->declBit(c+133,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+134,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+359,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+129,"io_out_ready", false,-1);
    tracep->declQuad(c+138,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+140,"io_redirect_valid", false,-1);
    tracep->declBit(c+129,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+130,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+131,"io_imem_r_ready", false,-1);
    tracep->declBit(c+354,"io_out_valid", false,-1);
    tracep->declQuad(c+359,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+355,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+357,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+349,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+355,"pc", false,-1, 63,0);
    tracep->declQuad(c+357,"snpc", false,-1, 63,0);
    tracep->declQuad(c+103,"c", false,-1, 63,0);
    tracep->declQuad(c+105,"c_1", false,-1, 63,0);
    tracep->declQuad(c+107,"c_2", false,-1, 63,0);
    tracep->declQuad(c+109,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+111,"npc", false,-1, 63,0);
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
    bufp->fullQData(oldp+10,(vlSelf->SimTop__DOT__arbiter__DOT__c_1),64);
    bufp->fullQData(oldp+12,(vlSelf->SimTop__DOT__arbiter__DOT__c_2),64);
    bufp->fullQData(oldp+14,(vlSelf->SimTop__DOT__arbiter__DOT__c_3),64);
    bufp->fullQData(oldp+16,(vlSelf->SimTop__DOT__arbiter__DOT__c_4),64);
    bufp->fullQData(oldp+18,(vlSelf->SimTop__DOT__arbiter__DOT__c_5),64);
    bufp->fullBit(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+23,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+28,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullBit(oldp+30,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+32,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+36,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+38,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+40,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullQData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2),64);
    bufp->fullQData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_store)) 
                            & (0U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))));
    bufp->fullQData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+72,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load),2);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_4),64);
    bufp->fullBit(oldp+85,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+86,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+87,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+89,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+91,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+93,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+95,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+97,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+99,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__c),64);
    bufp->fullQData(oldp+101,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder2__DOT__c),64);
    bufp->fullQData(oldp+103,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+105,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+107,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+109,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+111,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+113,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+114,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+115,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+117,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+118,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid))
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid)
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready)))));
    bufp->fullIData(oldp+119,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))
                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)))),32);
    bufp->fullBit(oldp+120,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store)))));
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_store));
    bufp->fullBit(oldp+122,((1U & (~ (IData)(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load)))));
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__TP_SRAM__DOT__state_load));
    bufp->fullQData(oldp+124,((QData)((IData)(((0U 
                                                != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                ? (
                                                   (1U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))
                                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)))))),64);
    bufp->fullQData(oldp+126,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+128,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+130,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+131,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1));
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rValid));
    bufp->fullBit(oldp+133,(vlSelf->SimTop__DOT__arbiter__DOT___GEN_2));
    bufp->fullBit(oldp+134,(vlSelf->SimTop__DOT__arbiter__DOT___GEN_3));
    bufp->fullBit(oldp+135,(vlSelf->SimTop__DOT__arbiter__DOT___GEN_0));
    bufp->fullBit(oldp+136,(vlSelf->SimTop__DOT__arbiter__DOT___GEN_1));
    bufp->fullCData(oldp+137,(vlSelf->SimTop__DOT__arbiter__DOT__state),2);
    bufp->fullQData(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+140,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+141,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+143,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+145,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+147,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+148,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+149,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+150,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+154,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+156,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+158,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullBit(oldp+159,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+160,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+161,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+173,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+182,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+184,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+185,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+188,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target),64);
    bufp->fullBit(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+213,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+214,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+215,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+226,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+234,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+286,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+288,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+290,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+292,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+294,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+296,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+298,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+306,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+308,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+310,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+312,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+322,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+324,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+326,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+328,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+330,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+331,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+332,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+334,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+336,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+338,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+339,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+340,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+341,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+342,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+343,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+344,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+345,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+346,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+347,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+349,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+350,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+351,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+352,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+353,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+354,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+355,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+357,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullQData(oldp+359,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+361,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+363,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+365,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+367,(vlSelf->clock));
    bufp->fullBit(oldp+368,(vlSelf->reset));
    bufp->fullBit(oldp+369,(vlSelf->io_commit));
    bufp->fullQData(oldp+370,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+398,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+400,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+402,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+404,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+406,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+408,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+410,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+412,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+414,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+416,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+418,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+420,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+422,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+424,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+426,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+428,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+430,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+432,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+434,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+436,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+438,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+440,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+442,(vlSelf->io_csr_regs_3),64);
    bufp->fullBit(oldp+444,(((0U != (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                              ? ((1U == (IData)(vlSelf->SimTop__DOT__arbiter__DOT__state))
                                  ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)
                                  : (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load)))
                              : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN)
                                  ? (1U == (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_load))
                                  : (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_imem_r_ready_T_1)))));
    bufp->fullQData(oldp+445,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+447,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+448,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+450,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullBit(oldp+452,(1U));
    bufp->fullCData(oldp+453,(0U),5);
    bufp->fullCData(oldp+454,(0xaU),5);
    bufp->fullCData(oldp+455,(0xbU),5);
    bufp->fullCData(oldp+456,(0xcU),5);
    bufp->fullCData(oldp+457,(0xdU),5);
    bufp->fullCData(oldp+458,(0xeU),5);
    bufp->fullCData(oldp+459,(0xfU),5);
    bufp->fullCData(oldp+460,(0x10U),5);
    bufp->fullCData(oldp+461,(0x11U),5);
    bufp->fullCData(oldp+462,(0x12U),5);
    bufp->fullCData(oldp+463,(0x13U),5);
    bufp->fullCData(oldp+464,(1U),5);
    bufp->fullCData(oldp+465,(0x14U),5);
    bufp->fullCData(oldp+466,(0x15U),5);
    bufp->fullCData(oldp+467,(0x16U),5);
    bufp->fullCData(oldp+468,(0x17U),5);
    bufp->fullCData(oldp+469,(0x18U),5);
    bufp->fullCData(oldp+470,(0x19U),5);
    bufp->fullCData(oldp+471,(0x1aU),5);
    bufp->fullCData(oldp+472,(0x1bU),5);
    bufp->fullCData(oldp+473,(0x1cU),5);
    bufp->fullCData(oldp+474,(0x1dU),5);
    bufp->fullCData(oldp+475,(2U),5);
    bufp->fullCData(oldp+476,(0x1eU),5);
    bufp->fullCData(oldp+477,(0x1fU),5);
    bufp->fullCData(oldp+478,(3U),5);
    bufp->fullCData(oldp+479,(4U),5);
    bufp->fullCData(oldp+480,(5U),5);
    bufp->fullCData(oldp+481,(6U),5);
    bufp->fullCData(oldp+482,(7U),5);
    bufp->fullCData(oldp+483,(8U),5);
    bufp->fullCData(oldp+484,(9U),5);
}
