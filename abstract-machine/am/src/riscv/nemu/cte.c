#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL; // user_handler是一个返回Context指针,参数为Event和Context*的函数

Context* __am_irq_handle(Context *c) {
  // display_context(c);
  if (user_handler) { // 这里的user_handler就是传入的do_event
    Event ev = {0};
    switch (c->mcause) {
      case 0xb: 
        if (-1 == c->gpr[17]) ev.event = EVENT_YIELD;
        else if (0 <= c->gpr[17] && c->gpr[17] <= 19) ev.event = EVENT_SYSCALL;
        else ev.event = EVENT_ERROR;
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

// 接受一个来自操作系统的事件处理回调函数的指针, 当发生事件时, CTE将会把事件和相关的上下文作为参数, 来调用这个回调函数, 交由操作系统进行后续处理.
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  // 这段代码的作用是将 __am_asm_trap 的地址写入到 mtvec 寄存器中，以便在 RISC-V 处理器遇到异常时跳转到 __am_asm_trap 函数的代码
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
