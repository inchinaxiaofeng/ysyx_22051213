// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTopMain__Syms.h"
#include "VTopMain.h"
#include "VTopMain___024root.h"

// FUNCTIONS
VTopMain__Syms::~VTopMain__Syms()
{
}

VTopMain__Syms::VTopMain__Syms(VerilatedContext* contextp, const char* namep, VTopMain* modelp)
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
    __Vscope_TopMain___TP_SRAM__mem.configure(this, name(), "TopMain._TP_SRAM.mem", "mem", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
