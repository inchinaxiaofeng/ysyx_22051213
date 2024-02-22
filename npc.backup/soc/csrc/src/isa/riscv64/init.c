#include <isa/riscv64/riscv64.h>
#include <memory/paddr.h>
#include <sim/verilator_sim.h>

static const uint32_t img [] = {
    0x00000297,  // auipc t0,0
    0x0002b823,  // sd  zero,16(t0)
    0x0102b503,  // ld  a0,16(t0)
    0x00100073,  // ebreak (used as nemu_trap)
    0xdeadbeef,  // some data
};

static void restart() {
    /* Set the initial program counter. */
    Log("Should Restart PC");
}

void init_isa() {
    /* Load built-in image. */
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

    /* Initialize this virtual computer system. */
    restart();
}