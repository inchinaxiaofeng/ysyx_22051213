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
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+331,"io_commit", false,-1);
    tracep->declQuad(c+332,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+331,"io_commit", false,-1);
    tracep->declQuad(c+332,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+1,"c", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+81,"io_aw_valid", false,-1);
    tracep->declBus(c+82,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_w_valid", false,-1);
    tracep->declQuad(c+83,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+86,"io_ar_valid", false,-1);
    tracep->declBus(c+87,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_aw_ready", false,-1);
    tracep->declBit(c+81,"io_w_ready", false,-1);
    tracep->declBit(c+88,"io_b_valid", false,-1);
    tracep->declBit(c+86,"io_ar_ready", false,-1);
    tracep->declBit(c+89,"io_r_valid", false,-1);
    tracep->declQuad(c+406,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+88,"rWriteStatuOK", false,-1);
    tracep->declBit(c+89,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+89,"iRen", false,-1, 0,0);
    tracep->declBus(c+88,"iWen", false,-1, 0,0);
    tracep->declBus(c+87,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+82,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+85,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+83,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+406,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+90,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+92,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+83,"writeData", false,-1, 63,0);
    tracep->declBus(c+94,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+95,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+96,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+82,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+83,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+82,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+81,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+88,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+86,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+89,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+406,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+98,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+99,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+321,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+81,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+81,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+88,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+100,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+101,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+323,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+81,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+82,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+83,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+86,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+87,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+98,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+99,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+321,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+88,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+100,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+95,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+83,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+336,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+331,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+3,"c", false,-1, 63,0);
    tracep->declQuad(c+102,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+104,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+106,"dataBuffer_0_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+108,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+109,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+110,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+111,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+112,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+113,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+114,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+115,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+116,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+117,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+119,"ringBufferHead", false,-1);
    tracep->declBit(c+5,"ringBufferTail", false,-1);
    tracep->declBit(c+408,"ringBufferAllowin", false,-1);
    tracep->declBus(c+120,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+6,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+121,"io_in_0_valid", false,-1);
    tracep->declQuad(c+102,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+104,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+106,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+108,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+109,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+110,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+111,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+112,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+113,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+114,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+115,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+117,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+409,"io_in_1_valid", false,-1);
    tracep->declBus(c+122,"io_flush", false,-1, 1,0);
    tracep->declBit(c+81,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+88,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+100,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+123,"io_in_0_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+83,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+124,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+126,"io_redirect_valid", false,-1);
    tracep->declQuad(c+336,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+331,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+8,"c", false,-1, 63,0);
    tracep->declQuad(c+10,"c_1", false,-1, 63,0);
    tracep->declBit(c+127,"valid", false,-1);
    tracep->declQuad(c+128,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+130,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declBit(c+132,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+133,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+134,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+135,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+137,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+139,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+141,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+12,"valid_1", false,-1);
    tracep->declQuad(c+13,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+15,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+124,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+17,"wbu_io_in_bits_r_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+18,"wbu_io_in_bits_r_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+19,"wbu_io_in_bits_r_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+20,"wbu_io_in_bits_r_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+21,"wbu_io_in_bits_r_commits_0", false,-1, 63,0);
    tracep->declQuad(c+23,"wbu_io_in_bits_r_commits_1", false,-1, 63,0);
    tracep->declQuad(c+25,"wbu_io_in_bits_r_commits_2", false,-1, 63,0);
    tracep->declQuad(c+27,"wbu_io_in_bits_r_commits_3", false,-1, 63,0);
    tracep->declQuad(c+29,"c_2", false,-1, 63,0);
    tracep->declQuad(c+31,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+127,"io_in_valid", false,-1);
    tracep->declQuad(c+128,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+130,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+132,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+133,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+134,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+135,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+137,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+139,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+126,"io_flush", false,-1);
    tracep->declBit(c+81,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+88,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+100,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+143,"io_in_ready", false,-1);
    tracep->declBit(c+144,"io_out_valid", false,-1);
    tracep->declQuad(c+128,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+130,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+145,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+147,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+133,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+148,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+136,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+149,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+325,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+151,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+153,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+83,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+127,"io_forward_valid", false,-1);
    tracep->declBit(c+135,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+136,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+327,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+133,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+33,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+155,"io_in_valid", false,-1);
    tracep->declQuad(c+137,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+139,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+134,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+128,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+130,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+141,"io_offset", false,-1, 63,0);
    tracep->declBit(c+155,"io_out_valid", false,-1);
    tracep->declQuad(c+149,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+156,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+158,"io_redirect_valid", false,-1);
    tracep->declArray(c+159,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+162,"xorRes", false,-1, 63,0);
    tracep->declBit(c+164,"slt", false,-1);
    tracep->declQuad(c+165,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+167,"shamt", false,-1, 5,0);
    tracep->declQuad(c+35,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+168,"io_in_valid", false,-1);
    tracep->declQuad(c+137,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+139,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+134,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+128,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+130,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+132,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+169,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+170,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+171,"io_instrValid", false,-1);
    tracep->declQuad(c+153,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+172,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+174,"io_redirect_valid", false,-1);
    tracep->declBit(c+175,"io_wenFix", false,-1);
    tracep->declQuad(c+398,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+400,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+402,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+404,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+37,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+39,"mcause", false,-1, 63,0);
    tracep->declQuad(c+41,"mepc", false,-1, 63,0);
    tracep->declQuad(c+43,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+45,"satp", false,-1, 63,0);
    tracep->declBus(c+47,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+176,"csri", false,-1, 63,0);
    tracep->declBit(c+178,"isIllegalAccess", false,-1);
    tracep->declBit(c+179,"resetSatp", false,-1);
    tracep->declBit(c+180,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+48,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+181,"io_in_valid", false,-1);
    tracep->declQuad(c+137,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+141,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+134,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+139,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+88,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+100,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+182,"io_out_valid", false,-1);
    tracep->declQuad(c+325,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+83,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+169,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+170,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+181,"io_in_valid", false,-1);
    tracep->declQuad(c+183,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+134,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+139,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+81,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+88,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+100,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+101,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+323,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+182,"io_out_valid", false,-1);
    tracep->declQuad(c+325,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+81,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+81,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+83,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+85,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+97,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+82,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+169,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+170,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+50,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+185,"isStore", false,-1);
    tracep->declBit(c+186,"partialLoad", false,-1);
    tracep->declBus(c+52,"state", false,-1, 1,0);
    tracep->declBus(c+187,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+81,"wValid", false,-1);
    tracep->declQuad(c+53,"c", false,-1, 63,0);
    tracep->declQuad(c+55,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+57,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+137,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+139,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+134,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+151,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+188,"isDivSign", false,-1);
    tracep->declQuad(c+189,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+191,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+193,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+195,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+199,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+202,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+205,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+121,"io_in_0_valid", false,-1);
    tracep->declQuad(c+102,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+104,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+106,"io_in_0_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+108,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+109,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+110,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+111,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+112,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+113,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+114,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+115,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+116,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+117,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+143,"io_out_ready", false,-1);
    tracep->declBit(c+59,"io_wb_rfWen", false,-1);
    tracep->declBus(c+20,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+210,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+127,"io_forward_valid", false,-1);
    tracep->declBit(c+135,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+136,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+327,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+133,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+126,"io_flush", false,-1);
    tracep->declBit(c+123,"io_in_0_ready", false,-1);
    tracep->declBit(c+212,"io_out_valid", false,-1);
    tracep->declQuad(c+102,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+104,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+106,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+108,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+111,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+112,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+115,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+116,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+410,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+412,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+117,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+384,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+386,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+388,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+390,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+392,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+394,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+396,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+213,"forwardRfWen", false,-1);
    tracep->declBit(c+214,"dontForward", false,-1);
    tracep->declBit(c+215,"srcADependEX", false,-1);
    tracep->declBit(c+216,"srcBDependEX", false,-1);
    tracep->declBit(c+217,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+218,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+219,"srcAForward", false,-1);
    tracep->declBit(c+220,"srcBForward", false,-1);
    tracep->declBus(c+60,"busy", false,-1, 31,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+414,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R0_en", false,-1);
    tracep->declBit(c+329,"R0_clk", false,-1);
    tracep->declBus(c+416,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R1_en", false,-1);
    tracep->declBit(c+329,"R1_clk", false,-1);
    tracep->declBus(c+417,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R2_en", false,-1);
    tracep->declBit(c+329,"R2_clk", false,-1);
    tracep->declBus(c+418,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R3_en", false,-1);
    tracep->declBit(c+329,"R3_clk", false,-1);
    tracep->declBus(c+419,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R4_en", false,-1);
    tracep->declBit(c+329,"R4_clk", false,-1);
    tracep->declBus(c+420,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R5_en", false,-1);
    tracep->declBit(c+329,"R5_clk", false,-1);
    tracep->declBus(c+421,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R6_en", false,-1);
    tracep->declBit(c+329,"R6_clk", false,-1);
    tracep->declBus(c+422,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R7_en", false,-1);
    tracep->declBit(c+329,"R7_clk", false,-1);
    tracep->declBus(c+423,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R8_en", false,-1);
    tracep->declBit(c+329,"R8_clk", false,-1);
    tracep->declBus(c+424,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R9_en", false,-1);
    tracep->declBit(c+329,"R9_clk", false,-1);
    tracep->declBus(c+425,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R10_en", false,-1);
    tracep->declBit(c+329,"R10_clk", false,-1);
    tracep->declBus(c+426,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R11_en", false,-1);
    tracep->declBit(c+329,"R11_clk", false,-1);
    tracep->declBus(c+427,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R12_en", false,-1);
    tracep->declBit(c+329,"R12_clk", false,-1);
    tracep->declBus(c+428,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R13_en", false,-1);
    tracep->declBit(c+329,"R13_clk", false,-1);
    tracep->declBus(c+429,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R14_en", false,-1);
    tracep->declBit(c+329,"R14_clk", false,-1);
    tracep->declBus(c+430,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R15_en", false,-1);
    tracep->declBit(c+329,"R15_clk", false,-1);
    tracep->declBus(c+431,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R16_en", false,-1);
    tracep->declBit(c+329,"R16_clk", false,-1);
    tracep->declBus(c+432,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R17_en", false,-1);
    tracep->declBit(c+329,"R17_clk", false,-1);
    tracep->declBus(c+433,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R18_en", false,-1);
    tracep->declBit(c+329,"R18_clk", false,-1);
    tracep->declBus(c+434,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R19_en", false,-1);
    tracep->declBit(c+329,"R19_clk", false,-1);
    tracep->declBus(c+435,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R20_en", false,-1);
    tracep->declBit(c+329,"R20_clk", false,-1);
    tracep->declBus(c+436,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R21_en", false,-1);
    tracep->declBit(c+329,"R21_clk", false,-1);
    tracep->declBus(c+437,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R22_en", false,-1);
    tracep->declBit(c+329,"R22_clk", false,-1);
    tracep->declBus(c+438,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R23_en", false,-1);
    tracep->declBit(c+329,"R23_clk", false,-1);
    tracep->declBus(c+439,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R24_en", false,-1);
    tracep->declBit(c+329,"R24_clk", false,-1);
    tracep->declBus(c+440,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R25_en", false,-1);
    tracep->declBit(c+329,"R25_clk", false,-1);
    tracep->declBus(c+441,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R26_en", false,-1);
    tracep->declBit(c+329,"R26_clk", false,-1);
    tracep->declBus(c+442,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R27_en", false,-1);
    tracep->declBit(c+329,"R27_clk", false,-1);
    tracep->declBus(c+443,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R28_en", false,-1);
    tracep->declBit(c+329,"R28_clk", false,-1);
    tracep->declBus(c+444,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R29_en", false,-1);
    tracep->declBit(c+329,"R29_clk", false,-1);
    tracep->declBus(c+445,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R30_en", false,-1);
    tracep->declBit(c+329,"R30_clk", false,-1);
    tracep->declBus(c+446,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R31_en", false,-1);
    tracep->declBit(c+329,"R31_clk", false,-1);
    tracep->declBus(c+113,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R32_en", false,-1);
    tracep->declBit(c+329,"R32_clk", false,-1);
    tracep->declBus(c+114,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+415,"R33_en", false,-1);
    tracep->declBit(c+329,"R33_clk", false,-1);
    tracep->declBus(c+20,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+59,"W0_en", false,-1);
    tracep->declBit(c+329,"W0_clk", false,-1);
    tracep->declQuad(c+210,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+221,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+336,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+384,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+386,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+388,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+390,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+392,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+338,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+340,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+342,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+344,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+346,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+348,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+223,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+225,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+227+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+12,"io_in_valid", false,-1);
    tracep->declQuad(c+13,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+15,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+124,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+17,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+18,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+19,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+20,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+21,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+23,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+25,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+27,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+59,"io_wb_rfWen", false,-1);
    tracep->declBus(c+20,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+210,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+124,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+126,"io_redirect_valid", false,-1);
    tracep->declBit(c+331,"io_difftest_commit_valid", false,-1);
    tracep->declQuad(c+61,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+98,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+99,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+321,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+291,"io_out_0_ready", false,-1);
    tracep->declBit(c+415,"io_out_1_ready", false,-1);
    tracep->declQuad(c+124,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+126,"io_redirect_valid", false,-1);
    tracep->declBit(c+95,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+292,"io_out_0_valid", false,-1);
    tracep->declQuad(c+293,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
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
    tracep->declBit(c+447,"io_out_1_valid", false,-1);
    tracep->declQuad(c+448,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+447,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+450,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+451,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+448,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+310,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+292,"valid", false,-1);
    tracep->declQuad(c+293,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+63,"c", false,-1, 63,0);
    tracep->declQuad(c+65,"c_1", false,-1, 63,0);
    tracep->declQuad(c+67,"c_2", false,-1, 63,0);
    tracep->declQuad(c+69,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+292,"io_in_0_valid", false,-1);
    tracep->declQuad(c+293,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+291,"io_out_0_ready", false,-1);
    tracep->declBit(c+415,"io_out_1_ready", false,-1);
    tracep->declBit(c+95,"io_in_0_ready", false,-1);
    tracep->declBit(c+292,"io_out_0_valid", false,-1);
    tracep->declQuad(c+293,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_0_bits_cf_pnpc", false,-1, 63,0);
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
    tracep->declBit(c+447,"io_out_1_valid", false,-1);
    tracep->declQuad(c+448,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_1_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+447,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+450,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+451,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+447,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+414,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+448,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+292,"io_in_valid", false,-1);
    tracep->declQuad(c+293,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+291,"io_out_ready", false,-1);
    tracep->declBit(c+95,"io_in_ready", false,-1);
    tracep->declBit(c+292,"io_out_valid", false,-1);
    tracep->declQuad(c+293,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+295,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+297,"io_out_bits_cf_pnpc", false,-1, 63,0);
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
    tracep->declBit(c+311,"io_isWFI", false,-1);
    tracep->declBus(c+312,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+313,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+314,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+447,"io_in_valid", false,-1);
    tracep->declQuad(c+448,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+448,"io_in_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+448,"io_in_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+415,"io_out_ready", false,-1);
    tracep->declBit(c+415,"io_in_ready", false,-1);
    tracep->declBit(c+447,"io_out_valid", false,-1);
    tracep->declQuad(c+448,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+448,"io_out_bits_cf_pnpc", false,-1, 63,0);
    tracep->declBit(c+447,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+447,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+447,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+450,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+451,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+414,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+414,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+447,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+414,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+448,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+447,"io_isWFI", false,-1);
    tracep->declBus(c+452,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+453,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+451,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+329,"clock", false,-1);
    tracep->declBit(c+330,"reset", false,-1);
    tracep->declBit(c+98,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+99,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+321,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+95,"io_out_ready", false,-1);
    tracep->declQuad(c+124,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+126,"io_redirect_valid", false,-1);
    tracep->declBit(c+95,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+96,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+315,"io_out_valid", false,-1);
    tracep->declQuad(c+321,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+316,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+318,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+310,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+316,"pc", false,-1, 63,0);
    tracep->declQuad(c+318,"snpc", false,-1, 63,0);
    tracep->declQuad(c+71,"c", false,-1, 63,0);
    tracep->declQuad(c+73,"c_1", false,-1, 63,0);
    tracep->declQuad(c+75,"c_2", false,-1, 63,0);
    tracep->declQuad(c+77,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+79,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"wen", false,-1);
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
    bufp->fullBit(oldp+17,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid));
    bufp->fullCData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType),3);
    bufp->fullBit(oldp+19,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen));
    bufp->fullCData(oldp+20,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest),5);
    bufp->fullQData(oldp+21,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0),64);
    bufp->fullQData(oldp+23,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1),64);
    bufp->fullQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2),64);
    bufp->fullQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3),64);
    bufp->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2),64);
    bufp->fullQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_3),64);
    bufp->fullQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c),64);
    bufp->fullQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+43,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+45,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+48,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c),64);
    bufp->fullQData(oldp+50,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+53,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+59,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+60,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+75,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+77,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+79,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+81,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+82,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+83,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+85,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+86,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+87,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+88,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+89,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+90,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+92,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+94,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+95,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+96,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+97,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                            & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+99,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                             & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+101,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+102,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+104,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullQData(oldp+106,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pnpc),64);
    bufp->fullBit(oldp+108,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+110,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+111,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+113,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+114,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+115,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+117,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+119,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+120,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+121,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+122,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+123,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullQData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+126,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+130,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+134,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+136,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+137,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+144,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullQData(oldp+145,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target)),64);
    bufp->fullBit(oldp+147,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid))));
    bufp->fullBit(oldp+148,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+151,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target),64);
    bufp->fullBit(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid));
    bufp->fullWData(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
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
    bufp->fullQData(oldp+183,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+187,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+189,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+193,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+195,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+213,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+291,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+292,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
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
    bufp->fullBit(oldp+311,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+312,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+313,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+315,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+318,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+320,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+321,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+323,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+325,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+327,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+329,(vlSelf->clock));
    bufp->fullBit(oldp+330,(vlSelf->reset));
    bufp->fullBit(oldp+331,(vlSelf->io_commit));
    bufp->fullQData(oldp+332,(vlSelf->io_pc),64);
    bufp->fullQData(oldp+334,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+336,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+338,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+340,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+342,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+344,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+346,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+384,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+386,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+388,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+390,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+392,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+394,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+396,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+398,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+400,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+402,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+404,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+406,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+408,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+409,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+410,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+412,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+414,(0U),5);
    bufp->fullBit(oldp+415,(1U));
    bufp->fullCData(oldp+416,(0xaU),5);
    bufp->fullCData(oldp+417,(0xbU),5);
    bufp->fullCData(oldp+418,(0xcU),5);
    bufp->fullCData(oldp+419,(0xdU),5);
    bufp->fullCData(oldp+420,(0xeU),5);
    bufp->fullCData(oldp+421,(0xfU),5);
    bufp->fullCData(oldp+422,(0x10U),5);
    bufp->fullCData(oldp+423,(0x11U),5);
    bufp->fullCData(oldp+424,(0x12U),5);
    bufp->fullCData(oldp+425,(0x13U),5);
    bufp->fullCData(oldp+426,(1U),5);
    bufp->fullCData(oldp+427,(0x14U),5);
    bufp->fullCData(oldp+428,(0x15U),5);
    bufp->fullCData(oldp+429,(0x16U),5);
    bufp->fullCData(oldp+430,(0x17U),5);
    bufp->fullCData(oldp+431,(0x18U),5);
    bufp->fullCData(oldp+432,(0x19U),5);
    bufp->fullCData(oldp+433,(0x1aU),5);
    bufp->fullCData(oldp+434,(0x1bU),5);
    bufp->fullCData(oldp+435,(0x1cU),5);
    bufp->fullCData(oldp+436,(0x1dU),5);
    bufp->fullCData(oldp+437,(2U),5);
    bufp->fullCData(oldp+438,(0x1eU),5);
    bufp->fullCData(oldp+439,(0x1fU),5);
    bufp->fullCData(oldp+440,(3U),5);
    bufp->fullCData(oldp+441,(4U),5);
    bufp->fullCData(oldp+442,(5U),5);
    bufp->fullCData(oldp+443,(6U),5);
    bufp->fullCData(oldp+444,(7U),5);
    bufp->fullCData(oldp+445,(8U),5);
    bufp->fullCData(oldp+446,(9U),5);
    bufp->fullBit(oldp+447,(0U));
    bufp->fullQData(oldp+448,(0ULL),64);
    bufp->fullCData(oldp+450,(3U),3);
    bufp->fullCData(oldp+451,(0U),7);
    bufp->fullCData(oldp+452,(0U),3);
    bufp->fullCData(oldp+453,(3U),2);
}
