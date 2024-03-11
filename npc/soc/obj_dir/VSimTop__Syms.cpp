// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__Syms.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_SimTop__TP_SRAM__mem.configure(this, name(), "SimTop.TP_SRAM.mem", "mem", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__backend__exu__alu.configure(this, name(), "SimTop.core.backend.exu.alu", "alu", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__backend__exu__alu__unnamedblk1.configure(this, name(), "SimTop.core.backend.exu.alu.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
