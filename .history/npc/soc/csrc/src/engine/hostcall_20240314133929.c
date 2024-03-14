#include <common.h>
#include <cpu/difftest.h>
#include <cpu/ifetch.h>
#include <isa.h>

void set_sim_state(int state, vaddr_t pc, int halt_ret) {
    difftest_skip_ref();
    sim_state.state = state;
    sim_state.halt_pc = pc;
    sim_state.halt_ret = halt_ret;
    printf("halt ret %x\n", halt_ret);
}