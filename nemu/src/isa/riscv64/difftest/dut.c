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
// #include <reg.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if (memcmp(ref_r, &cpu, sizeof(vaddr_t)*33) == 0) {
    return true;
  } else {
    difftest_display_ref(ref_r);
    return false;
  }
}

void difftest_display_ref(CPU_state *ref_r) {
  printf("\033[1;31mDIFFTEST\033[0m\n");
  printf("\033[1;31mREF\033[0m\n");
  printf("\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\n");
  for (size_t i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i] == (int)0) {
      printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m\033[2;37m%016lx\033[0m\t", "XXX", ref_r->gpr[i]);
    } else {
      printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m%016lx\t", "XXX", ref_r->gpr[i]);
    }
    if ((i+1)%4 == 0)
    {
      printf("\n");
      if ((i+1)%8 == 0)
      {
        printf("\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\n");
      }
    }
  }
  printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "PC", ref_r->pc);
  printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mepc", ref_r->csr[0]);
  printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mstatus", ref_r->csr[1]);
  printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mcause", ref_r->csr[2]);
  printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mtvec", ref_r->csr[3]);
}

void isa_difftest_attach() {
}
