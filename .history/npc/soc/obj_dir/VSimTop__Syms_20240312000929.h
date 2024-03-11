// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMTOP__SYMS_H_
#define VERILATED_VSIMTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimTop.h"

// INCLUDE MODULE CLASSES
#include "VSimTop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VSimTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimTop* const __Vm_modelp;
<<<<<<< HEAD
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
=======
>>>>>>> tmp
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSimTop___024root              TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_SimTop__TP_SRAM__mem;
    VerilatedScope __Vscope_SimTop__core__backend__exu__alu;
    VerilatedScope __Vscope_SimTop__core__backend__exu__alu__unnamedblk1;

    // CONSTRUCTORS
    VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp);
    ~VSimTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
