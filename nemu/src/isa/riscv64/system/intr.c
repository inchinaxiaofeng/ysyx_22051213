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
#include "../local-include/reg.h"
 // 抛出一个号码为NO的异常, 其中epc为触发异常的指令PC, 返回异常处理的出口地址.
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  word_t i_mstatus = csr(MSTATUS);
  csr(MSTATUS) = (SEXT(BITS(i_mstatus, 63, 13), 51) << 13) | (BITS(3, 1, 0) << 11) | (BITS(i_mstatus, 10, 8) << 8) | (BITS(i_mstatus, 3, 3) << 7)  \
                    | (BITS(i_mstatus, 6, 4) << 4) | (BITS(0, 1, 1) << 3) | (BITS(i_mstatus, 2, 0)) ;
  csr(MEPC)   = epc;  // PC -> 它指向发生异常的指令
  csr(MCAUSE) = NO;   // NO -> 它指示发生异常的种类
  #ifdef CONFIG_ETRACE
    printf("\33[1;36mEtrace detect interrupt or exception: End of isa_raise_intr()\n\33[0m");
    print_reg_val(GPR, "pc", cpu.pc); printf("\n");
    print_split(CSR)
    print_reg_val(CSR, "mstatus", csr(MSTATUS)) print_reg_val(CSR, "mtvec" , csr(MTVEC) ) printf("\n");
    print_reg_val(CSR, "mepc"   , csr(MEPC)   ) print_reg_val(CSR, "mcause", csr(MCAUSE)) printf("\n");
    print_split(CSR)
    
    printf("\33[1;36mEvent Call args:\n\33[0m");
    print_split(GPR)
    print_reg_val(GPR, "a7", gpr(17)) print_reg_val(GPR, "a0", gpr(10)) print_reg_val(GPR, "a1", gpr(11)) print_reg_val(GPR, "a2", gpr(12)) printf("\n");
    print_split(GPR)
  #endif
  return csr(MTVEC);  // mtvec（Machine Trap Vector）它保存发生异常时处理器需要跳转到的地址
}

word_t isa_mret() {
  word_t i_mstatus = csr(MSTATUS);
  csr(MSTATUS) = (SEXT(BITS(i_mstatus, 63, 13), 51) << 13) | (BITS(0, 1, 0) << 11) | (BITS(i_mstatus, 10, 8) << 8) | (BITS(1, 0, 0) << 7)  \
                    | (BITS(i_mstatus, 6, 4) << 4) | (BITS(i_mstatus, 7, 7) << 3) | (BITS(i_mstatus, 2, 0)) ;
  return csr(MEPC); 
}

word_t isa_query_intr() {
  return INTR_EMPTY; // (word_t) -1
}
