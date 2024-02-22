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

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  print_split(GPR)
  for (size_t i = 0; i < sizeof(regs)/sizeof(char *); i++)
  {
    print_reg_val(GPR, regs[i], gpr(i))
    if ((i+1)%4 == 0) {
      printf("\n");
      if ((i+1)%8 == 0) print_split(GPR)
    }
  }
  print_reg_val(GPR, "pc", cpu.pc); printf("\n");
  print_split(CSR)
  print_reg_val(CSR, "mstatus", csr(MSTATUS)) print_reg_val(CSR, "mtvec" , csr(MTVEC) ) printf("\n");
  print_reg_val(CSR, "mepc"   , csr(MEPC)   ) print_reg_val(CSR, "mcause", csr(MCAUSE)) printf("\n");
  print_split(CSR)
  return;
}

word_t isa_reg_str2val(const char *s, bool *success) {
  *success = true;
  if (0 == strcmp(s, regs[0])) {
    return gpr(0);
  }
  if (0 == strcmp(s, "$pc")) {
    return cpu.pc;
  }

  for (size_t i = 1; i < 32; i++)
  {
    if (0 == strcmp(regs[i], s+1)) {
      *success = true;
      return gpr(i);
    }
  }

  *success = false;
  
  return 0;
}
// TODO:需要重构整个代码，将规范化success的用法和return的返回值