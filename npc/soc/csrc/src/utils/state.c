#include <utils.h>
#include <state.h>

SIMState sim_state = { .state = SIM_STOP };

int is_exit_status_bad() {
    int good = (SIM_END == sim_state.state && 0 == sim_state.halt_ret) ||
        (SIM_QUIT == sim_state.state) ||
        (SIM_STOP == sim_state.state);
    return !good;
}

