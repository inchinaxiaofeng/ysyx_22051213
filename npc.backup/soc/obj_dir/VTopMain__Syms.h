// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOPMAIN__SYMS_H_
#define VERILATED_VTOPMAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTopMain.h"

// INCLUDE MODULE CLASSES
#include "VTopMain___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VTopMain__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTopMain* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTopMain___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TopMain___TP_SRAM__mem;

    // CONSTRUCTORS
    VTopMain__Syms(VerilatedContext* contextp, const char* namep, VTopMain* modelp);
    ~VTopMain__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
