#include <am.h>
#include "../riscv.h"

#define RTC_ADDR 0xa0000048

uint64_t am_start_time = 0;

static inline uint64_t am_get_time() {
  uint32_t rtc2 = inl(RTC_ADDR + 4);
  uint32_t rtc1 = inl(RTC_ADDR);

  return ((uint64_t)rtc2 << 32) + (uint64_t)rtc1;
}

void __am_timer_init() {
  am_start_time = am_get_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = am_get_time() - am_start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
