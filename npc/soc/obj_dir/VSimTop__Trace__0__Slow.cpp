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
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+343,"io_commit", false,-1);
    tracep->declQuad(c+344,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+343,"io_commit", false,-1);
    tracep->declQuad(c+344,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+1,"io_commit_REG", false,-1);
    tracep->declQuad(c+2,"io_pc_REG", false,-1, 63,0);
    tracep->declQuad(c+4,"c", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+91,"io_aw_valid", false,-1);
    tracep->declBus(c+92,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_w_valid", false,-1);
    tracep->declQuad(c+93,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+96,"io_ar_valid", false,-1);
    tracep->declBus(c+97,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_aw_ready", false,-1);
    tracep->declBit(c+91,"io_w_ready", false,-1);
    tracep->declBit(c+98,"io_b_valid", false,-1);
    tracep->declBit(c+96,"io_ar_ready", false,-1);
    tracep->declBit(c+99,"io_r_valid", false,-1);
    tracep->declQuad(c+418,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+98,"rWriteStatuOK", false,-1);
    tracep->declBit(c+99,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+99,"iRen", false,-1, 0,0);
    tracep->declBus(c+98,"iWen", false,-1, 0,0);
    tracep->declBus(c+97,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+92,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+95,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+93,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+418,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+100,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+102,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+93,"writeData", false,-1, 63,0);
    tracep->declBus(c+104,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+105,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+106,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+92,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+93,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+92,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+91,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+98,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+96,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+99,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+418,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+108,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+109,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+333,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+91,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+91,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+98,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+110,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+111,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+335,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+91,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+92,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+93,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+96,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+97,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+333,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+98,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+335,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+105,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+106,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+93,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+348,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+115,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+117,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+119,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+121,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+122,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+123,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+124,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+125,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+126,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+127,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+128,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+129,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+130,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+132,"ringBufferHead", false,-1);
    tracep->declBit(c+9,"ringBufferTail", false,-1);
    tracep->declBit(c+420,"ringBufferAllowin", false,-1);
    tracep->declBus(c+133,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+10,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+134,"io_in_0_valid", false,-1);
    tracep->declQuad(c+115,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+121,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+122,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+123,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+124,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+125,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+126,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+127,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+128,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+129,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+130,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+421,"io_in_1_valid", false,-1);
    tracep->declBus(c+135,"io_flush", false,-1, 1,0);
    tracep->declBit(c+91,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+98,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+335,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+136,"io_in_0_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+93,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declQuad(c+348,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_difftest_redirect_valid", false,-1);
    tracep->declBit(c+137,"valid", false,-1);
    tracep->declQuad(c+138,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+140,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+142,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+144,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+145,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+146,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+147,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+148,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+149,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+151,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+153,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+6,"valid_1", false,-1);
    tracep->declQuad(c+12,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+112,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
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
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+137,"io_in_valid", false,-1);
    tracep->declQuad(c+138,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+140,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+142,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+144,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+145,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+146,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+147,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+148,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+149,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+151,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+153,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+114,"io_flush", false,-1);
    tracep->declBit(c+91,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+98,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+335,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+155,"io_in_ready", false,-1);
    tracep->declBit(c+156,"io_out_valid", false,-1);
    tracep->declQuad(c+138,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+140,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+142,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+157,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+159,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+145,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+160,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+148,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+161,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+337,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+163,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+165,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+93,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+137,"io_forward_valid", false,-1);
    tracep->declBit(c+147,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+148,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+339,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+145,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+32,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+167,"io_in_valid", false,-1);
    tracep->declQuad(c+149,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+151,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+146,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+138,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+140,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+153,"io_offset", false,-1, 63,0);
    tracep->declBit(c+167,"io_out_valid", false,-1);
    tracep->declQuad(c+161,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+168,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+170,"io_redirect_valid", false,-1);
    tracep->declQuad(c+34,"c", false,-1, 63,0);
    tracep->declArray(c+171,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+174,"xorRes", false,-1, 63,0);
    tracep->declBit(c+176,"slt", false,-1);
    tracep->declQuad(c+177,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+179,"shamt", false,-1, 5,0);
    tracep->declQuad(c+36,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+180,"io_in_valid", false,-1);
    tracep->declQuad(c+149,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+151,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+146,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+138,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+140,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+144,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+181,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+182,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+183,"io_instrValid", false,-1);
    tracep->declQuad(c+165,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+184,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+186,"io_redirect_valid", false,-1);
    tracep->declBit(c+187,"io_wenFix", false,-1);
    tracep->declQuad(c+410,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+412,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+414,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+416,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+38,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+40,"mcause", false,-1, 63,0);
    tracep->declQuad(c+42,"mepc", false,-1, 63,0);
    tracep->declQuad(c+44,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+46,"satp", false,-1, 63,0);
    tracep->declBus(c+48,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+188,"csri", false,-1, 63,0);
    tracep->declBit(c+190,"isIllegalAccess", false,-1);
    tracep->declBit(c+191,"resetSatp", false,-1);
    tracep->declBit(c+192,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+49,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+193,"io_in_valid", false,-1);
    tracep->declQuad(c+149,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+153,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+146,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+151,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+98,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+335,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+194,"io_out_valid", false,-1);
    tracep->declQuad(c+337,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+93,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+181,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+182,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+51,"c", false,-1, 63,0);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+193,"io_in_valid", false,-1);
    tracep->declQuad(c+195,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+146,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+151,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+98,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+110,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+111,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+335,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+194,"io_out_valid", false,-1);
    tracep->declQuad(c+337,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+91,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+91,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+93,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+95,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+107,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+92,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+181,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+182,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+53,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+197,"isStore", false,-1);
    tracep->declBit(c+198,"partialLoad", false,-1);
    tracep->declBus(c+55,"state_read", false,-1, 1,0);
    tracep->declBus(c+56,"state_write", false,-1, 1,0);
    tracep->declQuad(c+57,"c", false,-1, 63,0);
    tracep->declQuad(c+59,"c_1", false,-1, 63,0);
    tracep->declBus(c+199,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+91,"wValid", false,-1);
    tracep->declQuad(c+61,"c_2", false,-1, 63,0);
    tracep->declQuad(c+63,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+65,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+149,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+151,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+146,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+163,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+200,"isDivSign", false,-1);
    tracep->declQuad(c+201,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+203,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+205,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+207,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+211,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+214,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+217,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+134,"io_in_0_valid", false,-1);
    tracep->declQuad(c+115,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+121,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+122,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+123,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+124,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+125,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+126,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+127,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+128,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+129,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+130,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+155,"io_out_ready", false,-1);
    tracep->declBit(c+67,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+222,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+137,"io_forward_valid", false,-1);
    tracep->declBit(c+147,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+148,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+339,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+145,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+114,"io_flush", false,-1);
    tracep->declBit(c+136,"io_in_0_ready", false,-1);
    tracep->declBit(c+224,"io_out_valid", false,-1);
    tracep->declQuad(c+115,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+119,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+121,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+124,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+125,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+128,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+129,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+422,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+424,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+130,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+404,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+406,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+408,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+225,"forwardRfWen", false,-1);
    tracep->declBit(c+226,"dontForward", false,-1);
    tracep->declBit(c+227,"srcADependEX", false,-1);
    tracep->declBit(c+228,"srcBDependEX", false,-1);
    tracep->declBit(c+229,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+230,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+231,"srcAForward", false,-1);
    tracep->declBit(c+232,"srcBForward", false,-1);
    tracep->declBus(c+68,"busy", false,-1, 31,0);
    tracep->declQuad(c+69,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+426,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R0_en", false,-1);
    tracep->declBit(c+341,"R0_clk", false,-1);
    tracep->declBus(c+428,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R1_en", false,-1);
    tracep->declBit(c+341,"R1_clk", false,-1);
    tracep->declBus(c+429,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R2_en", false,-1);
    tracep->declBit(c+341,"R2_clk", false,-1);
    tracep->declBus(c+430,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R3_en", false,-1);
    tracep->declBit(c+341,"R3_clk", false,-1);
    tracep->declBus(c+431,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R4_en", false,-1);
    tracep->declBit(c+341,"R4_clk", false,-1);
    tracep->declBus(c+432,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R5_en", false,-1);
    tracep->declBit(c+341,"R5_clk", false,-1);
    tracep->declBus(c+433,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R6_en", false,-1);
    tracep->declBit(c+341,"R6_clk", false,-1);
    tracep->declBus(c+434,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R7_en", false,-1);
    tracep->declBit(c+341,"R7_clk", false,-1);
    tracep->declBus(c+435,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R8_en", false,-1);
    tracep->declBit(c+341,"R8_clk", false,-1);
    tracep->declBus(c+436,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R9_en", false,-1);
    tracep->declBit(c+341,"R9_clk", false,-1);
    tracep->declBus(c+437,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R10_en", false,-1);
    tracep->declBit(c+341,"R10_clk", false,-1);
    tracep->declBus(c+438,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R11_en", false,-1);
    tracep->declBit(c+341,"R11_clk", false,-1);
    tracep->declBus(c+439,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R12_en", false,-1);
    tracep->declBit(c+341,"R12_clk", false,-1);
    tracep->declBus(c+440,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R13_en", false,-1);
    tracep->declBit(c+341,"R13_clk", false,-1);
    tracep->declBus(c+441,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R14_en", false,-1);
    tracep->declBit(c+341,"R14_clk", false,-1);
    tracep->declBus(c+442,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R15_en", false,-1);
    tracep->declBit(c+341,"R15_clk", false,-1);
    tracep->declBus(c+443,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R16_en", false,-1);
    tracep->declBit(c+341,"R16_clk", false,-1);
    tracep->declBus(c+444,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R17_en", false,-1);
    tracep->declBit(c+341,"R17_clk", false,-1);
    tracep->declBus(c+445,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R18_en", false,-1);
    tracep->declBit(c+341,"R18_clk", false,-1);
    tracep->declBus(c+446,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R19_en", false,-1);
    tracep->declBit(c+341,"R19_clk", false,-1);
    tracep->declBus(c+447,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R20_en", false,-1);
    tracep->declBit(c+341,"R20_clk", false,-1);
    tracep->declBus(c+448,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R21_en", false,-1);
    tracep->declBit(c+341,"R21_clk", false,-1);
    tracep->declBus(c+449,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R22_en", false,-1);
    tracep->declBit(c+341,"R22_clk", false,-1);
    tracep->declBus(c+450,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R23_en", false,-1);
    tracep->declBit(c+341,"R23_clk", false,-1);
    tracep->declBus(c+451,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R24_en", false,-1);
    tracep->declBit(c+341,"R24_clk", false,-1);
    tracep->declBus(c+452,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R25_en", false,-1);
    tracep->declBit(c+341,"R25_clk", false,-1);
    tracep->declBus(c+453,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R26_en", false,-1);
    tracep->declBit(c+341,"R26_clk", false,-1);
    tracep->declBus(c+454,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R27_en", false,-1);
    tracep->declBit(c+341,"R27_clk", false,-1);
    tracep->declBus(c+455,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R28_en", false,-1);
    tracep->declBit(c+341,"R28_clk", false,-1);
    tracep->declBus(c+456,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R29_en", false,-1);
    tracep->declBit(c+341,"R29_clk", false,-1);
    tracep->declBus(c+457,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R30_en", false,-1);
    tracep->declBit(c+341,"R30_clk", false,-1);
    tracep->declBus(c+458,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R31_en", false,-1);
    tracep->declBit(c+341,"R31_clk", false,-1);
    tracep->declBus(c+126,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R32_en", false,-1);
    tracep->declBit(c+341,"R32_clk", false,-1);
    tracep->declBus(c+127,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+427,"R33_en", false,-1);
    tracep->declBit(c+341,"R33_clk", false,-1);
    tracep->declBus(c+19,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+67,"W0_en", false,-1);
    tracep->declBit(c+341,"W0_clk", false,-1);
    tracep->declQuad(c+222,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+233,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+348,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+400,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+404,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+406,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+408,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+235,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+237,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+239+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+6,"io_in_valid", false,-1);
    tracep->declQuad(c+12,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+14,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+16,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+17,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+18,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+19,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+20,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+22,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+24,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+26,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+67,"io_wb_rfWen", false,-1);
    tracep->declBus(c+19,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+222,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+6,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+7,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_difftest_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_difftest_redirect_valid", false,-1);
    tracep->declQuad(c+71,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+333,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+303,"io_out_0_ready", false,-1);
    tracep->declBit(c+427,"io_out_1_ready", false,-1);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+105,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+106,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+304,"io_out_0_valid", false,-1);
    tracep->declQuad(c+305,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+311,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+312,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+313,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+314,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+315,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+316,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+317,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+318,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+319,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+320,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+459,"io_out_1_valid", false,-1);
    tracep->declQuad(c+460,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+459,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+462,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+460,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+322,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+304,"valid", false,-1);
    tracep->declQuad(c+305,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+73,"c", false,-1, 63,0);
    tracep->declQuad(c+75,"c_1", false,-1, 63,0);
    tracep->declQuad(c+77,"c_2", false,-1, 63,0);
    tracep->declQuad(c+79,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+304,"io_in_0_valid", false,-1);
    tracep->declQuad(c+305,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+303,"io_out_0_ready", false,-1);
    tracep->declBit(c+427,"io_out_1_ready", false,-1);
    tracep->declBit(c+105,"io_in_0_ready", false,-1);
    tracep->declBit(c+304,"io_out_0_valid", false,-1);
    tracep->declQuad(c+305,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+311,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+312,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+313,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+314,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+315,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+316,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+317,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+318,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+319,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+320,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+459,"io_out_1_valid", false,-1);
    tracep->declQuad(c+460,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+459,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+462,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+459,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+426,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+460,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+304,"io_in_valid", false,-1);
    tracep->declQuad(c+305,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+303,"io_out_ready", false,-1);
    tracep->declBit(c+105,"io_in_ready", false,-1);
    tracep->declBit(c+304,"io_out_valid", false,-1);
    tracep->declQuad(c+305,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+307,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+311,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+312,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+313,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+314,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+315,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+316,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+317,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+318,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+319,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+320,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+323,"io_isWFI", false,-1);
    tracep->declBus(c+324,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+325,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+326,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+459,"io_in_valid", false,-1);
    tracep->declQuad(c+460,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+460,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+460,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+427,"io_out_ready", false,-1);
    tracep->declBit(c+427,"io_in_ready", false,-1);
    tracep->declBit(c+459,"io_out_valid", false,-1);
    tracep->declQuad(c+460,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+460,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+459,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+459,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+459,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+462,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+463,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+426,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+426,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+459,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+426,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+460,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+459,"io_isWFI", false,-1);
    tracep->declBus(c+464,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+465,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+463,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+341,"clock", false,-1);
    tracep->declBit(c+342,"reset", false,-1);
    tracep->declBit(c+108,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+109,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+333,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+105,"io_out_ready", false,-1);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+105,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+106,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+327,"io_out_valid", false,-1);
    tracep->declQuad(c+333,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+328,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+330,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+322,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+328,"pc", false,-1, 63,0);
    tracep->declQuad(c+330,"snpc", false,-1, 63,0);
    tracep->declQuad(c+81,"c", false,-1, 63,0);
    tracep->declQuad(c+83,"c_1", false,-1, 63,0);
    tracep->declQuad(c+85,"c_2", false,-1, 63,0);
    tracep->declQuad(c+87,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+89,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"wen", false,-1);
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
    bufp->fullQData(oldp+51,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__c),64);
    bufp->fullQData(oldp+53,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_read),2);
    bufp->fullCData(oldp+56,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state_write),2);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_2),64);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_3),64);
    bufp->fullBit(oldp+67,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+85,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+87,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+89,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+92,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+93,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+95,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+96,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+97,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+98,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+99,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+100,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                                ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                     : 0U)))))),64);
    bufp->fullQData(oldp+102,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+104,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+105,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+106,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+107,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+110,(vlSelf->SimTop__DOT___arbiter_LoadStore_ar_ready));
    bufp->fullBit(oldp+111,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullQData(oldp+115,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+122,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+126,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+127,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+128,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+130,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+134,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+135,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+136,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullBit(oldp+137,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+142,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+147,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+157,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+159,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+160,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___T_47)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+163,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+181,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+182,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+187,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+188,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+199,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+203,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+207,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+299,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+303,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+304,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+307,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+309,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+311,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+312,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+313,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+315,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+316,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+317,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+318,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+319,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+320,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+322,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+323,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+324,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+325,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+326,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+327,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+328,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+330,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+332,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+333,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+335,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+337,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+339,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+341,(vlSelf->clock));
    bufp->fullBit(oldp+342,(vlSelf->reset));
    bufp->fullBit(oldp+343,(vlSelf->io_commit));
    bufp->fullQData(oldp+344,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+346,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+398,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+400,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+402,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+404,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+406,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+408,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+410,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+412,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+414,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+416,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+418,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+420,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+421,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+422,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+424,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+426,(0U),5);
    bufp->fullBit(oldp+427,(1U));
    bufp->fullCData(oldp+428,(0xaU),5);
    bufp->fullCData(oldp+429,(0xbU),5);
    bufp->fullCData(oldp+430,(0xcU),5);
    bufp->fullCData(oldp+431,(0xdU),5);
    bufp->fullCData(oldp+432,(0xeU),5);
    bufp->fullCData(oldp+433,(0xfU),5);
    bufp->fullCData(oldp+434,(0x10U),5);
    bufp->fullCData(oldp+435,(0x11U),5);
    bufp->fullCData(oldp+436,(0x12U),5);
    bufp->fullCData(oldp+437,(0x13U),5);
    bufp->fullCData(oldp+438,(1U),5);
    bufp->fullCData(oldp+439,(0x14U),5);
    bufp->fullCData(oldp+440,(0x15U),5);
    bufp->fullCData(oldp+441,(0x16U),5);
    bufp->fullCData(oldp+442,(0x17U),5);
    bufp->fullCData(oldp+443,(0x18U),5);
    bufp->fullCData(oldp+444,(0x19U),5);
    bufp->fullCData(oldp+445,(0x1aU),5);
    bufp->fullCData(oldp+446,(0x1bU),5);
    bufp->fullCData(oldp+447,(0x1cU),5);
    bufp->fullCData(oldp+448,(0x1dU),5);
    bufp->fullCData(oldp+449,(2U),5);
    bufp->fullCData(oldp+450,(0x1eU),5);
    bufp->fullCData(oldp+451,(0x1fU),5);
    bufp->fullCData(oldp+452,(3U),5);
    bufp->fullCData(oldp+453,(4U),5);
    bufp->fullCData(oldp+454,(5U),5);
    bufp->fullCData(oldp+455,(6U),5);
    bufp->fullCData(oldp+456,(7U),5);
    bufp->fullCData(oldp+457,(8U),5);
    bufp->fullCData(oldp+458,(9U),5);
    bufp->fullBit(oldp+459,(0U));
    bufp->fullQData(oldp+460,(0ULL),64);
    bufp->fullCData(oldp+462,(3U),3);
    bufp->fullCData(oldp+463,(0U),7);
    bufp->fullCData(oldp+464,(0U),3);
    bufp->fullCData(oldp+465,(3U),2);
}
