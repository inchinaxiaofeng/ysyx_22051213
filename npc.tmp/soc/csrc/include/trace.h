#ifndef __TRACE_H__
#define __TRACE_H__

#include <common.h>
#include <isa/riscv64/riscv64.h>
#include <utils.h>

#define IO_TRACE_FONT ANSI_FG_CYAN
#define PC_TRACE_FONT ANSI_FG_CYAN
#define HAZARD_TRACE_FONT ANSI_FG_CYAN

#define PIPELINE_TRACE_FONT ANSI_FG_CYAN
#define JUMP_TRACE_FONT ANSI_FG_CYAN

inline void print_ifetch (
    vaddr_t pc, 
    uint32_t inst
) {
    printf(
        IO_TRACE_FONT 
        "[Inst]\tPC:" PC_FONT 
        "\tInst:" INST_FONT
        ANSI_NONE
        "\n",
        pc,
        inst
    );
}

// inline void print_load_store (
//     bool isLoad,
//     vaddr_t addr,
//     vaddr_t write_data,
//     int width,
//     int read_or_write
// ) {
//     if (true == isLoad) printf(IO_TRACE_FONT "[Load]" ANSI_NONE);
//     else printf(IO_TRACE_FONT "[Save]" ANSI_NONE);
//     printf(
//         IO_TRACE_FONT
//         "\taddr:" PC_FONT
//         "\tdata:" DATA_FONT
//         "\twidth:" CTRL_FONT
//         "\tread_or_write:" CTRL_FONT
//         ANSI_NONE
//         "\n",
//         addr,
//         write_data,
//         width,
//         read_or_write
//     );
// }

inline void pipeline_trace (
    vaddr_t pc,
    int32_t instr,
    int pcen,
    char *pipeline_level
) {
    printf(
        "[" "\033[3;33m%-5s\033[0m" "]"
        PIPELINE_TRACE_FONT " "
        "pc: " PC_FONT " "
        "instr: " INST_FONT " "
        "PCEN: " PCEN_FONT
        ANSI_NONE
        "\n",
        pipeline_level,
        pc,
        instr,
        pcen
    );
}

inline void jump_trace (
    vaddr_t dnpc,
    int instr_jump,
    int instr_branch,
    int instr_pcPlusSrc,
    int idu_pcSrc,
    word_t bruSrcA,
    word_t bruSrcB,
    int bruOutC,
    int bruCtrl
) {
    printf(
        "[\033[3;33mjump_trace\033[0m]"
        JUMP_TRACE_FONT " " 
        "dnpc: " PC_FONT " "
        "instr_jump: %d "
        "instr_branch: %d "
        "instr_pcPlusSrc: %d "
        "idu_pcSrc: %d\n"
        ANSI_NONE,
        dnpc,
        instr_jump,
        instr_branch,
        instr_pcPlusSrc,
        idu_pcSrc
    );
    printf(
        "[\033[3;33mjump_trace\033[0m]"
        JUMP_TRACE_FONT " "
        "bruSrcA: " DATA_FONT " "
        "bruSrcB: " DATA_FONT " "
        "bruCtrl: %d "
        "bruOutC: %d\n"
        ANSI_NONE,
        bruSrcA,
        bruSrcB,
        bruCtrl,
        bruOutC
    );
}

inline void pc_trace(
    vaddr_t commit_pc,
    vaddr_t dynamic_pc,
    vaddr_t reg_pc
) {
    printf(
        PC_TRACE_FONT
        "[PC]\tcommit_pc:" PC_FONT
        "\tdynamic_pc:" PC_FONT
        "\treg_pc:" PC_FONT
        ANSI_NONE
        "\n",
        commit_pc,
        dynamic_pc,
        reg_pc
    );
}

inline void hazard_trace(
    CPU_state *env_cpu
) {
    printf(
        HAZARD_TRACE_FONT
        "[HU] stallF:%d stallD:%d flushE:%d\n"
        "[HU] exu_forwardA:%d exu_forwardB:%d\n"
        "[HU] idu_forwardA:%d idu_forwardB:%d\n"
        ANSI_NONE,
        env_cpu->stallF, 
        env_cpu->stallD, 
        env_cpu->flushE,
        env_cpu->exu_forwardA, 
        env_cpu->exu_forwardB,
        env_cpu->idu_forwardA, 
        env_cpu->idu_forwardB
    );
}

#endif