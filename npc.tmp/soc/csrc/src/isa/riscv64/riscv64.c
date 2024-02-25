#include <common.h>
#include <isa/riscv64/riscv64.h>
#include <sim/verilator_sim.h>

#define Mr vaddr_read
#define Mw vaddr_write

void cpu_init() {
    sim_init();
    reset_sim_module(1);
}

void isa_exec_once() {
    run_sim_module_cycle();
}