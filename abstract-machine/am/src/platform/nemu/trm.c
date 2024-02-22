#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) { // 通过对字节输出(out byte)实现putch
  outb(SERIAL_PORT, ch);
}

void halt(int code) { // 用于退出
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() { /// 初始化图灵机
  int ret = main(mainargs);
  halt(ret);
}
