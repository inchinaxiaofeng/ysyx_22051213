#ifndef __DIFFTEST_DEF_H__
#define __DIFFTEST_DEF_H__

#include <stdint.h>
#include <config.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 37) // GPR+PC+CSR

#endif