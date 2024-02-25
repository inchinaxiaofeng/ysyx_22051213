// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopMain__Syms.h"
#include "VTopMain___024root.h"

void VTopMain___024root___ctor_var_reset(VTopMain___024root* vlSelf);

VTopMain___024root::VTopMain___024root(VTopMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTopMain___024root___ctor_var_reset(this);
}

void VTopMain___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTopMain___024root::~VTopMain___024root() {
}
