// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOPMAIN__DPI_H_
#define VERILATED_VTOPMAIN__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv:15:51
    extern unsigned long long vaddr_read(unsigned long long addr, int len);
    // DPI import at /home/marinatoo/ysyx-workbench/npc/playground/resources/MEM.sv:20:39
    extern void vaddr_write(unsigned long long addr, int len, unsigned long long data);

#ifdef __cplusplus
}
#endif

#endif  // guard
