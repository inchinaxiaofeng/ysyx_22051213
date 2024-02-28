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
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declQuad(c+320,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+322,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+328,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+330,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+332,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declQuad(c+320,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+322,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+328,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+330,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+332,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+75,"io_aw_valid", false,-1);
    tracep->declBus(c+76,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_w_valid", false,-1);
    tracep->declQuad(c+77,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+80,"io_ar_valid", false,-1);
    tracep->declBus(c+81,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_aw_ready", false,-1);
    tracep->declBit(c+75,"io_w_ready", false,-1);
    tracep->declBit(c+82,"io_b_valid", false,-1);
    tracep->declBit(c+80,"io_ar_ready", false,-1);
    tracep->declBit(c+83,"io_r_valid", false,-1);
    tracep->declQuad(c+392,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+82,"rWriteStatuOK", false,-1);
    tracep->declBit(c+83,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+83,"iRen", false,-1, 0,0);
    tracep->declBus(c+82,"iWen", false,-1, 0,0);
    tracep->declBus(c+81,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+76,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+79,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+77,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+392,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+84,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+86,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+77,"writeData", false,-1, 63,0);
    tracep->declBus(c+88,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+89,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+90,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+76,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+77,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+76,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+75,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+82,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+80,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+83,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+392,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+92,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+93,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+310,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+75,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+75,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+82,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+94,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+95,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+312,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+75,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+76,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+77,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+80,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+81,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+92,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+93,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+310,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+82,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+94,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+312,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+89,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+90,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+77,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+322,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+328,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+330,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+332,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+96,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+98,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declBit(c+100,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+101,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+102,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+103,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+104,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+105,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+106,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+107,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+108,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+109,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+111,"ringBufferHead", false,-1);
    tracep->declBit(c+1,"ringBufferTail", false,-1);
    tracep->declBit(c+394,"ringBufferAllowin", false,-1);
    tracep->declBus(c+112,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+2,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+113,"io_in_0_valid", false,-1);
    tracep->declQuad(c+96,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+98,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+100,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+101,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+102,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+103,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+104,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+105,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+106,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+107,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+108,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+109,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+395,"io_in_1_valid", false,-1);
    tracep->declBus(c+114,"io_flush", false,-1, 1,0);
    tracep->declBit(c+75,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+82,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+94,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+312,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+115,"io_in_0_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+77,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declQuad(c+322,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+328,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+330,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+332,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->declBit(c+119,"valid", false,-1);
    tracep->declQuad(c+120,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+122,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declBit(c+124,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+125,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+126,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+127,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+128,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+129,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+131,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+133,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+4,"valid_1", false,-1);
    tracep->declQuad(c+5,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+116,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
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
    tracep->declQuad(c+25,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+119,"io_in_valid", false,-1);
    tracep->declQuad(c+120,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+122,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+124,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+125,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+126,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+127,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+128,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+129,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+131,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+133,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+118,"io_flush", false,-1);
    tracep->declBit(c+75,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+82,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+94,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+312,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+135,"io_in_ready", false,-1);
    tracep->declBit(c+136,"io_out_valid", false,-1);
    tracep->declQuad(c+120,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+122,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+396,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+137,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+125,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+138,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+128,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+139,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+314,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+141,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+143,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+77,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+119,"io_forward_valid", false,-1);
    tracep->declBit(c+127,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+128,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+316,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+125,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+145,"io_in_valid", false,-1);
    tracep->declQuad(c+129,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+131,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+126,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+120,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+122,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+133,"io_offset", false,-1, 63,0);
    tracep->declBit(c+145,"io_out_valid", false,-1);
    tracep->declQuad(c+139,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+146,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+148,"io_redirect_valid", false,-1);
    tracep->declArray(c+149,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+152,"xorRes", false,-1, 63,0);
    tracep->declBit(c+154,"slt", false,-1);
    tracep->declQuad(c+155,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+157,"shamt", false,-1, 5,0);
    tracep->declBit(c+158,"taken", false,-1);
    tracep->declQuad(c+27,"c", false,-1, 63,0);
    tracep->declQuad(c+29,"c_1", false,-1, 63,0);
    tracep->declQuad(c+31,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+159,"io_in_valid", false,-1);
    tracep->declQuad(c+129,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+131,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+126,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+120,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+122,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+124,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+160,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+161,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+162,"io_instrValid", false,-1);
    tracep->declQuad(c+143,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+398,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+163,"io_redirect_valid", false,-1);
    tracep->declBit(c+164,"io_wenFix", false,-1);
    tracep->declQuad(c+384,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+386,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+388,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+390,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+33,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+35,"mcause", false,-1, 63,0);
    tracep->declQuad(c+37,"mepc", false,-1, 63,0);
    tracep->declQuad(c+39,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+41,"satp", false,-1, 63,0);
    tracep->declBus(c+43,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+165,"csri", false,-1, 63,0);
    tracep->declBit(c+167,"isIllegalAccess", false,-1);
    tracep->declBit(c+168,"resetSatp", false,-1);
    tracep->declBit(c+169,"raiseExceptionIntr", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+170,"io_in_valid", false,-1);
    tracep->declQuad(c+129,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+133,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+126,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+131,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+82,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+94,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+312,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+171,"io_out_valid", false,-1);
    tracep->declQuad(c+314,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+77,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+160,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+161,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+170,"io_in_valid", false,-1);
    tracep->declQuad(c+172,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+126,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+131,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+75,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+82,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+94,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+95,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+312,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+171,"io_out_valid", false,-1);
    tracep->declQuad(c+314,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+75,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+75,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+77,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+79,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+91,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+76,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+160,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+161,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+44,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+174,"isStore", false,-1);
    tracep->declBit(c+175,"partialLoad", false,-1);
    tracep->declBus(c+46,"state", false,-1, 1,0);
    tracep->declBus(c+176,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+75,"wValid", false,-1);
    tracep->declQuad(c+47,"c", false,-1, 63,0);
    tracep->declQuad(c+49,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+51,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+129,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+131,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+126,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+141,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+177,"isDivSign", false,-1);
    tracep->declQuad(c+178,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+180,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+182,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+184,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+188,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+191,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+194,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+113,"io_in_0_valid", false,-1);
    tracep->declQuad(c+96,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+98,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+100,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+101,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+102,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+103,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+104,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+105,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+106,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+107,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+108,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+109,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+135,"io_out_ready", false,-1);
    tracep->declBit(c+53,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+199,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+119,"io_forward_valid", false,-1);
    tracep->declBit(c+127,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+128,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+316,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+125,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+118,"io_flush", false,-1);
    tracep->declBit(c+115,"io_in_0_ready", false,-1);
    tracep->declBit(c+201,"io_out_valid", false,-1);
    tracep->declQuad(c+96,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+98,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+100,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+103,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+104,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+107,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+108,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+400,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+402,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+109,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declQuad(c+322,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+328,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+330,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+332,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+334,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+336,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+338,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+340,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+342,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+344,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+346,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+348,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+350,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+352,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+354,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+356,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+358,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+360,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+362,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+364,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+366,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+368,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+370,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+372,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+374,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+376,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+378,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+380,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+382,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declBit(c+202,"forwardRfWen", false,-1);
    tracep->declBit(c+203,"dontForward", false,-1);
    tracep->declBit(c+204,"srcADependEX", false,-1);
    tracep->declBit(c+205,"srcBDependEX", false,-1);
    tracep->declBit(c+206,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+207,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+208,"srcAForward", false,-1);
    tracep->declBit(c+209,"srcBForward", false,-1);
    tracep->declBus(c+54,"busy", false,-1, 31,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+404,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R0_en", false,-1);
    tracep->declBit(c+318,"R0_clk", false,-1);
    tracep->declBus(c+406,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R1_en", false,-1);
    tracep->declBit(c+318,"R1_clk", false,-1);
    tracep->declBus(c+407,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R2_en", false,-1);
    tracep->declBit(c+318,"R2_clk", false,-1);
    tracep->declBus(c+408,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R3_en", false,-1);
    tracep->declBit(c+318,"R3_clk", false,-1);
    tracep->declBus(c+409,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R4_en", false,-1);
    tracep->declBit(c+318,"R4_clk", false,-1);
    tracep->declBus(c+410,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R5_en", false,-1);
    tracep->declBit(c+318,"R5_clk", false,-1);
    tracep->declBus(c+411,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R6_en", false,-1);
    tracep->declBit(c+318,"R6_clk", false,-1);
    tracep->declBus(c+412,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R7_en", false,-1);
    tracep->declBit(c+318,"R7_clk", false,-1);
    tracep->declBus(c+413,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R8_en", false,-1);
    tracep->declBit(c+318,"R8_clk", false,-1);
    tracep->declBus(c+414,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R9_en", false,-1);
    tracep->declBit(c+318,"R9_clk", false,-1);
    tracep->declBus(c+415,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R10_en", false,-1);
    tracep->declBit(c+318,"R10_clk", false,-1);
    tracep->declBus(c+416,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R11_en", false,-1);
    tracep->declBit(c+318,"R11_clk", false,-1);
    tracep->declBus(c+417,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R12_en", false,-1);
    tracep->declBit(c+318,"R12_clk", false,-1);
    tracep->declBus(c+418,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R13_en", false,-1);
    tracep->declBit(c+318,"R13_clk", false,-1);
    tracep->declBus(c+419,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R14_en", false,-1);
    tracep->declBit(c+318,"R14_clk", false,-1);
    tracep->declBus(c+420,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R15_en", false,-1);
    tracep->declBit(c+318,"R15_clk", false,-1);
    tracep->declBus(c+421,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R16_en", false,-1);
    tracep->declBit(c+318,"R16_clk", false,-1);
    tracep->declBus(c+422,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R17_en", false,-1);
    tracep->declBit(c+318,"R17_clk", false,-1);
    tracep->declBus(c+423,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R18_en", false,-1);
    tracep->declBit(c+318,"R18_clk", false,-1);
    tracep->declBus(c+424,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R19_en", false,-1);
    tracep->declBit(c+318,"R19_clk", false,-1);
    tracep->declBus(c+425,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R20_en", false,-1);
    tracep->declBit(c+318,"R20_clk", false,-1);
    tracep->declBus(c+426,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R21_en", false,-1);
    tracep->declBit(c+318,"R21_clk", false,-1);
    tracep->declBus(c+427,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R22_en", false,-1);
    tracep->declBit(c+318,"R22_clk", false,-1);
    tracep->declBus(c+428,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R23_en", false,-1);
    tracep->declBit(c+318,"R23_clk", false,-1);
    tracep->declBus(c+429,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R24_en", false,-1);
    tracep->declBit(c+318,"R24_clk", false,-1);
    tracep->declBus(c+430,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R25_en", false,-1);
    tracep->declBit(c+318,"R25_clk", false,-1);
    tracep->declBus(c+431,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R26_en", false,-1);
    tracep->declBit(c+318,"R26_clk", false,-1);
    tracep->declBus(c+432,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R27_en", false,-1);
    tracep->declBit(c+318,"R27_clk", false,-1);
    tracep->declBus(c+433,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R28_en", false,-1);
    tracep->declBit(c+318,"R28_clk", false,-1);
    tracep->declBus(c+434,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R29_en", false,-1);
    tracep->declBit(c+318,"R29_clk", false,-1);
    tracep->declBus(c+435,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R30_en", false,-1);
    tracep->declBit(c+318,"R30_clk", false,-1);
    tracep->declBus(c+436,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R31_en", false,-1);
    tracep->declBit(c+318,"R31_clk", false,-1);
    tracep->declBus(c+105,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R32_en", false,-1);
    tracep->declBit(c+318,"R32_clk", false,-1);
    tracep->declBus(c+106,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+405,"R33_en", false,-1);
    tracep->declBit(c+318,"R33_clk", false,-1);
    tracep->declBus(c+12,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+53,"W0_en", false,-1);
    tracep->declBit(c+318,"W0_clk", false,-1);
    tracep->declQuad(c+199,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+210,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+340,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+342,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+344,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+346,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+348,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+350,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+352,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+354,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+356,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+358,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+322,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+372,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+374,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+376,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+378,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+324,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+380,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+382,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+326,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+328,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+330,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+332,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+334,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+336,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+338,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+212,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+214,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+216+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+4,"io_in_valid", false,-1);
    tracep->declQuad(c+5,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+116,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+9,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+10,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+12,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+13,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+15,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+17,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+53,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+199,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declQuad(c+55,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+92,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+93,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+310,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+280,"io_out_0_ready", false,-1);
    tracep->declBit(c+405,"io_out_1_ready", false,-1);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declBit(c+89,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+90,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+281,"io_out_0_valid", false,-1);
    tracep->declQuad(c+282,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+287,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+288,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+289,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+290,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+291,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+292,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+293,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+294,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+295,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+437,"io_out_1_valid", false,-1);
    tracep->declQuad(c+438,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+438,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+437,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+440,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+441,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+438,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+297,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+281,"valid", false,-1);
    tracep->declQuad(c+282,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+298,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+57,"c", false,-1, 63,0);
    tracep->declQuad(c+59,"c_1", false,-1, 63,0);
    tracep->declQuad(c+61,"c_2", false,-1, 63,0);
    tracep->declQuad(c+63,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+281,"io_in_0_valid", false,-1);
    tracep->declQuad(c+282,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+298,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+280,"io_out_0_ready", false,-1);
    tracep->declBit(c+405,"io_out_1_ready", false,-1);
    tracep->declBit(c+89,"io_in_0_ready", false,-1);
    tracep->declBit(c+281,"io_out_0_valid", false,-1);
    tracep->declQuad(c+282,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+287,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+288,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+289,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+290,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+291,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+292,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+293,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+294,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+295,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+437,"io_out_1_valid", false,-1);
    tracep->declQuad(c+438,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+438,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+437,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+440,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+441,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+437,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+404,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+438,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+281,"io_in_valid", false,-1);
    tracep->declQuad(c+282,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+280,"io_out_ready", false,-1);
    tracep->declBit(c+89,"io_in_ready", false,-1);
    tracep->declBit(c+281,"io_out_valid", false,-1);
    tracep->declQuad(c+282,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+284,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+286,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+287,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+288,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+289,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+290,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+291,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+292,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+293,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+294,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+295,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+300,"io_isWFI", false,-1);
    tracep->declBus(c+301,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+302,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+303,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+437,"io_in_valid", false,-1);
    tracep->declQuad(c+438,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+438,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+405,"io_out_ready", false,-1);
    tracep->declBit(c+405,"io_in_ready", false,-1);
    tracep->declBit(c+437,"io_out_valid", false,-1);
    tracep->declQuad(c+438,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+438,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+437,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+437,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+437,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+440,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+441,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+404,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+404,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+437,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+404,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+438,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+437,"io_isWFI", false,-1);
    tracep->declBus(c+442,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+443,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+441,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+318,"clock", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+92,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+93,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+310,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+89,"io_out_ready", false,-1);
    tracep->declQuad(c+116,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+118,"io_redirect_valid", false,-1);
    tracep->declBit(c+89,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+90,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+304,"io_out_valid", false,-1);
    tracep->declQuad(c+310,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+305,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+307,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+297,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+305,"pc", false,-1, 63,0);
    tracep->declQuad(c+307,"snpc", false,-1, 63,0);
    tracep->declQuad(c+65,"c", false,-1, 63,0);
    tracep->declQuad(c+67,"c_1", false,-1, 63,0);
    tracep->declQuad(c+69,"c_2", false,-1, 63,0);
    tracep->declQuad(c+71,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declQuad(c+73,"npc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+309,"wen", false,-1);
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
    bufp->fullQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__c_2),64);
    bufp->fullQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c),64);
    bufp->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
    bufp->fullQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_2),64);
    bufp->fullQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+43,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+46,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+51,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+53,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3),64);
    bufp->fullQData(oldp+73,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc),64);
    bufp->fullBit(oldp+75,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+76,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+77,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+79,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+80,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+81,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+82,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+83,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+84,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+86,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+88,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+89,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+90,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                            & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+93,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                            & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+95,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+96,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+98,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullBit(oldp+100,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+101,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+102,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+103,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+104,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+105,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+106,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+107,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+108,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+109,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+111,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+113,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+114,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+115,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullQData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+118,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullBit(oldp+119,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+120,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullBit(oldp+124,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+126,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+127,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+128,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+131,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+133,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+136,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                                 & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h3e2b63bd__0)) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                       >> 4U))))));
    bufp->fullBit(oldp+138,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+141,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+143,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+146,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h3e2b63bd__0)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
                                : ((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                    ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc 
                                       + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm)
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U])))))),64);
    bufp->fullBit(oldp+148,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                             & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h3e2b63bd__0)) 
                                & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                   >> 4U)))));
    bufp->fullWData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullBit(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__taken));
    bufp->fullBit(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+161,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+162,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullBit(oldp+163,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+164,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+165,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+176,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+180,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+182,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+184,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+194,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+203,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+206,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+208,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+210,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+214,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+218,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+220,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+224,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+226,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+228,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+232,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+234,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+236,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+258,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+260,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+266,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+270,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+274,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+276,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+280,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+281,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullBit(oldp+286,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+287,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+288,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+290,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+291,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+292,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+293,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+294,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+297,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullQData(oldp+298,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+300,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+302,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+303,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+304,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+307,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+309,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+310,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+312,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+318,(vlSelf->clock));
    bufp->fullBit(oldp+319,(vlSelf->reset));
    bufp->fullQData(oldp+320,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+322,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+324,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+326,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+328,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+330,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+332,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+334,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+336,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+338,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+340,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+342,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+344,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+346,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+348,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+350,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+352,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+354,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+356,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+358,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+360,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+362,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+364,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+366,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+368,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+370,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+372,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+374,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+376,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+378,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+380,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+382,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+384,(vlSelf->io_csr_regs_0),64);
    bufp->fullQData(oldp+386,(vlSelf->io_csr_regs_1),64);
    bufp->fullQData(oldp+388,(vlSelf->io_csr_regs_2),64);
    bufp->fullQData(oldp+390,(vlSelf->io_csr_regs_3),64);
    bufp->fullQData(oldp+392,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+394,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+395,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+396,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                                    ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                                    : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                                        ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                        : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))
                                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h3e2b63bd__0)
                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
                                    : ((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                        ? (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc 
                                           + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm)
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes[0U]))))))),64);
    bufp->fullQData(oldp+398,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                                ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                    : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))),64);
    bufp->fullQData(oldp+400,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+402,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+404,(0U),5);
    bufp->fullBit(oldp+405,(1U));
    bufp->fullCData(oldp+406,(0xaU),5);
    bufp->fullCData(oldp+407,(0xbU),5);
    bufp->fullCData(oldp+408,(0xcU),5);
    bufp->fullCData(oldp+409,(0xdU),5);
    bufp->fullCData(oldp+410,(0xeU),5);
    bufp->fullCData(oldp+411,(0xfU),5);
    bufp->fullCData(oldp+412,(0x10U),5);
    bufp->fullCData(oldp+413,(0x11U),5);
    bufp->fullCData(oldp+414,(0x12U),5);
    bufp->fullCData(oldp+415,(0x13U),5);
    bufp->fullCData(oldp+416,(1U),5);
    bufp->fullCData(oldp+417,(0x14U),5);
    bufp->fullCData(oldp+418,(0x15U),5);
    bufp->fullCData(oldp+419,(0x16U),5);
    bufp->fullCData(oldp+420,(0x17U),5);
    bufp->fullCData(oldp+421,(0x18U),5);
    bufp->fullCData(oldp+422,(0x19U),5);
    bufp->fullCData(oldp+423,(0x1aU),5);
    bufp->fullCData(oldp+424,(0x1bU),5);
    bufp->fullCData(oldp+425,(0x1cU),5);
    bufp->fullCData(oldp+426,(0x1dU),5);
    bufp->fullCData(oldp+427,(2U),5);
    bufp->fullCData(oldp+428,(0x1eU),5);
    bufp->fullCData(oldp+429,(0x1fU),5);
    bufp->fullCData(oldp+430,(3U),5);
    bufp->fullCData(oldp+431,(4U),5);
    bufp->fullCData(oldp+432,(5U),5);
    bufp->fullCData(oldp+433,(6U),5);
    bufp->fullCData(oldp+434,(7U),5);
    bufp->fullCData(oldp+435,(8U),5);
    bufp->fullCData(oldp+436,(9U),5);
    bufp->fullBit(oldp+437,(0U));
    bufp->fullQData(oldp+438,(0ULL),64);
    bufp->fullCData(oldp+440,(3U),3);
    bufp->fullCData(oldp+441,(0U),7);
    bufp->fullCData(oldp+442,(0U),3);
    bufp->fullCData(oldp+443,(3U),2);
}
