// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOPMAIN_H_
#define VERILATED_VTOPMAIN_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VTopMain__Syms;
class VTopMain___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VTopMain VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTopMain__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&debug_hazard_stallF,0,0);
    VL_OUT8(&debug_hazard_stallD,0,0);
    VL_OUT8(&debug_hazard_flushE,0,0);
    VL_OUT8(&debug_hazard_hu_exu_ctrl_forwardA,1,0);
    VL_OUT8(&debug_hazard_hu_exu_ctrl_forwardB,1,0);
    VL_OUT8(&debug_hazard_hu_idu_ctrl_forwardA,1,0);
    VL_OUT8(&debug_hazard_hu_idu_ctrl_forwardB,1,0);
    VL_OUT8(&debug_forwardA_data,1,0);
    VL_OUT8(&debug_forwardB_data,1,0);
    VL_OUT8(&debug_forward_idu_A_data,1,0);
    VL_OUT8(&debug_forward_idu_B_data,1,0);
    VL_OUT8(&debug_rdD_data,4,0);
    VL_OUT8(&debug_rdE_data,4,0);
    VL_OUT8(&debug_rdM_data,4,0);
    VL_OUT8(&debug_rdW_data,4,0);
    VL_OUT8(&pipelineTrace_if_id_pcEnable,0,0);
    VL_OUT8(&pipelineTrace_id_ex_pcEnable,0,0);
    VL_OUT8(&pipelineTrace_ex_ls_pcEnable,0,0);
    VL_OUT8(&pipelineTrace_ls_wb_pcEnable,0,0);
    VL_OUT8(&pipelineTrace_rf_pcEnable,0,0);
    VL_OUT8(&jumpTrace_instr_jump,0,0);
    VL_OUT8(&jumpTrace_instr_branch,0,0);
    VL_OUT8(&jumpTrace_instr_pcPlusSrc,0,0);
    VL_OUT8(&jumpTrace_idu_pcSrc,0,0);
    VL_OUT8(&jumpTrace_bruOutC,0,0);
    VL_OUT8(&jumpTrace_bruCtrl,3,0);
    VL_OUT(&debug_instr_instr,31,0);
    VL_OUT(&pipelineTrace_if_id_instr_instr,31,0);
    VL_OUT(&pipelineTrace_id_ex_instr_instr,31,0);
    VL_OUT(&pipelineTrace_ex_ls_instr_instr,31,0);
    VL_OUT(&pipelineTrace_ls_wb_instr_instr,31,0);
    VL_OUT(&pipelineTrace_rf_instr_instr,31,0);
    VL_OUT64(&gpr_zero,63,0);
    VL_OUT64(&gpr_ra,63,0);
    VL_OUT64(&gpr_sp,63,0);
    VL_OUT64(&gpr_gp,63,0);
    VL_OUT64(&gpr_tp,63,0);
    VL_OUT64(&gpr_t0,63,0);
    VL_OUT64(&gpr_t1,63,0);
    VL_OUT64(&gpr_t2,63,0);
    VL_OUT64(&gpr_s0,63,0);
    VL_OUT64(&gpr_s1,63,0);
    VL_OUT64(&gpr_a0,63,0);
    VL_OUT64(&gpr_a1,63,0);
    VL_OUT64(&gpr_a2,63,0);
    VL_OUT64(&gpr_a3,63,0);
    VL_OUT64(&gpr_a4,63,0);
    VL_OUT64(&gpr_a5,63,0);
    VL_OUT64(&gpr_a6,63,0);
    VL_OUT64(&gpr_a7,63,0);
    VL_OUT64(&gpr_s2,63,0);
    VL_OUT64(&gpr_s3,63,0);
    VL_OUT64(&gpr_s4,63,0);
    VL_OUT64(&gpr_s5,63,0);
    VL_OUT64(&gpr_s6,63,0);
    VL_OUT64(&gpr_s7,63,0);
    VL_OUT64(&gpr_s8,63,0);
    VL_OUT64(&gpr_s9,63,0);
    VL_OUT64(&gpr_s10,63,0);
    VL_OUT64(&gpr_s11,63,0);
    VL_OUT64(&gpr_t3,63,0);
    VL_OUT64(&gpr_t4,63,0);
    VL_OUT64(&gpr_t5,63,0);
    VL_OUT64(&gpr_t6,63,0);
    VL_OUT64(&csrDebug_mstatus,63,0);
    VL_OUT64(&csrDebug_mtvec,63,0);
    VL_OUT64(&csrDebug_mepc,63,0);
    VL_OUT64(&csrDebug_mcause,63,0);
    VL_OUT64(&debug_commit_pc,63,0);
    VL_OUT64(&debug_dynamic_pc,63,0);
    VL_OUT64(&debug_probe_data,63,0);
    VL_OUT64(&debug_alu_data_E_data,63,0);
    VL_OUT64(&debug_alu_data_W_data,63,0);
    VL_OUT64(&debug_alu_srcA_data,63,0);
    VL_OUT64(&debug_alu_srcB_data,63,0);
    VL_OUT64(&pipelineTrace_if_id_pc_pc,63,0);
    VL_OUT64(&pipelineTrace_id_ex_pc_pc,63,0);
    VL_OUT64(&pipelineTrace_ex_ls_pc_pc,63,0);
    VL_OUT64(&pipelineTrace_ls_wb_pc_pc,63,0);
    VL_OUT64(&pipelineTrace_rf_pc_pc,63,0);
    VL_OUT64(&jumpTrace_dynamic_pc,63,0);
    VL_OUT64(&jumpTrace_bruSrcA,63,0);
    VL_OUT64(&jumpTrace_bruSrcB,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTopMain___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTopMain(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTopMain(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTopMain();
  private:
    VL_UNCOPYABLE(VTopMain);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
