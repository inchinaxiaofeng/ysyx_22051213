#include <am.h>
#include <nemu.h>
#include <stdio.h>

// 可以调用abstract-machine/am/src/platform/nemu/include/nemu.h
// 和abstract-machine/am/src/riscv/riscv.h

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t rtc2 = inl(RTC_ADDR + 4);
  uint32_t rtc1 = inl(RTC_ADDR);

  uptime->us = ((uint64_t)rtc2 << 32) + (uint64_t)rtc1;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
