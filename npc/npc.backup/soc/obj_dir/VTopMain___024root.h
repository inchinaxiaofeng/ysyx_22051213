// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopMain.h for the primary calling header

#ifndef VERILATED_VTOPMAIN___024ROOT_H_
#define VERILATED_VTOPMAIN___024ROOT_H_  // guard

#include "verilated.h"

class VTopMain__Syms;

class VTopMain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
        VL_IN8(reset,0,0);
        VL_OUT8(debug_hazard_stallF,0,0);
        VL_OUT8(debug_hazard_stallD,0,0);
        VL_OUT8(debug_hazard_flushE,0,0);
        VL_OUT8(debug_hazard_hu_exu_ctrl_forwardA,1,0);
        VL_OUT8(debug_hazard_hu_exu_ctrl_forwardB,1,0);
        VL_OUT8(debug_hazard_hu_idu_ctrl_forwardA,1,0);
        VL_OUT8(debug_hazard_hu_idu_ctrl_forwardB,1,0);
        VL_OUT8(debug_forwardA_data,1,0);
        VL_OUT8(debug_forwardB_data,1,0);
        VL_OUT8(debug_forward_idu_A_data,1,0);
        VL_OUT8(debug_forward_idu_B_data,1,0);
        VL_OUT8(debug_rdD_data,4,0);
        VL_OUT8(debug_rdE_data,4,0);
        VL_OUT8(debug_rdM_data,4,0);
        VL_OUT8(debug_rdW_data,4,0);
        VL_OUT8(pipelineTrace_if_id_pcEnable,0,0);
        VL_OUT8(pipelineTrace_id_ex_pcEnable,0,0);
        VL_OUT8(pipelineTrace_ex_ls_pcEnable,0,0);
        VL_OUT8(pipelineTrace_ls_wb_pcEnable,0,0);
        VL_OUT8(pipelineTrace_rf_pcEnable,0,0);
        VL_OUT8(jumpTrace_instr_jump,0,0);
        VL_OUT8(jumpTrace_instr_branch,0,0);
        VL_OUT8(jumpTrace_instr_pcPlusSrc,0,0);
        VL_OUT8(jumpTrace_idu_pcSrc,0,0);
        VL_OUT8(jumpTrace_bruOutC,0,0);
        VL_OUT8(jumpTrace_bruCtrl,3,0);
        CData/*5:0*/ TopMain__DOT_____05FT_io_id_ex_IO_ctrl2EXU_aluCtrl;
        CData/*0:0*/ TopMain__DOT_____05FT_3_ioInternal_oFeedBackPCChange;
        CData/*0:0*/ TopMain__DOT__rNPCValid;
        CData/*0:0*/ TopMain__DOT__pcEnable_if_id;
        CData/*0:0*/ TopMain__DOT__pcEnable_id_ex;
        CData/*0:0*/ TopMain__DOT__pcEnable_ex_ls;
        CData/*0:0*/ TopMain__DOT__pcEnable_ls_wb;
        CData/*0:0*/ TopMain__DOT__pcEnable_rf;
        CData/*0:0*/ TopMain__DOT___HU__DOT___branchstall_T_28;
        CData/*0:0*/ TopMain__DOT___HU__DOT___branchstall_T_11;
        CData/*0:0*/ TopMain__DOT___HU__DOT___lwstall_T;
        CData/*0:0*/ TopMain__DOT___HU__DOT____VdfgTmp_h9dc61ef2__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_2;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_3;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_4;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_5;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_6;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_7;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_8;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_9;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_10;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_11;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_14;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_16;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_24;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_hed5ee32e__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h9e44594c__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_ha61c94bb__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h70189e71__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h36ddfde0__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_heb1f8a09__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h5bdbc692__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h0357b6a5__0;
        CData/*0:0*/ TopMain__DOT___T__DOT__id__DOT____VdfgTmp_h8cc90303__0;
    };
    struct {
        CData/*4:0*/ TopMain__DOT___EX_LS__DOT__reg_rd;
        CData/*0:0*/ TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_regWrite;
        CData/*0:0*/ TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_csrWrite;
        CData/*0:0*/ TopMain__DOT___EX_LS__DOT__reg_ctrl2WBU_memtoReg;
        CData/*1:0*/ TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memRW;
        CData/*2:0*/ TopMain__DOT___EX_LS__DOT__reg_ctrl2LSU_memWidth;
        CData/*4:0*/ TopMain__DOT___LS_WB__DOT__reg_rd;
        CData/*0:0*/ TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_regWrite;
        CData/*0:0*/ TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_csrWrite;
        CData/*0:0*/ TopMain__DOT___LS_WB__DOT__reg_ctrl2WBU_memtoReg;
        CData/*0:0*/ TopMain__DOT___Arbiter__DOT___T_2;
        CData/*0:0*/ TopMain__DOT___Arbiter__DOT___T_6;
        CData/*0:0*/ TopMain__DOT___Arbiter__DOT___T_10;
        CData/*0:0*/ TopMain__DOT___Arbiter__DOT___GEN;
        CData/*2:0*/ __VdfgTmp_hbc2f4814__0;
        CData/*7:0*/ __VdfgTmp_h43d5d70f__0;
        CData/*7:0*/ __VdfgTmp_h5d2dc4b8__0;
        CData/*0:0*/ __Vdly__TopMain__DOT__rNPCValid;
        CData/*0:0*/ __Vdly__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ __Vdly__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rReadStatuOK;
        CData/*0:0*/ __Vtrigrprev__TOP__TopMain__DOT___TP_SRAM__DOT__rWriteStatuOK;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ TopMain__DOT___T__DOT__id__DOT___GEN;
        SData/*11:0*/ TopMain__DOT___EX_LS__DOT__reg_csrID;
        SData/*11:0*/ TopMain__DOT___LS_WB__DOT__reg_csrID;
        VL_OUT(debug_instr_instr,31,0);
        VL_OUT(pipelineTrace_if_id_instr_instr,31,0);
        VL_OUT(pipelineTrace_id_ex_instr_instr,31,0);
        VL_OUT(pipelineTrace_ex_ls_instr_instr,31,0);
        VL_OUT(pipelineTrace_ls_wb_instr_instr,31,0);
        VL_OUT(pipelineTrace_rf_instr_instr,31,0);
        IData/*31:0*/ TopMain__DOT__instr_rf_instr;
        IData/*16:0*/ TopMain__DOT___T__DOT__id__DOT___GEN_1;
        VlWide<3>/*95:0*/ TopMain__DOT___IF_ID__DOT__reg_0;
        VlWide<13>/*397:0*/ TopMain__DOT___ID_EX__DOT__reg_0;
        IData/*31:0*/ TopMain__DOT___EX_LS__DOT__reg_instr_instr;
        IData/*31:0*/ TopMain__DOT___LS_WB__DOT__reg_instr_instr;
        IData/*31:0*/ TopMain__DOT___TP_SRAM__DOT__mem__DOT__writeLen;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(gpr_zero,63,0);
        VL_OUT64(gpr_ra,63,0);
        VL_OUT64(gpr_sp,63,0);
        VL_OUT64(gpr_gp,63,0);
        VL_OUT64(gpr_tp,63,0);
        VL_OUT64(gpr_t0,63,0);
        VL_OUT64(gpr_t1,63,0);
        VL_OUT64(gpr_t2,63,0);
        VL_OUT64(gpr_s0,63,0);
        VL_OUT64(gpr_s1,63,0);
        VL_OUT64(gpr_a0,63,0);
        VL_OUT64(gpr_a1,63,0);
        VL_OUT64(gpr_a2,63,0);
        VL_OUT64(gpr_a3,63,0);
        VL_OUT64(gpr_a4,63,0);
        VL_OUT64(gpr_a5,63,0);
        VL_OUT64(gpr_a6,63,0);
        VL_OUT64(gpr_a7,63,0);
        VL_OUT64(gpr_s2,63,0);
        VL_OUT64(gpr_s3,63,0);
        VL_OUT64(gpr_s4,63,0);
    };
    struct {
        VL_OUT64(gpr_s5,63,0);
        VL_OUT64(gpr_s6,63,0);
        VL_OUT64(gpr_s7,63,0);
        VL_OUT64(gpr_s8,63,0);
        VL_OUT64(gpr_s9,63,0);
        VL_OUT64(gpr_s10,63,0);
        VL_OUT64(gpr_s11,63,0);
        VL_OUT64(gpr_t3,63,0);
        VL_OUT64(gpr_t4,63,0);
        VL_OUT64(gpr_t5,63,0);
        VL_OUT64(gpr_t6,63,0);
        VL_OUT64(csrDebug_mstatus,63,0);
        VL_OUT64(csrDebug_mtvec,63,0);
        VL_OUT64(csrDebug_mepc,63,0);
        VL_OUT64(csrDebug_mcause,63,0);
        VL_OUT64(debug_commit_pc,63,0);
        VL_OUT64(debug_dynamic_pc,63,0);
        VL_OUT64(debug_probe_data,63,0);
        VL_OUT64(debug_alu_data_E_data,63,0);
        VL_OUT64(debug_alu_data_W_data,63,0);
        VL_OUT64(debug_alu_srcA_data,63,0);
        VL_OUT64(debug_alu_srcB_data,63,0);
        VL_OUT64(pipelineTrace_if_id_pc_pc,63,0);
        VL_OUT64(pipelineTrace_id_ex_pc_pc,63,0);
        VL_OUT64(pipelineTrace_ex_ls_pc_pc,63,0);
        VL_OUT64(pipelineTrace_ls_wb_pc_pc,63,0);
        VL_OUT64(pipelineTrace_rf_pc_pc,63,0);
        VL_OUT64(jumpTrace_dynamic_pc,63,0);
        VL_OUT64(jumpTrace_bruSrcA,63,0);
        VL_OUT64(jumpTrace_bruSrcB,63,0);
        QData/*63:0*/ TopMain__DOT_____05FTP_SRAM_io_R_s2mRdata;
        QData/*63:0*/ TopMain__DOT_____05FWBU_io_wbIO_data;
        QData/*63:0*/ TopMain__DOT_____05FT_io_npc_pc;
        QData/*63:0*/ TopMain__DOT_____05FT_3_ioInternal_oPCPlus4;
        QData/*63:0*/ TopMain__DOT__rPC;
        QData/*63:0*/ TopMain__DOT__rNPC;
        QData/*63:0*/ TopMain__DOT__pc_rf_pc;
        QData/*63:0*/ TopMain__DOT___T__DOT___id_io_instrIO_instrRegImm_imm;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_0;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_1;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_2;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_3;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_4;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_5;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_6;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_7;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_8;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_9;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_10;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_11;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_12;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_13;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_14;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_15;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_16;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_17;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_18;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_19;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_20;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_21;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_22;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_23;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_24;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_25;
    };
    struct {
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_26;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_27;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_28;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_29;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_30;
        QData/*63:0*/ TopMain__DOT___T__DOT__rf__DOT__regs_31;
        VlWide<64>/*2047:0*/ TopMain__DOT___T__DOT__rf__DOT___GEN;
        QData/*63:0*/ TopMain__DOT___T__DOT__csrf__DOT__mstatus;
        QData/*63:0*/ TopMain__DOT___T__DOT__csrf__DOT__mtvec;
        QData/*63:0*/ TopMain__DOT___T__DOT__csrf__DOT__mepc;
        QData/*63:0*/ TopMain__DOT___T__DOT__csrf__DOT__mcause;
        QData/*63:0*/ TopMain__DOT___EXU__DOT__data2;
        QData/*63:0*/ TopMain__DOT___EX_LS__DOT__reg_aluOut;
        QData/*63:0*/ TopMain__DOT___EX_LS__DOT__reg_writeData;
        QData/*63:0*/ TopMain__DOT___EX_LS__DOT__reg_commit_pc;
        QData/*63:0*/ TopMain__DOT___LS_WB__DOT__reg_readData;
        QData/*63:0*/ TopMain__DOT___LS_WB__DOT__reg_exOut;
        QData/*63:0*/ TopMain__DOT___LS_WB__DOT__reg_commit_pc;
        QData/*63:0*/ __Vdly__TopMain__DOT__rNPC;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTopMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTopMain___024root(VTopMain__Syms* symsp, const char* v__name);
    ~VTopMain___024root();
    VL_UNCOPYABLE(VTopMain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
