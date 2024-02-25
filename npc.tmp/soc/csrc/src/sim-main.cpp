// DESCRIPTION: Simulating the NPC Runtime
// STATE: A piece of Shit

#include <common.h>
#include <sim/verilator_sim.h>
#include <monitor/monitor.h>
#include <engine/engine.h>
#include <utils.h>
#include <state.h>

int main(int argc, char *argv[], char**env) {
    /* Initialize the monitor */
// #ifdef CONFIG_TARGET_AM
//     am_init_monitor();
// #else
    init_monitor(argc, argv);
// #endif

    /* Start engine */
    engine_start();

    return is_exit_status_bad();
}