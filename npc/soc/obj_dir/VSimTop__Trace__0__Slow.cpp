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
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declQuad(c+379,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+409,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+411,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+413,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+415,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+417,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+419,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+421,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+423,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+425,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+427,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+429,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+431,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+433,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+435,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+437,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+439,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+441,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+443,"io_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+445,"io_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+447,"io_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+449,"io_csr_mcause", false,-1, 63,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declQuad(c+379,"io_gpr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+381,"io_gpr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+383,"io_gpr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+385,"io_gpr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+387,"io_gpr_regs_4", false,-1, 63,0);
    tracep->declQuad(c+389,"io_gpr_regs_5", false,-1, 63,0);
    tracep->declQuad(c+391,"io_gpr_regs_6", false,-1, 63,0);
    tracep->declQuad(c+393,"io_gpr_regs_7", false,-1, 63,0);
    tracep->declQuad(c+395,"io_gpr_regs_8", false,-1, 63,0);
    tracep->declQuad(c+397,"io_gpr_regs_9", false,-1, 63,0);
    tracep->declQuad(c+399,"io_gpr_regs_10", false,-1, 63,0);
    tracep->declQuad(c+401,"io_gpr_regs_11", false,-1, 63,0);
    tracep->declQuad(c+403,"io_gpr_regs_12", false,-1, 63,0);
    tracep->declQuad(c+405,"io_gpr_regs_13", false,-1, 63,0);
    tracep->declQuad(c+407,"io_gpr_regs_14", false,-1, 63,0);
    tracep->declQuad(c+409,"io_gpr_regs_15", false,-1, 63,0);
    tracep->declQuad(c+411,"io_gpr_regs_16", false,-1, 63,0);
    tracep->declQuad(c+413,"io_gpr_regs_17", false,-1, 63,0);
    tracep->declQuad(c+415,"io_gpr_regs_18", false,-1, 63,0);
    tracep->declQuad(c+417,"io_gpr_regs_19", false,-1, 63,0);
    tracep->declQuad(c+419,"io_gpr_regs_20", false,-1, 63,0);
    tracep->declQuad(c+421,"io_gpr_regs_21", false,-1, 63,0);
    tracep->declQuad(c+423,"io_gpr_regs_22", false,-1, 63,0);
    tracep->declQuad(c+425,"io_gpr_regs_23", false,-1, 63,0);
    tracep->declQuad(c+427,"io_gpr_regs_24", false,-1, 63,0);
    tracep->declQuad(c+429,"io_gpr_regs_25", false,-1, 63,0);
    tracep->declQuad(c+431,"io_gpr_regs_26", false,-1, 63,0);
    tracep->declQuad(c+433,"io_gpr_regs_27", false,-1, 63,0);
    tracep->declQuad(c+435,"io_gpr_regs_28", false,-1, 63,0);
    tracep->declQuad(c+437,"io_gpr_regs_29", false,-1, 63,0);
    tracep->declQuad(c+439,"io_gpr_regs_30", false,-1, 63,0);
    tracep->declQuad(c+441,"io_gpr_regs_31", false,-1, 63,0);
    tracep->declQuad(c+443,"io_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+445,"io_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+447,"io_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+449,"io_csr_mcause", false,-1, 63,0);
    tracep->pushNamePrefix("TP_SRAM ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+71,"io_aw_valid", false,-1);
    tracep->declBus(c+72,"io_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_w_valid", false,-1);
    tracep->declQuad(c+73,"io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+76,"io_ar_valid", false,-1);
    tracep->declBus(c+77,"io_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_aw_ready", false,-1);
    tracep->declBit(c+71,"io_w_ready", false,-1);
    tracep->declBit(c+78,"io_b_valid", false,-1);
    tracep->declBit(c+76,"io_ar_ready", false,-1);
    tracep->declBit(c+79,"io_r_valid", false,-1);
    tracep->declQuad(c+451,"io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+78,"rWriteStatuOK", false,-1);
    tracep->declBit(c+79,"rReadStatuOK", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+79,"iRen", false,-1, 0,0);
    tracep->declBus(c+78,"iWen", false,-1, 0,0);
    tracep->declBus(c+77,"iReadAddr", false,-1, 31,0);
    tracep->declBus(c+72,"iWriteAddr", false,-1, 31,0);
    tracep->declBus(c+75,"iByteMask", false,-1, 7,0);
    tracep->declQuad(c+73,"iWriteData", false,-1, 63,0);
    tracep->declQuad(c+451,"oReadData", false,-1, 63,0);
    tracep->declQuad(c+80,"readAddr", false,-1, 63,0);
    tracep->declQuad(c+82,"writeAddr", false,-1, 63,0);
    tracep->declQuad(c+73,"writeData", false,-1, 63,0);
    tracep->declBus(c+84,"writeLen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+85,"InstFetch_ar_valid", false,-1);
    tracep->declBus(c+86,"InstFetch_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"LoadStore_aw_valid", false,-1);
    tracep->declBus(c+72,"LoadStore_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"LoadStore_w_valid", false,-1);
    tracep->declQuad(c+73,"LoadStore_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"LoadStore_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"LoadStore_ar_valid", false,-1);
    tracep->declBus(c+72,"LoadStore_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"Arbiter_aw_ready", false,-1);
    tracep->declBit(c+71,"Arbiter_w_ready", false,-1);
    tracep->declBit(c+78,"Arbiter_b_valid", false,-1);
    tracep->declBit(c+76,"Arbiter_ar_ready", false,-1);
    tracep->declBit(c+79,"Arbiter_r_valid", false,-1);
    tracep->declQuad(c+451,"Arbiter_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+88,"InstFetch_ar_ready", false,-1);
    tracep->declBit(c+89,"InstFetch_r_valid", false,-1);
    tracep->declQuad(c+369,"InstFetch_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+71,"LoadStore_aw_ready", false,-1);
    tracep->declBit(c+71,"LoadStore_w_ready", false,-1);
    tracep->declBit(c+78,"LoadStore_b_valid", false,-1);
    tracep->declBit(c+90,"LoadStore_ar_ready", false,-1);
    tracep->declBit(c+91,"LoadStore_r_valid", false,-1);
    tracep->declQuad(c+371,"LoadStore_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+71,"Arbiter_aw_valid", false,-1);
    tracep->declBus(c+72,"Arbiter_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"Arbiter_w_valid", false,-1);
    tracep->declQuad(c+73,"Arbiter_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"Arbiter_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+76,"Arbiter_ar_valid", false,-1);
    tracep->declBus(c+77,"Arbiter_ar_bits_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+88,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+89,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+369,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+78,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+90,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+371,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+73,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+92,"dataBuffer_0_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+94,"dataBuffer_0_cf_pc", false,-1, 63,0);
    tracep->declBit(c+96,"dataBuffer_0_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+97,"dataBuffer_0_ctrl_srcAType", false,-1);
    tracep->declBit(c+98,"dataBuffer_0_ctrl_srcBType", false,-1);
    tracep->declBus(c+99,"dataBuffer_0_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+100,"dataBuffer_0_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+101,"dataBuffer_0_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+102,"dataBuffer_0_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+103,"dataBuffer_0_ctrl_rfWen", false,-1);
    tracep->declBus(c+104,"dataBuffer_0_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+105,"dataBuffer_0_data_imm", false,-1, 63,0);
    tracep->declBit(c+107,"ringBufferHead", false,-1);
    tracep->declBit(c+1,"ringBufferTail", false,-1);
    tracep->declBit(c+453,"ringBufferAllowin", false,-1);
    tracep->declBus(c+108,"enqueueSize", false,-1, 1,0);
    tracep->declQuad(c+2,"c", false,-1, 63,0);
    tracep->pushNamePrefix("backend ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+109,"io_in_0_valid", false,-1);
    tracep->declQuad(c+92,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+94,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+96,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+97,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+98,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+99,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+100,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+101,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+102,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+103,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+104,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+105,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+454,"io_in_1_valid", false,-1);
    tracep->declBus(c+110,"io_flush", false,-1, 1,0);
    tracep->declBit(c+71,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+78,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+90,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+371,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+111,"io_in_0_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+73,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+115,"valid", false,-1);
    tracep->declQuad(c+116,"exu_io_in_bits_r_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+118,"exu_io_in_bits_r_cf_pc", false,-1, 63,0);
    tracep->declBit(c+120,"exu_io_in_bits_r_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+121,"exu_io_in_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+122,"exu_io_in_bits_r_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+123,"exu_io_in_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"exu_io_in_bits_r_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+125,"exu_io_in_bits_r_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+127,"exu_io_in_bits_r_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+129,"exu_io_in_bits_r_data_imm", false,-1, 63,0);
    tracep->declBit(c+4,"valid_1", false,-1);
    tracep->declQuad(c+5,"wbu_io_in_bits_r_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"wbu_io_in_bits_r_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"wbu_io_in_bits_r_decode_cf_redirect_target", false,-1, 63,0);
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
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+115,"io_in_valid", false,-1);
    tracep->declQuad(c+116,"io_in_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_in_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+120,"io_in_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+121,"io_in_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+122,"io_in_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+123,"io_in_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"io_in_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+125,"io_in_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+129,"io_in_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+114,"io_flush", false,-1);
    tracep->declBit(c+71,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+78,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+90,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+371,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+131,"io_in_ready", false,-1);
    tracep->declBit(c+132,"io_out_valid", false,-1);
    tracep->declQuad(c+116,"io_out_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_out_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+455,"io_out_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+133,"io_out_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+121,"io_out_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+134,"io_out_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+124,"io_out_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+135,"io_out_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+373,"io_out_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+137,"io_out_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+139,"io_out_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+73,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+115,"io_forward_valid", false,-1);
    tracep->declBit(c+123,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+124,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+375,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+121,"io_forward_fuType", false,-1, 2,0);
    tracep->declQuad(c+25,"c", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+141,"io_in_valid", false,-1);
    tracep->declQuad(c+125,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+122,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+116,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_cfIn_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"io_offset", false,-1, 63,0);
    tracep->declBit(c+141,"io_out_valid", false,-1);
    tracep->declQuad(c+135,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+142,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+144,"io_redirect_valid", false,-1);
    tracep->declArray(c+145,"adderRes", false,-1, 64,0);
    tracep->declQuad(c+148,"xorRes", false,-1, 63,0);
    tracep->declBit(c+150,"slt", false,-1);
    tracep->declQuad(c+151,"shsrcA", false,-1, 63,0);
    tracep->declBus(c+153,"shamt", false,-1, 5,0);
    tracep->declQuad(c+154,"target", false,-1, 63,0);
    tracep->declQuad(c+27,"c", false,-1, 63,0);
    tracep->declQuad(c+29,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+156,"io_in_valid", false,-1);
    tracep->declQuad(c+125,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+122,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+116,"io_cfIn_instr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_cfIn_pc", false,-1, 63,0);
    tracep->declBit(c+120,"io_cfIn_exceptionVec_2", false,-1);
    tracep->declBit(c+157,"io_cfIn_exceptionVec_4", false,-1);
    tracep->declBit(c+158,"io_cfIn_exceptionVec_6", false,-1);
    tracep->declBit(c+159,"io_instrValid", false,-1);
    tracep->declQuad(c+139,"io_out_bits", false,-1, 63,0);
    tracep->declQuad(c+457,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+160,"io_redirect_valid", false,-1);
    tracep->declBit(c+161,"io_wenFix", false,-1);
    tracep->declQuad(c+31,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+33,"mcause", false,-1, 63,0);
    tracep->declQuad(c+35,"mepc", false,-1, 63,0);
    tracep->declQuad(c+37,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+39,"satp", false,-1, 63,0);
    tracep->declBus(c+41,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+162,"csri", false,-1, 63,0);
    tracep->declBit(c+164,"isIllegalAccess", false,-1);
    tracep->declBit(c+165,"resetSatp", false,-1);
    tracep->declBit(c+166,"raiseExceptionIntr", false,-1);
    tracep->declQuad(c+37,"csr_0", false,-1, 63,0);
    tracep->declQuad(c+31,"csr_1", false,-1, 63,0);
    tracep->declQuad(c+35,"csr_2", false,-1, 63,0);
    tracep->declQuad(c+33,"csr_3", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+167,"io_in_valid", false,-1);
    tracep->declQuad(c+125,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+129,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+122,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+127,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+78,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+90,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+371,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+168,"io_out_valid", false,-1);
    tracep->declQuad(c+373,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+73,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+157,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+158,"io_ioStoreAddrMisaligned", false,-1);
    tracep->pushNamePrefix("lsExecUnit ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+167,"io_in_valid", false,-1);
    tracep->declQuad(c+169,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declBus(c+122,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+127,"io_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_ready", false,-1);
    tracep->declBit(c+71,"io_dmem_w_ready", false,-1);
    tracep->declBit(c+78,"io_dmem_b_valid", false,-1);
    tracep->declBit(c+90,"io_dmem_ar_ready", false,-1);
    tracep->declBit(c+91,"io_dmem_r_valid", false,-1);
    tracep->declQuad(c+371,"io_dmem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+168,"io_out_valid", false,-1);
    tracep->declQuad(c+373,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+71,"io_dmem_aw_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+71,"io_dmem_w_valid", false,-1);
    tracep->declQuad(c+73,"io_dmem_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+75,"io_dmem_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+87,"io_dmem_ar_valid", false,-1);
    tracep->declBus(c+72,"io_dmem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+157,"io_ioLoadAddrMisaligned", false,-1);
    tracep->declBit(c+158,"io_ioStoreAddrMisaligned", false,-1);
    tracep->declQuad(c+42,"addrLatch", false,-1, 63,0);
    tracep->declBit(c+171,"isStore", false,-1);
    tracep->declBit(c+172,"partialLoad", false,-1);
    tracep->declBus(c+44,"state", false,-1, 1,0);
    tracep->declBus(c+173,"reqWmask", false,-1, 14,0);
    tracep->declBit(c+71,"wValid", false,-1);
    tracep->declQuad(c+45,"c", false,-1, 63,0);
    tracep->declQuad(c+47,"rdataLatch", false,-1, 63,0);
    tracep->declQuad(c+49,"c_1", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mdu ");
    tracep->declQuad(c+125,"io_in_bits_srcA", false,-1, 63,0);
    tracep->declQuad(c+127,"io_in_bits_srcB", false,-1, 63,0);
    tracep->declBus(c+122,"io_in_bits_ctrl", false,-1, 6,0);
    tracep->declQuad(c+137,"io_out_bits", false,-1, 63,0);
    tracep->declBit(c+174,"isDivSign", false,-1);
    tracep->declQuad(c+175,"res", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declQuad(c+177,"io_in_bits_0", false,-1, 63,0);
    tracep->declQuad(c+179,"io_in_bits_1", false,-1, 63,0);
    tracep->declArray(c+181,"io_out_bits", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declArray(c+185,"io_in_bits_0", false,-1, 64,0);
    tracep->declArray(c+188,"io_in_bits_1", false,-1, 64,0);
    tracep->declArray(c+191,"io_out_bits", false,-1, 129,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+109,"io_in_0_valid", false,-1);
    tracep->declQuad(c+92,"io_in_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+94,"io_in_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+96,"io_in_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+97,"io_in_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+98,"io_in_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+99,"io_in_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+100,"io_in_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+101,"io_in_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+102,"io_in_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+103,"io_in_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+104,"io_in_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+105,"io_in_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+131,"io_out_ready", false,-1);
    tracep->declBit(c+51,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+196,"io_wb_rfData", false,-1, 63,0);
    tracep->declBit(c+115,"io_forward_valid", false,-1);
    tracep->declBit(c+123,"io_forward_wb_rfWen", false,-1);
    tracep->declBus(c+124,"io_forward_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+375,"io_forward_wb_rfData", false,-1, 63,0);
    tracep->declBus(c+121,"io_forward_fuType", false,-1, 2,0);
    tracep->declBit(c+114,"io_flush", false,-1);
    tracep->declBit(c+111,"io_in_0_ready", false,-1);
    tracep->declBit(c+198,"io_out_valid", false,-1);
    tracep->declQuad(c+92,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+94,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+96,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBus(c+99,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+100,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBit(c+103,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+104,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+459,"io_out_bits_data_srcA", false,-1, 63,0);
    tracep->declQuad(c+461,"io_out_bits_data_srcB", false,-1, 63,0);
    tracep->declQuad(c+105,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+199,"forwardRfWen", false,-1);
    tracep->declBit(c+200,"dontForward", false,-1);
    tracep->declBit(c+201,"srcADependEX", false,-1);
    tracep->declBit(c+202,"srcBDependEX", false,-1);
    tracep->declBit(c+203,"srcAForwardNextCycle", false,-1);
    tracep->declBit(c+204,"srcBForwardNextCycle", false,-1);
    tracep->declBit(c+205,"srcAForward", false,-1);
    tracep->declBit(c+206,"srcBForward", false,-1);
    tracep->declBus(c+52,"busy", false,-1, 31,0);
    tracep->declQuad(c+207,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+209,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+211,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+213,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+215,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+217,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+219,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+221,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+223,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+225,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+227,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+229,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+231,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+233,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+235,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+237,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+239,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+241,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+243,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+245,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+247,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+249,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+251,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+253,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+255,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+257,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+259,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+261,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+263,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+265,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+267,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+269,"gpr_31", false,-1, 63,0);
    tracep->pushNamePrefix("rf_ext ");
    tracep->declBus(c+463,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R0_en", false,-1);
    tracep->declBit(c+377,"R0_clk", false,-1);
    tracep->declBus(c+465,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R1_en", false,-1);
    tracep->declBit(c+377,"R1_clk", false,-1);
    tracep->declBus(c+466,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R2_en", false,-1);
    tracep->declBit(c+377,"R2_clk", false,-1);
    tracep->declBus(c+467,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R3_en", false,-1);
    tracep->declBit(c+377,"R3_clk", false,-1);
    tracep->declBus(c+468,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R4_en", false,-1);
    tracep->declBit(c+377,"R4_clk", false,-1);
    tracep->declBus(c+469,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R5_en", false,-1);
    tracep->declBit(c+377,"R5_clk", false,-1);
    tracep->declBus(c+470,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R6_en", false,-1);
    tracep->declBit(c+377,"R6_clk", false,-1);
    tracep->declBus(c+471,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R7_en", false,-1);
    tracep->declBit(c+377,"R7_clk", false,-1);
    tracep->declBus(c+472,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R8_en", false,-1);
    tracep->declBit(c+377,"R8_clk", false,-1);
    tracep->declBus(c+473,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R9_en", false,-1);
    tracep->declBit(c+377,"R9_clk", false,-1);
    tracep->declBus(c+474,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R10_en", false,-1);
    tracep->declBit(c+377,"R10_clk", false,-1);
    tracep->declBus(c+475,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R11_en", false,-1);
    tracep->declBit(c+377,"R11_clk", false,-1);
    tracep->declBus(c+476,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R12_en", false,-1);
    tracep->declBit(c+377,"R12_clk", false,-1);
    tracep->declBus(c+477,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R13_en", false,-1);
    tracep->declBit(c+377,"R13_clk", false,-1);
    tracep->declBus(c+478,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R14_en", false,-1);
    tracep->declBit(c+377,"R14_clk", false,-1);
    tracep->declBus(c+479,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R15_en", false,-1);
    tracep->declBit(c+377,"R15_clk", false,-1);
    tracep->declBus(c+480,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R16_en", false,-1);
    tracep->declBit(c+377,"R16_clk", false,-1);
    tracep->declBus(c+481,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R17_en", false,-1);
    tracep->declBit(c+377,"R17_clk", false,-1);
    tracep->declBus(c+482,"R18_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R18_en", false,-1);
    tracep->declBit(c+377,"R18_clk", false,-1);
    tracep->declBus(c+483,"R19_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R19_en", false,-1);
    tracep->declBit(c+377,"R19_clk", false,-1);
    tracep->declBus(c+484,"R20_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R20_en", false,-1);
    tracep->declBit(c+377,"R20_clk", false,-1);
    tracep->declBus(c+485,"R21_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R21_en", false,-1);
    tracep->declBit(c+377,"R21_clk", false,-1);
    tracep->declBus(c+486,"R22_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R22_en", false,-1);
    tracep->declBit(c+377,"R22_clk", false,-1);
    tracep->declBus(c+487,"R23_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R23_en", false,-1);
    tracep->declBit(c+377,"R23_clk", false,-1);
    tracep->declBus(c+488,"R24_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R24_en", false,-1);
    tracep->declBit(c+377,"R24_clk", false,-1);
    tracep->declBus(c+489,"R25_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R25_en", false,-1);
    tracep->declBit(c+377,"R25_clk", false,-1);
    tracep->declBus(c+490,"R26_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R26_en", false,-1);
    tracep->declBit(c+377,"R26_clk", false,-1);
    tracep->declBus(c+491,"R27_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R27_en", false,-1);
    tracep->declBit(c+377,"R27_clk", false,-1);
    tracep->declBus(c+492,"R28_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R28_en", false,-1);
    tracep->declBit(c+377,"R28_clk", false,-1);
    tracep->declBus(c+493,"R29_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R29_en", false,-1);
    tracep->declBit(c+377,"R29_clk", false,-1);
    tracep->declBus(c+494,"R30_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R30_en", false,-1);
    tracep->declBit(c+377,"R30_clk", false,-1);
    tracep->declBus(c+495,"R31_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R31_en", false,-1);
    tracep->declBit(c+377,"R31_clk", false,-1);
    tracep->declBus(c+101,"R32_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R32_en", false,-1);
    tracep->declBit(c+377,"R32_clk", false,-1);
    tracep->declBus(c+102,"R33_addr", false,-1, 4,0);
    tracep->declBit(c+464,"R33_en", false,-1);
    tracep->declBit(c+377,"R33_clk", false,-1);
    tracep->declBus(c+12,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+51,"W0_en", false,-1);
    tracep->declBit(c+377,"W0_clk", false,-1);
    tracep->declQuad(c+196,"W0_data", false,-1, 63,0);
    tracep->declQuad(c+207,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+227,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+229,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+231,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+233,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+235,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+237,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+239,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+241,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+243,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+245,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+209,"R11_data", false,-1, 63,0);
    tracep->declQuad(c+247,"R12_data", false,-1, 63,0);
    tracep->declQuad(c+249,"R13_data", false,-1, 63,0);
    tracep->declQuad(c+251,"R14_data", false,-1, 63,0);
    tracep->declQuad(c+253,"R15_data", false,-1, 63,0);
    tracep->declQuad(c+255,"R16_data", false,-1, 63,0);
    tracep->declQuad(c+257,"R17_data", false,-1, 63,0);
    tracep->declQuad(c+259,"R18_data", false,-1, 63,0);
    tracep->declQuad(c+261,"R19_data", false,-1, 63,0);
    tracep->declQuad(c+263,"R20_data", false,-1, 63,0);
    tracep->declQuad(c+265,"R21_data", false,-1, 63,0);
    tracep->declQuad(c+211,"R22_data", false,-1, 63,0);
    tracep->declQuad(c+267,"R23_data", false,-1, 63,0);
    tracep->declQuad(c+269,"R24_data", false,-1, 63,0);
    tracep->declQuad(c+213,"R25_data", false,-1, 63,0);
    tracep->declQuad(c+215,"R26_data", false,-1, 63,0);
    tracep->declQuad(c+217,"R27_data", false,-1, 63,0);
    tracep->declQuad(c+219,"R28_data", false,-1, 63,0);
    tracep->declQuad(c+221,"R29_data", false,-1, 63,0);
    tracep->declQuad(c+223,"R30_data", false,-1, 63,0);
    tracep->declQuad(c+225,"R31_data", false,-1, 63,0);
    tracep->declQuad(c+271,"R32_data", false,-1, 63,0);
    tracep->declQuad(c+273,"R33_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+275+i*2,"Memory", true,(i+0), 63,0);
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
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+4,"io_in_valid", false,-1);
    tracep->declQuad(c+5,"io_in_bits_decode_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+7,"io_in_bits_decode_cf_pc", false,-1, 63,0);
    tracep->declQuad(c+112,"io_in_bits_decode_cf_redirect_target", false,-1, 63,0);
    tracep->declBit(c+9,"io_in_bits_decode_cf_redirect_valid", false,-1);
    tracep->declBus(c+10,"io_in_bits_decode_ctrl_fuType", false,-1, 2,0);
    tracep->declBit(c+11,"io_in_bits_decode_ctrl_rfWen", false,-1);
    tracep->declBus(c+12,"io_in_bits_decode_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+13,"io_in_bits_commits_0", false,-1, 63,0);
    tracep->declQuad(c+15,"io_in_bits_commits_1", false,-1, 63,0);
    tracep->declQuad(c+17,"io_in_bits_commits_2", false,-1, 63,0);
    tracep->declQuad(c+19,"io_in_bits_commits_3", false,-1, 63,0);
    tracep->declBit(c+51,"io_wb_rfWen", false,-1);
    tracep->declBus(c+12,"io_wb_rfDest", false,-1, 4,0);
    tracep->declQuad(c+196,"io_wb_rfData", false,-1, 63,0);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declQuad(c+53,"c", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("frontend ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+88,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+89,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+369,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+339,"io_out_0_ready", false,-1);
    tracep->declBit(c+464,"io_out_1_ready", false,-1);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+85,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+340,"io_out_0_valid", false,-1);
    tracep->declQuad(c+341,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+345,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+346,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+347,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+348,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+349,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+350,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+351,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+352,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+353,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+354,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_1_valid", false,-1);
    tracep->declQuad(c+497,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+497,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+499,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+500,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+497,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->declBus(c+356,"io_flushVec", false,-1, 3,0);
    tracep->declBit(c+340,"valid", false,-1);
    tracep->declQuad(c+341,"idu_io_in_0_bits_r_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"idu_io_in_0_bits_r_pc", false,-1, 63,0);
    tracep->declQuad(c+357,"idu_io_in_0_bits_r_pnpc", false,-1, 63,0);
    tracep->declQuad(c+55,"c", false,-1, 63,0);
    tracep->declQuad(c+57,"c_1", false,-1, 63,0);
    tracep->declQuad(c+59,"c_2", false,-1, 63,0);
    tracep->declQuad(c+61,"c_3", false,-1, 63,0);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+340,"io_in_0_valid", false,-1);
    tracep->declQuad(c+341,"io_in_0_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"io_in_0_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+357,"io_in_0_bits_pnpc", false,-1, 63,0);
    tracep->declBit(c+339,"io_out_0_ready", false,-1);
    tracep->declBit(c+464,"io_out_1_ready", false,-1);
    tracep->declBit(c+85,"io_in_0_ready", false,-1);
    tracep->declBit(c+340,"io_out_0_valid", false,-1);
    tracep->declQuad(c+341,"io_out_0_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"io_out_0_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+345,"io_out_0_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+346,"io_out_0_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+347,"io_out_0_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+348,"io_out_0_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+349,"io_out_0_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+350,"io_out_0_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+351,"io_out_0_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+352,"io_out_0_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+353,"io_out_0_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+354,"io_out_0_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_1_valid", false,-1);
    tracep->declQuad(c+497,"io_out_1_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+497,"io_out_1_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_1_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+499,"io_out_1_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+500,"io_out_1_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+496,"io_out_1_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+463,"io_out_1_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+497,"io_out_1_bits_data_imm", false,-1, 63,0);
    tracep->pushNamePrefix("decoder1 ");
    tracep->declBit(c+340,"io_in_valid", false,-1);
    tracep->declQuad(c+341,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+339,"io_out_ready", false,-1);
    tracep->declBit(c+85,"io_in_ready", false,-1);
    tracep->declBit(c+340,"io_out_valid", false,-1);
    tracep->declQuad(c+341,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+343,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+345,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+346,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+347,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+348,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+349,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+350,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+351,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+352,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+353,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+354,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+359,"io_isWFI", false,-1);
    tracep->declBus(c+360,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+361,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+362,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder2 ");
    tracep->declBit(c+496,"io_in_valid", false,-1);
    tracep->declQuad(c+497,"io_in_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+497,"io_in_bits_pc", false,-1, 63,0);
    tracep->declBit(c+464,"io_out_ready", false,-1);
    tracep->declBit(c+464,"io_in_ready", false,-1);
    tracep->declBit(c+496,"io_out_valid", false,-1);
    tracep->declQuad(c+497,"io_out_bits_cf_instr", false,-1, 63,0);
    tracep->declQuad(c+497,"io_out_bits_cf_pc", false,-1, 63,0);
    tracep->declBit(c+496,"io_out_bits_cf_exceptionVec_2", false,-1);
    tracep->declBit(c+496,"io_out_bits_ctrl_srcAType", false,-1);
    tracep->declBit(c+496,"io_out_bits_ctrl_srcBType", false,-1);
    tracep->declBus(c+499,"io_out_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+500,"io_out_bits_ctrl_fuCtrl", false,-1, 6,0);
    tracep->declBus(c+463,"io_out_bits_ctrl_rfSrcA", false,-1, 4,0);
    tracep->declBus(c+463,"io_out_bits_ctrl_rfSrcB", false,-1, 4,0);
    tracep->declBit(c+496,"io_out_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+463,"io_out_bits_ctrl_rfDest", false,-1, 4,0);
    tracep->declQuad(c+497,"io_out_bits_data_imm", false,-1, 63,0);
    tracep->declBit(c+496,"io_isWFI", false,-1);
    tracep->declBus(c+501,"decodeList_0", false,-1, 2,0);
    tracep->declBus(c+502,"decodeList_1", false,-1, 1,0);
    tracep->declBus(c+500,"decodeList_2", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBit(c+88,"io_imem_ar_ready", false,-1);
    tracep->declBit(c+89,"io_imem_r_valid", false,-1);
    tracep->declQuad(c+369,"io_imem_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+85,"io_out_ready", false,-1);
    tracep->declQuad(c+112,"io_redirect_target", false,-1, 63,0);
    tracep->declBit(c+114,"io_redirect_valid", false,-1);
    tracep->declBit(c+85,"io_imem_ar_valid", false,-1);
    tracep->declBus(c+86,"io_imem_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+363,"io_out_valid", false,-1);
    tracep->declQuad(c+369,"io_out_bits_instr", false,-1, 63,0);
    tracep->declQuad(c+364,"io_out_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+366,"io_out_bits_pnpc", false,-1, 63,0);
    tracep->declBus(c+356,"io_flushVec", false,-1, 3,0);
    tracep->declQuad(c+364,"pc", false,-1, 63,0);
    tracep->declQuad(c+366,"snpc", false,-1, 63,0);
    tracep->declQuad(c+63,"c", false,-1, 63,0);
    tracep->declQuad(c+65,"c_1", false,-1, 63,0);
    tracep->declQuad(c+67,"c_2", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+69,"npc", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"wen", false,-1);
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
    bufp->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c_1),64);
    bufp->fullQData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec),64);
    bufp->fullQData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause),64);
    bufp->fullQData(oldp+35,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc),64);
    bufp->fullQData(oldp+37,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus),64);
    bufp->fullQData(oldp+39,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp),64);
    bufp->fullCData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode),2);
    bufp->fullQData(oldp+42,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch),64);
    bufp->fullCData(oldp+44,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state),2);
    bufp->fullQData(oldp+45,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c),64);
    bufp->fullQData(oldp+47,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch),64);
    bufp->fullQData(oldp+49,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1),64);
    bufp->fullBit(oldp+51,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T));
    bufp->fullIData(oldp+52,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy),32);
    bufp->fullQData(oldp+53,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c),64);
    bufp->fullQData(oldp+55,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c),64);
    bufp->fullQData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_1),64);
    bufp->fullQData(oldp+59,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_2),64);
    bufp->fullQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__c_3),64);
    bufp->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c),64);
    bufp->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1),64);
    bufp->fullQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2),64);
    bufp->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__npc),64);
    bufp->fullBit(oldp+71,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid));
    bufp->fullIData(oldp+72,((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)),32);
    bufp->fullQData(oldp+73,((((0U != (3U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl)))
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
    bufp->fullCData(oldp+75,(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb),8);
    bufp->fullBit(oldp+76,(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready));
    bufp->fullIData(oldp+77,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                   : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                       : 0U)))),32);
    bufp->fullBit(oldp+78,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK));
    bufp->fullBit(oldp+79,(vlSelf->SimTop__DOT__TP_SRAM__DOT__rReadStatuOK));
    bufp->fullQData(oldp+80,((QData)((IData)(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T)
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                               : ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_2)
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__arbiter__DOT___T_4)
                                                    ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA)
                                                    : 0U)))))),64);
    bufp->fullQData(oldp+82,((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))),64);
    bufp->fullIData(oldp+84,((0xffU & (((IData)(vlSelf->SimTop__DOT___arbiter_Arbiter_w_bits_strb) 
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
    bufp->fullBit(oldp+85,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready));
    bufp->fullIData(oldp+86,((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+87,(vlSelf->SimTop__DOT___core_io_dmem_ar_valid));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0) 
                            & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+89,(vlSelf->SimTop__DOT___arbiter_InstFetch_r_valid));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->SimTop__DOT__arbiter__DOT___GEN) 
                            & (IData)(vlSelf->SimTop__DOT___TP_SRAM_io_ar_ready))));
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_valid));
    bufp->fullQData(oldp+92,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_instr),64);
    bufp->fullQData(oldp+94,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_pc),64);
    bufp->fullBit(oldp+96,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2));
    bufp->fullBit(oldp+97,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType));
    bufp->fullBit(oldp+98,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType));
    bufp->fullCData(oldp+99,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType),3);
    bufp->fullCData(oldp+100,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl),7);
    bufp->fullCData(oldp+101,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA),5);
    bufp->fullCData(oldp+102,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB),5);
    bufp->fullBit(oldp+103,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen));
    bufp->fullCData(oldp+104,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest),5);
    bufp->fullQData(oldp+105,(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_data_imm),64);
    bufp->fullBit(oldp+107,(vlSelf->SimTop__DOT__core__DOT__ringBufferHead));
    bufp->fullCData(oldp+108,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid),2);
    bufp->fullBit(oldp+109,(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T));
    bufp->fullCData(oldp+110,((3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+111,((1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T)) 
                                   | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1)))));
    bufp->fullQData(oldp+112,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target),64);
    bufp->fullBit(oldp+114,(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush));
    bufp->fullBit(oldp+115,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__valid));
    bufp->fullQData(oldp+116,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr),64);
    bufp->fullQData(oldp+118,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc),64);
    bufp->fullBit(oldp+120,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2));
    bufp->fullCData(oldp+121,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+122,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl),7);
    bufp->fullBit(oldp+123,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+124,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest),5);
    bufp->fullQData(oldp+125,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA),64);
    bufp->fullQData(oldp+127,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB),64);
    bufp->fullQData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm),64);
    bufp->fullBit(oldp+131,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready));
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              ? (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                              : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                                 & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                       >> 4U))))));
    bufp->fullBit(oldp+134,(((~ (((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN)) 
                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3)) 
                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3) 
                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3) 
                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2))))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen))));
    bufp->fullQData(oldp+135,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits),64);
    bufp->fullQData(oldp+137,(((8U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)))
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res)),64);
    bufp->fullQData(oldp+139,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18),64);
    bufp->fullBit(oldp+141,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid));
    bufp->fullQData(oldp+142,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)
                                ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
                                : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target)),64);
    bufp->fullBit(oldp+144,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid) 
                             & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)) 
                                & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl) 
                                   >> 4U)))));
    bufp->fullWData(oldp+145,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes),65);
    bufp->fullQData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes),64);
    bufp->fullBit(oldp+150,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt));
    bufp->fullQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA),64);
    bufp->fullCData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target),64);
    bufp->fullBit(oldp+156,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3));
    bufp->fullBit(oldp+157,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3));
    bufp->fullBit(oldp+158,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2));
    bufp->fullBit(oldp+159,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid));
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid));
    bufp->fullBit(oldp+161,((0U != (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN))));
    bufp->fullQData(oldp+162,((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr 
                                                          >> 0xfU)))))),64);
    bufp->fullBit(oldp+164,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess));
    bufp->fullBit(oldp+165,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp));
    bufp->fullBit(oldp+166,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr));
    bufp->fullBit(oldp+167,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3));
    bufp->fullBit(oldp+168,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10));
    bufp->fullQData(oldp+169,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA),64);
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore));
    bufp->fullBit(oldp+172,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad));
    bufp->fullSData(oldp+173,((0x7fffU & ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0) 
                                          << (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA))))),15);
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign));
    bufp->fullQData(oldp+175,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res),64);
    bufp->fullQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0),64);
    bufp->fullQData(oldp+179,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1),64);
    __Vtemp_h423c1b3d__0[0U] = vlSelf->__VdfgTmp_hf6fc2901__0[0U];
    __Vtemp_h423c1b3d__0[1U] = vlSelf->__VdfgTmp_hf6fc2901__0[1U];
    __Vtemp_h423c1b3d__0[2U] = vlSelf->__VdfgTmp_hf6fc2901__0[2U];
    __Vtemp_h423c1b3d__0[3U] = 0U;
    bufp->fullWData(oldp+181,(__Vtemp_h423c1b3d__0),128);
    bufp->fullWData(oldp+185,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0),65);
    bufp->fullWData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1),65);
    bufp->fullWData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits),130);
    bufp->fullQData(oldp+196,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1),64);
    bufp->fullBit(oldp+198,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1));
    bufp->fullBit(oldp+199,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen));
    bufp->fullBit(oldp+200,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward));
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX));
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX));
    bufp->fullBit(oldp+203,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle));
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle));
    bufp->fullBit(oldp+205,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward));
    bufp->fullBit(oldp+206,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward));
    bufp->fullQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0U]),64);
    bufp->fullQData(oldp+209,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [1U]),64);
    bufp->fullQData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [2U]),64);
    bufp->fullQData(oldp+213,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [3U]),64);
    bufp->fullQData(oldp+215,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [4U]),64);
    bufp->fullQData(oldp+217,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [5U]),64);
    bufp->fullQData(oldp+219,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [6U]),64);
    bufp->fullQData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [7U]),64);
    bufp->fullQData(oldp+223,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [8U]),64);
    bufp->fullQData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [9U]),64);
    bufp->fullQData(oldp+227,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xaU]),64);
    bufp->fullQData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xbU]),64);
    bufp->fullQData(oldp+231,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xcU]),64);
    bufp->fullQData(oldp+233,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xdU]),64);
    bufp->fullQData(oldp+235,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xeU]),64);
    bufp->fullQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0xfU]),64);
    bufp->fullQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x10U]),64);
    bufp->fullQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x11U]),64);
    bufp->fullQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x12U]),64);
    bufp->fullQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x13U]),64);
    bufp->fullQData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x14U]),64);
    bufp->fullQData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x15U]),64);
    bufp->fullQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x16U]),64);
    bufp->fullQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x17U]),64);
    bufp->fullQData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x18U]),64);
    bufp->fullQData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x19U]),64);
    bufp->fullQData(oldp+259,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1aU]),64);
    bufp->fullQData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1bU]),64);
    bufp->fullQData(oldp+263,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1cU]),64);
    bufp->fullQData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1dU]),64);
    bufp->fullQData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1eU]),64);
    bufp->fullQData(oldp+269,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [0x1fU]),64);
    bufp->fullQData(oldp+271,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA]),64);
    bufp->fullQData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory
                              [vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB]),64);
    bufp->fullQData(oldp+275,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+285,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+287,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+289,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+291,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+293,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+295,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+297,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+299,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+303,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+307,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+309,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+311,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+313,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+315,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+317,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+319,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+321,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+323,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+325,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+327,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+329,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+331,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+333,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+335,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+337,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+339,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1));
    bufp->fullBit(oldp+340,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid));
    bufp->fullQData(oldp+341,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr),64);
    bufp->fullQData(oldp+343,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc),64);
    bufp->fullBit(oldp+345,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullBit(oldp+346,(((0x37U != (0x7fU & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19))));
    bufp->fullBit(oldp+347,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19));
    bufp->fullCData(oldp+348,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),3);
    bufp->fullCData(oldp+349,(((0U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1))
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
    bufp->fullCData(oldp+350,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0xfU))))),5);
    bufp->fullCData(oldp+351,(((IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19)
                                ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                         >> 0x14U))))),5);
    bufp->fullBit(oldp+352,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen));
    bufp->fullCData(oldp+353,(((IData)(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen)
                                ? (0x1fU & (IData)(
                                                   (vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr 
                                                    >> 7U)))
                                : 0U)),5);
    bufp->fullQData(oldp+354,(vlSelf->SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm),64);
    bufp->fullCData(oldp+356,((0xfU & (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush))))),4);
    bufp->fullQData(oldp+357,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc),64);
    bufp->fullBit(oldp+359,(((0x10500073U == (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr)) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__valid))));
    bufp->fullCData(oldp+360,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0),3);
    bufp->fullCData(oldp+361,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1),2);
    bufp->fullCData(oldp+362,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2),7);
    bufp->fullBit(oldp+363,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2));
    bufp->fullQData(oldp+364,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc),64);
    bufp->fullQData(oldp+366,((4ULL + vlSelf->SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc)),64);
    bufp->fullBit(oldp+368,(vlSelf->SimTop__DOT__core__DOT__unnamedblk1__DOT__wen));
    bufp->fullQData(oldp+369,(vlSelf->SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr),64);
    bufp->fullQData(oldp+371,(vlSelf->SimTop__DOT___arbiter_LoadStore_r_bits_data),64);
    bufp->fullQData(oldp+373,(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits),64);
    bufp->fullQData(oldp+375,(vlSelf->SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData),64);
    bufp->fullBit(oldp+377,(vlSelf->clock));
    bufp->fullBit(oldp+378,(vlSelf->reset));
    bufp->fullQData(oldp+379,(vlSelf->io_gpr_regs_0),64);
    bufp->fullQData(oldp+381,(vlSelf->io_gpr_regs_1),64);
    bufp->fullQData(oldp+383,(vlSelf->io_gpr_regs_2),64);
    bufp->fullQData(oldp+385,(vlSelf->io_gpr_regs_3),64);
    bufp->fullQData(oldp+387,(vlSelf->io_gpr_regs_4),64);
    bufp->fullQData(oldp+389,(vlSelf->io_gpr_regs_5),64);
    bufp->fullQData(oldp+391,(vlSelf->io_gpr_regs_6),64);
    bufp->fullQData(oldp+393,(vlSelf->io_gpr_regs_7),64);
    bufp->fullQData(oldp+395,(vlSelf->io_gpr_regs_8),64);
    bufp->fullQData(oldp+397,(vlSelf->io_gpr_regs_9),64);
    bufp->fullQData(oldp+399,(vlSelf->io_gpr_regs_10),64);
    bufp->fullQData(oldp+401,(vlSelf->io_gpr_regs_11),64);
    bufp->fullQData(oldp+403,(vlSelf->io_gpr_regs_12),64);
    bufp->fullQData(oldp+405,(vlSelf->io_gpr_regs_13),64);
    bufp->fullQData(oldp+407,(vlSelf->io_gpr_regs_14),64);
    bufp->fullQData(oldp+409,(vlSelf->io_gpr_regs_15),64);
    bufp->fullQData(oldp+411,(vlSelf->io_gpr_regs_16),64);
    bufp->fullQData(oldp+413,(vlSelf->io_gpr_regs_17),64);
    bufp->fullQData(oldp+415,(vlSelf->io_gpr_regs_18),64);
    bufp->fullQData(oldp+417,(vlSelf->io_gpr_regs_19),64);
    bufp->fullQData(oldp+419,(vlSelf->io_gpr_regs_20),64);
    bufp->fullQData(oldp+421,(vlSelf->io_gpr_regs_21),64);
    bufp->fullQData(oldp+423,(vlSelf->io_gpr_regs_22),64);
    bufp->fullQData(oldp+425,(vlSelf->io_gpr_regs_23),64);
    bufp->fullQData(oldp+427,(vlSelf->io_gpr_regs_24),64);
    bufp->fullQData(oldp+429,(vlSelf->io_gpr_regs_25),64);
    bufp->fullQData(oldp+431,(vlSelf->io_gpr_regs_26),64);
    bufp->fullQData(oldp+433,(vlSelf->io_gpr_regs_27),64);
    bufp->fullQData(oldp+435,(vlSelf->io_gpr_regs_28),64);
    bufp->fullQData(oldp+437,(vlSelf->io_gpr_regs_29),64);
    bufp->fullQData(oldp+439,(vlSelf->io_gpr_regs_30),64);
    bufp->fullQData(oldp+441,(vlSelf->io_gpr_regs_31),64);
    bufp->fullQData(oldp+443,(vlSelf->io_csr_mstatus),64);
    bufp->fullQData(oldp+445,(vlSelf->io_csr_mtvec),64);
    bufp->fullQData(oldp+447,(vlSelf->io_csr_mepc),64);
    bufp->fullQData(oldp+449,(vlSelf->io_csr_mcause),64);
    bufp->fullQData(oldp+451,(vlSelf->SimTop__DOT___TP_SRAM_io_r_bits_data),64);
    bufp->fullBit(oldp+453,((((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead))) 
                              != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)) 
                             & ((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                                       - (IData)(2U))) 
                                != (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))));
    bufp->fullBit(oldp+454,((((IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferHead) 
                              != (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__ringBufferTail)))) 
                             & (IData)(vlSelf->SimTop__DOT__core__DOT___backend_io_in_0_valid_T))));
    bufp->fullQData(oldp+455,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid)
                                ? ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                                    ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                                    : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                                        ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                        : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))
                                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_h2f5e54fc__0)
                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT____VdfgTmp_ha1970278__0
                                    : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__target))),64);
    bufp->fullQData(oldp+457,(((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp)
                                ? (4ULL + vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc)
                                : ((IData)(vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr)
                                    ? vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec
                                    : vlSelf->SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc))),64);
    bufp->fullQData(oldp+459,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType)
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
    bufp->fullQData(oldp+461,((((IData)(vlSelf->SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType)
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
    bufp->fullCData(oldp+463,(0U),5);
    bufp->fullBit(oldp+464,(1U));
    bufp->fullCData(oldp+465,(0xaU),5);
    bufp->fullCData(oldp+466,(0xbU),5);
    bufp->fullCData(oldp+467,(0xcU),5);
    bufp->fullCData(oldp+468,(0xdU),5);
    bufp->fullCData(oldp+469,(0xeU),5);
    bufp->fullCData(oldp+470,(0xfU),5);
    bufp->fullCData(oldp+471,(0x10U),5);
    bufp->fullCData(oldp+472,(0x11U),5);
    bufp->fullCData(oldp+473,(0x12U),5);
    bufp->fullCData(oldp+474,(0x13U),5);
    bufp->fullCData(oldp+475,(1U),5);
    bufp->fullCData(oldp+476,(0x14U),5);
    bufp->fullCData(oldp+477,(0x15U),5);
    bufp->fullCData(oldp+478,(0x16U),5);
    bufp->fullCData(oldp+479,(0x17U),5);
    bufp->fullCData(oldp+480,(0x18U),5);
    bufp->fullCData(oldp+481,(0x19U),5);
    bufp->fullCData(oldp+482,(0x1aU),5);
    bufp->fullCData(oldp+483,(0x1bU),5);
    bufp->fullCData(oldp+484,(0x1cU),5);
    bufp->fullCData(oldp+485,(0x1dU),5);
    bufp->fullCData(oldp+486,(2U),5);
    bufp->fullCData(oldp+487,(0x1eU),5);
    bufp->fullCData(oldp+488,(0x1fU),5);
    bufp->fullCData(oldp+489,(3U),5);
    bufp->fullCData(oldp+490,(4U),5);
    bufp->fullCData(oldp+491,(5U),5);
    bufp->fullCData(oldp+492,(6U),5);
    bufp->fullCData(oldp+493,(7U),5);
    bufp->fullCData(oldp+494,(8U),5);
    bufp->fullCData(oldp+495,(9U),5);
    bufp->fullBit(oldp+496,(0U));
    bufp->fullQData(oldp+497,(0ULL),64);
    bufp->fullCData(oldp+499,(3U),3);
    bufp->fullCData(oldp+500,(0U),7);
    bufp->fullCData(oldp+501,(0U),3);
    bufp->fullCData(oldp+502,(3U),2);
}
