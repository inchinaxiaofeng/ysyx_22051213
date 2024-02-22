#include <common.h>
#include "syscall.h"
#include <fs.h>
#include <sys/time.h>

const char *syscall_name[] = {
  "sys_exit"  , "sys_yield" , "sys_open"  , "sys_read"  ,
  "sys_write" , "sys_kill"  , "sys_getpid", "sys_close" ,
  "sys_lseek" , "sys_brk"   , "sys_fstat" , "sys_time"  ,
  "sys_signal", "sys_execve", "sys_fork"  , "sys_link"  ,
  "sys_unlink", "sys_wait"  , "sys_times" , "sys_gettimeofday"
};

#ifdef STRACE

  #define FILE_NAME_LENGTH 256
  void syscall_info_display(Context* c, uintptr_t ret_val, bool showfile) {
    assert(NULL != c);

    char file_name[FILE_NAME_LENGTH] = { 0 };
    get_file_name(ret_val, file_name);

    printf("\33[1;33m|Sys Call Name:|\33[0m %-17s", syscall_name[c->GPR1]);
    printf("\33[1;33m|GPR2(a0):|\33[0m %d\t", c->GPR2);
    printf("\33[1;33m|GPR3(a1):|\33[0m %d\t", c->GPR3); 
    printf("\33[1;33m|GPR4(a2):|\33[0m %d\t", c->GPR4);
    if (showfile) printf("\33[1;33m|File Name:|\33[0m %s", file_name);
    else printf("\33[1;33m|Ret Val:|\33[0m %d", ret_val);
    printf("\n");
  }
#endif

void sys_exit(Context *c) {
  assert(NULL != c);
  #ifdef STRACE
    printf("\33[1;33mSys Call Name:\33[0m sys_exit. \33[1;33mExit Status:\33[0m %d\n", c->GPRx);
  #endif
  halt(c->GPRx);
  return;
}

void sys_yield(Context *c) {
  assert(NULL != c);
  intptr_t ret;
  yield();
  ret = 0;

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_open(Context *c) {
  assert(NULL != c);
  intptr_t ret;

  ret = fs_open((char *)c->GPR2, c->GPR3, c->GPR4);

  #ifdef STRACE
    syscall_info_display(c, ret, true);
  #endif
  c->GPRx = ret;
  return;
}

void sys_read(Context *c) {
  assert(NULL != c);
  intptr_t ret;

  ret = fs_read(c->GPR2, (void *)c->GPR3, c->GPR4);

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_write(Context *c) {
  assert(NULL != c);
  intptr_t ret;
  // char *buf = (char *)c->GPR3;
  // if (1 == c->GPR2 || 2 == c->GPR2) {
  //   for (intptr_t i = 0; i <= c->GPR4; i++) putch(buf[i]);
  //   ret = c->GPR4;
  // } else ret = -1;

  ret = fs_write(c->GPR2, (void *)c->GPR3, c->GPR4);

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_close(Context *c) {
  assert(NULL != c);
  intptr_t ret;

  ret = fs_close(c->GPR2);

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_lseek(Context *c) {
  assert(NULL != c);
  intptr_t ret;

  ret = fs_lseek(c->GPR2, c->GPR3, c->GPR4);

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_brk(Context *c) {
  assert(NULL != c);
  intptr_t ret;
  ret = 0;

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void sys_gettimeofday(Context *c) {
  assert(NULL != c);
  intptr_t ret;

  struct timeval *tv = (struct timeval *)c->GPR2;
  if (NULL != tv) {
    tv->tv_sec = io_read(AM_TIMER_UPTIME).us / 1000000;
    ret = 0;
  } else {
    ret = -1;
  }

  #ifdef STRACE
    syscall_info_display(c, ret, false);
  #endif
  c->GPRx = ret;
  return;
}

void do_syscall(Context *c) {
  // uintptr_t a[4];
  // a[0] = c->GPR1;
  switch (c->GPR1) {
    case SYS_exit:          sys_exit(c);          break;
    case SYS_yield:         sys_yield(c);         break;
    case SYS_open:          sys_open(c);          break;
    case SYS_read:          sys_read(c);          break;
    case SYS_write:         sys_write(c);         break;
    case SYS_close:         sys_close(c);         break;
    case SYS_lseek:         sys_lseek(c);         break;
    case SYS_brk:           sys_brk(c);           break;
    case SYS_gettimeofday:  sys_gettimeofday(c);  break;
    default: panic("Unhandled syscall ID = %d", c->GPR1);
  }
}