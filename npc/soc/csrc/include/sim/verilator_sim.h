// DESCRIPTION: Include Module header, generated from Verilating "top.v"
// STATE: Wait  for Complite

#ifndef __VERILATOR_SIM_H__
#define __VERILATOR_SIM_H__

#include "VTopMain.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <common.h>
#include <stdio.h>
#include <memory/cache.h>
void sim_init();
void run_sim_module_cycle();
void reset_sim_module(int num);
void sim_final();

#endif