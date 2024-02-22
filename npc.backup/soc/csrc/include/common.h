// DESCRIPTION: 模仿Nemu去写一个丐版、RISCV64专属common.h
// STATE: Basic function is done

// #define RESET_VECTOR    (MEMORY_BASE+PC_RESET_OFFSET)
// #define PG_ALIGN  __attribute((aligned(4096)))

// #define FMT_PADDR "0x%016" PRIx64

// #define MUX(COND,A,B) COND?A:B // One Line Mux

#ifndef __COMMON_H__
#define __COMMON_H__

#include <config.h>

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

// #include <generated/autoconf.h>
#include <macro.h>

#ifdef CONFIG_TARGET_AM // 接驳运行时环境
#include <klib.h>
#else
#include <assert.h>
#include <stdlib.h>
#endif

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

#define CTRL_FONT "0x%04x"
#define INST_FONT "0x%08x"
#define PCEN_FONT "%d"
#define DATA_FONT MUXDEF(CONFIG_ISA64, "%016lx", "%08x")
#define PC_FONT MUXDEF(CONFIG_ISA64, "0x%016lx", "0x%08x")
#define INSTR_FONT "%8x"

#include <debug.h>
#include <config.h>

#endif
