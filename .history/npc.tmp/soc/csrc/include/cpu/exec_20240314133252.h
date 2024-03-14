#ifndef __EXEC_H__
#define __EXEC_H__

#include <common.h>

void cpu_exec(uint64_t n);
void cpu_init();

void set_sim_state(int state, vaddr_t pc, int halt_reg);
void invalid_inst(vaddr_t thispc);

#define SIMTRAP(thispc, code) set_sim_state(SIM_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

#endif