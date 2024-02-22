#ifndef ARCH_H__
#define ARCH_H__

/*
mcause:异常原因寄存器，用于存储最近一次异常的原因代码，例如中断、故障或系统调用
mstatus:处理器状态寄存器，包含了处理器的一些状态信息，例如中断使能、特权级别等
pdir:页表基址寄存器，存储了当前页表的基址，用于地址转换和内存管理
mepc:异常程序计数器，用于存储异常发生时的下一条指令的地址，即异常处理程序应该从该地址开始执行
gpr[32]:通用寄存器
*/

struct Context {
  /*
  MAP(REGS, PUSH) 第一步骤

  csrr t0, mcause 第二步骤
  csrr t1, mstatus 第三步骤
  csrr t2, mepc 第四步骤
  */
  // to match trap.S
  uintptr_t gpr[32];
  uintptr_t mcause;
  uintptr_t mstatus;
  uintptr_t mepc;
  void *pdir;
};
// 通过宏用于更加方便地访问Context结构体中寄存器的值。
#define GPR1 gpr[17] // a7
#define GPR2 gpr[10]
#define GPR3 gpr[11]
#define GPR4 gpr[12]
#define GPRx gpr[10]
#endif
