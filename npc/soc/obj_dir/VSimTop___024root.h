// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated.h"

class VSimTop__Syms;

class VSimTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ SimTop__DOT__TP_SRAM__DOT__rReadStatuOK;
        VL_IN8(reset,0,0);
        CData/*0:0*/ SimTop__DOT___TP_SRAM_io_ar_ready;
        CData/*0:0*/ SimTop__DOT___arbiter_InstFetch_r_valid;
        CData/*0:0*/ SimTop__DOT___arbiter_LoadStore_r_valid;
        CData/*7:0*/ SimTop__DOT___arbiter_Arbiter_w_bits_strb;
        CData/*0:0*/ SimTop__DOT___core_io_dmem_ar_valid;
        CData/*0:0*/ SimTop__DOT__core__DOT___frontend_io_out_0_bits_ctrl_rfWen;
        CData/*0:0*/ SimTop__DOT__core__DOT__dataBuffer_0_cf_exceptionVec_2;
        CData/*0:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcAType;
        CData/*0:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_srcBType;
        CData/*2:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuType;
        CData/*6:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_fuCtrl;
        CData/*4:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcA;
        CData/*4:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfSrcB;
        CData/*0:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfWen;
        CData/*4:0*/ SimTop__DOT__core__DOT__dataBuffer_0_ctrl_rfDest;
        CData/*0:0*/ SimTop__DOT__core__DOT__ringBufferHead;
        CData/*0:0*/ SimTop__DOT__core__DOT__ringBufferTail;
        CData/*0:0*/ SimTop__DOT__core__DOT___frontend_io_out_0_ready_T_1;
        CData/*0:0*/ SimTop__DOT__core__DOT___backend_io_in_0_valid_T;
        CData/*0:0*/ SimTop__DOT__core__DOT___dequeueSize_T;
        CData/*0:0*/ SimTop__DOT__core__DOT__unnamedblk1__DOT__wen;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT___idu_io_in_0_ready;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT___idu_io_out_0_valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___T_5;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT___io_out_valid_T_2;
        CData/*2:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_0;
        CData/*1:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_1;
        CData/*6:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT__decodeList_2;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcAType_T_19;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___srcBType_T_19;
        CData/*6:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT___GEN_4;
        CData/*0:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu__DOT__decoder1__DOT____VdfgTmp_hb4464a68__0;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT___exu_io_in_ready;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_exceptionVec_2;
        CData/*2:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuType;
        CData/*6:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_fuCtrl;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfWen;
        CData/*4:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_ctrl_rfDest;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__valid_1;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_valid;
        CData/*2:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_fuType;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfWen;
        CData/*4:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_ctrl_rfDest;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT____Vcellinp__isu__io_flush;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__forwardRfWen;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__dontForward;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcADependEX;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBDependEX;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForwardNextCycle;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForwardNextCycle;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcAForward;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__srcBForward;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_out_valid_T_1;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT___io_in_0_ready_T_1;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_1_T_3;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___fuValids_3_T_3;
    };
    struct {
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___io_out_valid_T_4;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__alu__io_in_valid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT____Vcellinp__csr__io_instrValid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__slt;
        CData/*5:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shamt;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioStoreAddrMisaligned_T_2;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_ioLoadAddrMisaligned_T_3;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__isStore;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__partialLoad;
        CData/*1:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__state;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__wValid;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT___io_out_valid_T_10;
        CData/*7:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__unnamedblk1__DOT___GEN_2;
        CData/*7:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h513adbfe__0;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__isDivSign;
        CData/*1:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__priviledgeMode;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wen_T_4;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__isIllegalAccess;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__resetSatp;
        CData/*6:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___GEN_0;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__raiseExceptionIntr;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_10;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__unnamedblk1__DOT___T_40;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT____VdfgTmp_h46ed3be2__0;
        CData/*0:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___io_wb_rfWen_T;
        CData/*0:0*/ SimTop__DOT__arbiter__DOT___T;
        CData/*0:0*/ SimTop__DOT__arbiter__DOT___T_2;
        CData/*0:0*/ SimTop__DOT__arbiter__DOT___T_4;
        CData/*0:0*/ SimTop__DOT__arbiter__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__arbiter__DOT____VdfgTmp_h8ed2ed50__0;
        CData/*0:0*/ __Vdly__SimTop__DOT__core__DOT__ringBufferHead;
        CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0;
        CData/*0:0*/ __Vdlyvset__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0;
        CData/*0:0*/ __Vdly__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ __Vdly__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rReadStatuOK;
        CData/*0:0*/ __Vtrigrprev__TOP__SimTop__DOT__TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__busy;
        VlWide<3>/*64:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__adderRes;
        VlWide<5>/*129:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT___mul_io_out_bits;
        VlWide<3>/*64:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_1;
        VlWide<3>/*64:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__mul__io_in_bits_0;
        VlWide<3>/*64:0*/ __VdfgTmp_hf6fc2901__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_gpr_regs_0,63,0);
        VL_OUT64(io_gpr_regs_1,63,0);
        VL_OUT64(io_gpr_regs_2,63,0);
        VL_OUT64(io_gpr_regs_3,63,0);
        VL_OUT64(io_gpr_regs_4,63,0);
        VL_OUT64(io_gpr_regs_5,63,0);
        VL_OUT64(io_gpr_regs_6,63,0);
        VL_OUT64(io_gpr_regs_7,63,0);
        VL_OUT64(io_gpr_regs_8,63,0);
        VL_OUT64(io_gpr_regs_9,63,0);
        VL_OUT64(io_gpr_regs_10,63,0);
        VL_OUT64(io_gpr_regs_11,63,0);
        VL_OUT64(io_gpr_regs_12,63,0);
        VL_OUT64(io_gpr_regs_13,63,0);
        VL_OUT64(io_gpr_regs_14,63,0);
        VL_OUT64(io_gpr_regs_15,63,0);
    };
    struct {
        VL_OUT64(io_gpr_regs_16,63,0);
        VL_OUT64(io_gpr_regs_17,63,0);
        VL_OUT64(io_gpr_regs_18,63,0);
        VL_OUT64(io_gpr_regs_19,63,0);
        VL_OUT64(io_gpr_regs_20,63,0);
        VL_OUT64(io_gpr_regs_21,63,0);
        VL_OUT64(io_gpr_regs_22,63,0);
        VL_OUT64(io_gpr_regs_23,63,0);
        VL_OUT64(io_gpr_regs_24,63,0);
        VL_OUT64(io_gpr_regs_25,63,0);
        VL_OUT64(io_gpr_regs_26,63,0);
        VL_OUT64(io_gpr_regs_27,63,0);
        VL_OUT64(io_gpr_regs_28,63,0);
        VL_OUT64(io_gpr_regs_29,63,0);
        VL_OUT64(io_gpr_regs_30,63,0);
        VL_OUT64(io_gpr_regs_31,63,0);
        VL_OUT64(io_csr_regs_0,63,0);
        VL_OUT64(io_csr_regs_1,63,0);
        VL_OUT64(io_csr_regs_2,63,0);
        VL_OUT64(io_csr_regs_3,63,0);
        QData/*63:0*/ SimTop__DOT___TP_SRAM_io_r_bits_data;
        QData/*63:0*/ SimTop__DOT___arbiter_LoadStore_r_bits_data;
        QData/*63:0*/ SimTop__DOT__core__DOT___frontend_io_out_0_bits_data_imm;
        QData/*63:0*/ SimTop__DOT__core__DOT__dataBuffer_0_cf_instr;
        QData/*63:0*/ SimTop__DOT__core__DOT__dataBuffer_0_cf_pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__dataBuffer_0_data_imm;
        QData/*63:0*/ SimTop__DOT__core__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT___ifu_io_out_bits_instr;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_instr;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__idu_io_in_0_bits_r_pnpc;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__c_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__c_2;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__c_3;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__snpc;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_2;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__c_3;
        QData/*63:0*/ SimTop__DOT__core__DOT__frontend__DOT__ifu__DOT__unnamedblk1__DOT__npc;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT___exu_io_forward_wb_rfData;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_instr;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_cf_pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcA;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_srcB;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu_io_in_bits_r_data_imm;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_instr;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_pc;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_decode_cf_redirect_target;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_0;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_2;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu_io_in_bits_r_commits_3;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__c_1;
        QData/*62:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___wbClearMask_T_6;
        QData/*62:0*/ SimTop__DOT__core__DOT__backend__DOT__isu__DOT__unnamedblk1__DOT___isuFireSetMask_T_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___csr_io_redirect_target;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___lsu_io_out_bits;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_out_bits;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT___alu_io_redirect_target;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__c;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__xorRes;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__shsrcA;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__alu__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT____Vcellinp__lsExecUnit__io_in_bits_srcA;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__addrLatch;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__rdataLatch;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT__c_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b41638d__0;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_h5b29ba84__0;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__lsu__DOT__lsExecUnit__DOT____VdfgTmp_hb190fabb__0;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT__res;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__mdu__DOT____Vcellinp__div__io_in_bits_0;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___rdata_T_18;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__mstatus;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__satp;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT___wdata_T_22;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__exu__DOT__csr__DOT__c_2;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu__DOT___GEN_1;
        QData/*63:0*/ SimTop__DOT__core__DOT__backend__DOT__wbu__DOT__c;
        QData/*63:0*/ __Vdlyvval__SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory__v0;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__core__DOT__backend__DOT__isu__DOT__rf_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSimTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimTop___024root(VSimTop__Syms* symsp, const char* v__name);
    ~VSimTop___024root();
    VL_UNCOPYABLE(VSimTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
