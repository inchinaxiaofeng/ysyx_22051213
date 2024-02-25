#include <monitor/monitor.h>
#include <monitor/sdb.h>
#include <engine/engine.h>
#include <sim/verilator_sim.h>
#include <cpu/exec.h>

// void sdb_mainloop();

void engine_start() {
//     sim_init();
    Log("cpu_init");
    cpu_init();
    /* Receive commands from user. */
    Log("start sdb mainloop");
    sdb_mainloop();
    /* End of exec */
    Log("end of exec");
    final();
}