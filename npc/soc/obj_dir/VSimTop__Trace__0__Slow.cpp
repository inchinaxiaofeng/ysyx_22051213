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
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+337,"io_commit", false,-1);
    tracep->declQuad(c+338,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+337,"io_commit", false,-1);
    tracep->declQuad(c+338,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+1,"c", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
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
    tracep->declQuad(c+412,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+92,"rWriteStatuOK", false,-1);
    tracep->declBit(c+93,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+93,"iRen", false,-1, 0,0);
    tracep->declBus(c+92,"iWen", false,-1, 0,0);
    tracep->declBus(c+91,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+86,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+89,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+87,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+412,"oReadData", false,-1, 63,0);
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
    tracep->declQuad(c+412,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+102,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+103,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+327,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+85,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+92,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+104,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+105,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+329,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+86,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+87,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+90,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+91,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+327,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+329,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+342,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+337,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+338,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+3,"c", false,-1, 63,0);
    tracep->declQuad(c+106,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+110,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+112,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+113,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+114,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+115,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+116,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+117,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+118,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+119,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+120,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+121,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+123,"ringBufferHead", false,-1);
    tracep->declBit(c+5,"ringBufferTail", false,-1);
    tracep->declBit(c+414,"ringBufferAllowin", false,-1);
    tracep->declBus(c+124,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+6,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+125,"io_in_0_valid", false,-1);
    tracep->declQuad(c+106,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+110,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+112,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+113,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+114,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+115,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+117,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+119,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+121,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+415,"io_in_1_valid", false,-1);
    tracep->declBus(c+126,"io_flush", false,-1, 1,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+329,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+127,"io_in_0_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+128,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+130,"io_redirect_valid", false,-1);
    tracep->declQuad(c+342,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+337,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+338,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->declQuad(c+10,"c_1", false,-1, 63,0);
    tracep->declBit(c+131,"valid", false,-1);
    tracep->declQuad(c+132,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+134,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+136,"exu_io_in_bits_r_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+138,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+139,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+140,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+141,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+142,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+143,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+145,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+147,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+12,"valid_1", false,-1);
    tracep->declQuad(c+13,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+15,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"wbu_io_in_bits_r_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+128,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+19,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+20,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+22,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+23,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+25,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+27,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+29,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+31,"c_2", false,-1, 63,0);
    tracep->declQuad(c+33,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+131,"io_in_valid", false,-1);
    tracep->declQuad(c+132,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+134,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+136,"io_in_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+138,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+139,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+140,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+141,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+142,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+143,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+147,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+130,"io_flush", false,-1);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+329,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+149,"io_in_ready", false,-1);
    tracep->declBit(c+150,"io_out_valid", false,-1);
    tracep->declQuad(c+132,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+134,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+136,"io_out_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+151,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+153,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+139,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+154,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+142,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+155,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+331,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+157,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+159,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+131,"io_forward_valid", false,-1);
    tracep->declBit(c+141,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+142,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+333,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+139,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+35,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+161,"io_in_valid", false,-1);
    tracep->declQuad(c+143,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+140,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+132,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+134,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+147,"io_offset", false,-1, 63,0);
    tracep->declBit(c+161,"io_out_valid", false,-1);
    tracep->declQuad(c+155,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+162,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+164,"io_redirect_valid", false,-1);
    tracep->declArray(c+165,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+168,"xorRes", false,-1, 63,0);
    tracep->declBit(c+170,"slt", false,-1);
    tracep->declQuad(c+171,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+173,"shamt", false,-1, 5,0);
    tracep->declQuad(c+37,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+174,"io_in_valid", false,-1);
    tracep->declQuad(c+143,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+140,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+132,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+134,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+138,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+175,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+176,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+177,"io_instrValid", false,-1);
    tracep->declQuad(c+159,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+178,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+180,"io_redirect_valid", false,-1);
    tracep->declBit(c+181,"io_wenFix", false,-1);
    tracep->declQuad(c+404,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+406,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+408,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+410,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+39,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+41,"mcause", false,-1, 63,0);
    tracep->declQuad(c+43,"mepc", false,-1, 63,0);
    tracep->declQuad(c+45,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+47,"satp", false,-1, 63,0);
    tracep->declBus(c+49,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+182,"csri", false,-1, 63,0);
    tracep->declBit(c+184,"isIllegalAccess", false,-1);
    tracep->declBit(c+185,"resetSatp", false,-1);
    tracep->declBit(c+186,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+50,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+187,"io_in_valid", false,-1);
    tracep->declQuad(c+143,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+147,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+140,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+145,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+329,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+188,"io_out_valid", false,-1);
    tracep->declQuad(c+331,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+175,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+176,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+187,"io_in_valid", false,-1);
    tracep->declQuad(c+189,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+140,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+145,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+85,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+92,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+104,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+105,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+329,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+188,"io_out_valid", false,-1);
    tracep->declQuad(c+331,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+85,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+85,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+87,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+89,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+101,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+175,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+176,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+52,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+191,"isStore", false,-1);
    tracep->declBit(c+192,"partialLoad", false,-1);
    tracep->declBus(c+54,"state", false,-1, 1,0);
    tracep->declBus(c+193,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+85,"wValid", false,-1);
    tracep->declQuad(c+55,"c", false,-1, 63,0);
    tracep->declQuad(c+57,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+59,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+143,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+145,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+140,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+157,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+194,"isDivSign", false,-1);
    tracep->declQuad(c+195,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+197,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+199,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+201,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+205,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+208,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+211,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+125,"io_in_0_valid", false,-1);
    tracep->declQuad(c+106,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+110,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+112,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+113,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+114,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+115,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+117,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+118,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+119,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+120,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+121,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+149,"io_out_ready", false,-1);
    tracep->declBit(c+61,"io_wb_rfWen", false,-1);
    tracep->declBus(c+22,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+216,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+131,"io_forward_valid", false,-1);
    tracep->declBit(c+141,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+142,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+333,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+139,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+130,"io_flush", false,-1);
    tracep->declBit(c+127,"io_in_0_ready", false,-1);
    tracep->declBit(c+218,"io_out_valid", false,-1);
    tracep->declQuad(c+106,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+108,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+110,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+112,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+115,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+116,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+119,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+120,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+416,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+418,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+121,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+398,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+400,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+402,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+219,"forwardRfWen", false,-1);
    tracep->declBit(c+220,"dontForward", false,-1);
    tracep->declBit(c+221,"srcADependEX", false,-1);
    tracep->declBit(c+222,"srcBDependEX", false,-1);
    tracep->declBit(c+223,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+224,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+225,"srcAForward", false,-1);
    tracep->declBit(c+226,"srcBForward", false,-1);
    tracep->declBus(c+62,"busy", false,-1, 31,0);
    tracep->declQuad(c+63,"c", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+420,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R0_en", false,-1);
    tracep->declBit(c+335,"R0_clk", false,-1);
    tracep->declBus(c+422,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R1_en", false,-1);
    tracep->declBit(c+335,"R1_clk", false,-1);
    tracep->declBus(c+423,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R2_en", false,-1);
    tracep->declBit(c+335,"R2_clk", false,-1);
    tracep->declBus(c+424,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R3_en", false,-1);
    tracep->declBit(c+335,"R3_clk", false,-1);
    tracep->declBus(c+425,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R4_en", false,-1);
    tracep->declBit(c+335,"R4_clk", false,-1);
    tracep->declBus(c+426,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R5_en", false,-1);
    tracep->declBit(c+335,"R5_clk", false,-1);
    tracep->declBus(c+427,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R6_en", false,-1);
    tracep->declBit(c+335,"R6_clk", false,-1);
    tracep->declBus(c+428,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R7_en", false,-1);
    tracep->declBit(c+335,"R7_clk", false,-1);
    tracep->declBus(c+429,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R8_en", false,-1);
    tracep->declBit(c+335,"R8_clk", false,-1);
    tracep->declBus(c+430,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R9_en", false,-1);
    tracep->declBit(c+335,"R9_clk", false,-1);
    tracep->declBus(c+431,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R10_en", false,-1);
    tracep->declBit(c+335,"R10_clk", false,-1);
    tracep->declBus(c+432,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R11_en", false,-1);
    tracep->declBit(c+335,"R11_clk", false,-1);
    tracep->declBus(c+433,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R12_en", false,-1);
    tracep->declBit(c+335,"R12_clk", false,-1);
    tracep->declBus(c+434,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R13_en", false,-1);
    tracep->declBit(c+335,"R13_clk", false,-1);
    tracep->declBus(c+435,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R14_en", false,-1);
    tracep->declBit(c+335,"R14_clk", false,-1);
    tracep->declBus(c+436,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R15_en", false,-1);
    tracep->declBit(c+335,"R15_clk", false,-1);
    tracep->declBus(c+437,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R16_en", false,-1);
    tracep->declBit(c+335,"R16_clk", false,-1);
    tracep->declBus(c+438,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R17_en", false,-1);
    tracep->declBit(c+335,"R17_clk", false,-1);
    tracep->declBus(c+439,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R18_en", false,-1);
    tracep->declBit(c+335,"R18_clk", false,-1);
    tracep->declBus(c+440,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R19_en", false,-1);
    tracep->declBit(c+335,"R19_clk", false,-1);
    tracep->declBus(c+441,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R20_en", false,-1);
    tracep->declBit(c+335,"R20_clk", false,-1);
    tracep->declBus(c+442,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R21_en", false,-1);
    tracep->declBit(c+335,"R21_clk", false,-1);
    tracep->declBus(c+443,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R22_en", false,-1);
    tracep->declBit(c+335,"R22_clk", false,-1);
    tracep->declBus(c+444,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R23_en", false,-1);
    tracep->declBit(c+335,"R23_clk", false,-1);
    tracep->declBus(c+445,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R24_en", false,-1);
    tracep->declBit(c+335,"R24_clk", false,-1);
    tracep->declBus(c+446,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R25_en", false,-1);
    tracep->declBit(c+335,"R25_clk", false,-1);
    tracep->declBus(c+447,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R26_en", false,-1);
    tracep->declBit(c+335,"R26_clk", false,-1);
    tracep->declBus(c+448,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R27_en", false,-1);
    tracep->declBit(c+335,"R27_clk", false,-1);
    tracep->declBus(c+449,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R28_en", false,-1);
    tracep->declBit(c+335,"R28_clk", false,-1);
    tracep->declBus(c+450,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R29_en", false,-1);
    tracep->declBit(c+335,"R29_clk", false,-1);
    tracep->declBus(c+451,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R30_en", false,-1);
    tracep->declBit(c+335,"R30_clk", false,-1);
    tracep->declBus(c+452,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R31_en", false,-1);
    tracep->declBit(c+335,"R31_clk", false,-1);
    tracep->declBus(c+117,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R32_en", false,-1);
    tracep->declBit(c+335,"R32_clk", false,-1);
    tracep->declBus(c+118,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+421,"R33_en", false,-1);
    tracep->declBit(c+335,"R33_clk", false,-1);
    tracep->declBus(c+22,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+61,"W0_en", false,-1);
    tracep->declBit(c+335,"W0_clk", false,-1);
    tracep->declQuad(c+216,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+227,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+342,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+344,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+400,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+346,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+348,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+229,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+231,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+233+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+12,"io_in_valid", false,-1);
    tracep->declQuad(c+13,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+15,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"io_in_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+128,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+19,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+20,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+21,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+22,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+23,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+25,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+27,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+29,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+61,"io_wb_rfWen", false,-1);
    tracep->declBus(c+22,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+216,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+128,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+130,"io_redirect_valid", false,-1);
    tracep->declBit(c+337,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+338,"io_difftest_commit_bits_decode_cf_pnpc", false,-1, 63,0);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+327,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+297,"io_out_0_ready", false,-1);
    tracep->declBit(c+421,"io_out_1_ready", false,-1);
    tracep->declQuad(c+128,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+130,"io_redirect_valid", false,-1);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+298,"io_out_0_valid", false,-1);
    tracep->declQuad(c+299,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+305,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+307,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+308,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+311,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+312,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+313,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+314,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+453,"io_out_1_valid", false,-1);
    tracep->declQuad(c+454,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+453,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+456,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+457,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+454,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+316,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+298,"valid", false,-1);
    tracep->declQuad(c+299,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+67,"c", false,-1, 63,0);
    tracep->declQuad(c+69,"c_1", false,-1, 63,0);
    tracep->declQuad(c+71,"c_2", false,-1, 63,0);
    tracep->declQuad(c+73,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+298,"io_in_0_valid", false,-1);
    tracep->declQuad(c+299,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+297,"io_out_0_ready", false,-1);
    tracep->declBit(c+421,"io_out_1_ready", false,-1);
    tracep->declBit(c+99,"io_in_0_ready", false,-1);
    tracep->declBit(c+298,"io_out_0_valid", false,-1);
    tracep->declQuad(c+299,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+305,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+306,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+307,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+308,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+309,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+310,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+311,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+312,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+313,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+314,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+453,"io_out_1_valid", false,-1);
    tracep->declQuad(c+454,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+453,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+456,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+457,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+453,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+420,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+454,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+298,"io_in_valid", false,-1);
    tracep->declQuad(c+299,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+297,"io_out_ready", false,-1);
    tracep->declBit(c+99,"io_in_ready", false,-1);
    tracep->declBit(c+298,"io_out_valid", false,-1);
    tracep->declQuad(c+299,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+301,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+303,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+305,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+306,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+307,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+308,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+309,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+310,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+311,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+312,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+313,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+314,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+317,"io_isWFI", false,-1);
    tracep->declBus(c+318,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+319,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+320,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+453,"io_in_valid", false,-1);
    tracep->declQuad(c+454,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+454,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+421,"io_out_ready", false,-1);
    tracep->declBit(c+421,"io_in_ready", false,-1);
    tracep->declBit(c+453,"io_out_valid", false,-1);
    tracep->declQuad(c+454,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+453,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+453,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+453,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+456,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+457,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+420,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+420,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+453,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+420,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+454,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+453,"io_isWFI", false,-1);
    tracep->declBus(c+458,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+459,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+457,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+335,"clock", false,-1);
    tracep->declBit(c+336,"reset", false,-1);
    tracep->declBit(c+102,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+103,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+327,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+99,"io_out_ready", false,-1);
    tracep->declQuad(c+128,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+130,"io_redirect_valid", false,-1);
    tracep->declBit(c+99,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+100,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+321,"io_out_valid", false,-1);
    tracep->declQuad(c+327,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+322,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+324,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+316,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+322,"pc", false,-1, 63,0);
    tracep->declQuad(c+324,"snpc", false,-1, 63,0);
    tracep->declQuad(c+75,"c", false,-1, 63,0);
    tracep->declQuad(c+77,"c_1", false,-1, 63,0);
    tracep->declQuad(c+79,"c_2", false,-1, 63,0);
    tracep->declQuad(c+81,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+83,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"wen", false,-1);
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
    bufp->fullQData(oldp+1,(vlSelf->SimTop__DOT__c),64);
    bufp->fullQData(oldp+3,(vlSelf->SimTop__DOT__core__DOT__c),64);
    bufp->fullBit(oldp+5,(vlSelf->SimTop__DOT__core__DOT__ringBufferTail));
    bufp->fullQData(oldp+6,(vlSelf->SimTop__DOT__core__DOT__c_1),64);
    bufp->fullQData(oldp+8,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c),64);
    bufp->fullQData(oldp+10,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_1),64);
    bufp->fullBit(oldp+12,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid_1));
    bufp->fullQData(oldp+13,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr),64);
    bufp->fullQData(oldp+15,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc),64);
    bufp->fullQData(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pnpc),64);
    bufp->fullBit(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+23,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2),64);
    bufp->fullQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_3),64);
    bufp->fullQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+43,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+45,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+61,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__c),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+81,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+83,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
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
    bufp->fullQData(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+113,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+115,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+118,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+119,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+120,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+121,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+125,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+126,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+127,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullQData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+130,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullBit(oldp+131,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullQData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pnpc),64);
    bufp->fullBit(oldp+138,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+142,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+147,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+151,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+153,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+154,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+157,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+173,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target),64);
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+181,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+182,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+184,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+193,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+195,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+197,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+201,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+297,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+298,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+299,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+303,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+305,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+306,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+307,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+308,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+309,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+310,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+311,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+312,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+313,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+314,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+316,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullBit(oldp+317,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+319,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+320,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+321,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+322,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+324,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+326,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+327,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+329,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+331,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+333,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+335,(vlSelf->clock));
    bufp->fullBit(oldp+336,(vlSelf->reset));
    bufp->fullBit(oldp+337,(vlSelf->io_commit));
    bufp->fullQData(oldp+338,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+340,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+342,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+344,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+346,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+398,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+400,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+402,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+404,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+406,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+408,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+410,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+412,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+414,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+415,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+416,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+418,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+420,(0U),5);
    bufp->fullBit(oldp+421,(1U));
    bufp->fullCData(oldp+422,(0xaU),5);
    bufp->fullCData(oldp+423,(0xbU),5);
    bufp->fullCData(oldp+424,(0xcU),5);
    bufp->fullCData(oldp+425,(0xdU),5);
    bufp->fullCData(oldp+426,(0xeU),5);
    bufp->fullCData(oldp+427,(0xfU),5);
    bufp->fullCData(oldp+428,(0x10U),5);
    bufp->fullCData(oldp+429,(0x11U),5);
    bufp->fullCData(oldp+430,(0x12U),5);
    bufp->fullCData(oldp+431,(0x13U),5);
    bufp->fullCData(oldp+432,(1U),5);
    bufp->fullCData(oldp+433,(0x14U),5);
    bufp->fullCData(oldp+434,(0x15U),5);
    bufp->fullCData(oldp+435,(0x16U),5);
    bufp->fullCData(oldp+436,(0x17U),5);
    bufp->fullCData(oldp+437,(0x18U),5);
    bufp->fullCData(oldp+438,(0x19U),5);
    bufp->fullCData(oldp+439,(0x1aU),5);
    bufp->fullCData(oldp+440,(0x1bU),5);
    bufp->fullCData(oldp+441,(0x1cU),5);
    bufp->fullCData(oldp+442,(0x1dU),5);
    bufp->fullCData(oldp+443,(2U),5);
    bufp->fullCData(oldp+444,(0x1eU),5);
    bufp->fullCData(oldp+445,(0x1fU),5);
    bufp->fullCData(oldp+446,(3U),5);
    bufp->fullCData(oldp+447,(4U),5);
    bufp->fullCData(oldp+448,(5U),5);
    bufp->fullCData(oldp+449,(6U),5);
    bufp->fullCData(oldp+450,(7U),5);
    bufp->fullCData(oldp+451,(8U),5);
    bufp->fullCData(oldp+452,(9U),5);
    bufp->fullBit(oldp+453,(0U));
    bufp->fullQData(oldp+454,(0ULL),64);
    bufp->fullCData(oldp+456,(3U),3);
    bufp->fullCData(oldp+457,(0U),7);
    bufp->fullCData(oldp+458,(0U),3);
    bufp->fullCData(oldp+459,(3U),2);
}
