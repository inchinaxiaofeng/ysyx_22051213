/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

#define GPR 0
#define CSR 1

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#define MSTATUS 0x300
#define MTVEC 0x305
#define MEPC 0x341
#define MCAUSE 0x342

static inline int check_csr_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(MSTATUS == idx || MTVEC == idx || MEPC == idx || MCAUSE == idx));
  switch (idx)
  {
  case MSTATUS: idx = 0; break; // mstatus（Machine Status）          它保存全局中断使能，以及许多其他的状态
  case MTVEC  : idx = 1; break; // mtvec  （Machine Trap Vector）     它保存发生异常时处理器需要跳转到的地址
  case MEPC   : idx = 2; break; // mepc   （Machine Exception PC）    它指向发生异常的指令。
  case MCAUSE : idx = 3; break; // mcause （Machine Exception Cause） 它指示发生异常的种类。
  }
  return idx;
}

#define csr(idx) (cpu.csr[check_csr_idx(idx)])

// OUTPUT Format
#define __print_gpr_val(reg_name, reg_val) printf("\33[3;36m%3s:\33[0m \033[2;32m0x\033[0m", reg_name); \
  if(0x0 == reg_val) printf("\33[2;37m"); \
  printf("%016lx\33[0m\t", reg_val);

#define __print_csr_val(reg_name, reg_val) printf("\33[1;44m%8s:\33[0m \033[2;32m0x\033[0m", reg_name); \
  if(0x0 == reg_val) printf("\33[2;37m"); \
  printf("%016lx\33[0m ", reg_val);

#define __print_gpr_split printf("\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\n");

#define __print_csr_split printf("\33[1;44m---------\33[0m|------------------|\33[1;44m---------\33[0m|------------------|\n");

#define __print_reg_error printf("\33[1;33mWRONG REG_PRINT TYPE.\33[0m\n");

#define print_split(reg_type) switch (reg_type) { \
case GPR: __print_gpr_split break; \
case CSR: __print_csr_split break; \
default : __print_reg_error break; \
}

#define print_reg_val(reg_type, reg_name, reg_val) switch (reg_type) { \
case GPR: __print_gpr_val(reg_name, reg_val); break; \
case CSR: __print_csr_val(reg_name, reg_val); break; \
default : __print_reg_error break; \
} // FIXME: 不太会写宏的选择编译

#endif
