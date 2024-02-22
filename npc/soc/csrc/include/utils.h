// DESCRIPTION: 
// STATE: Basic done
#ifndef __UTILS_H__
#define __UTILS_H__

#include <common.h>

// ----------- state -----------

enum { SIM_RUNNING, SIM_STOP, SIM_END, SIM_ABORT, SIM_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} SIMState;

extern SIMState sim_state;

// ----------- timer -----------

uint64_t get_time();

// ----------- log -----------

#define ANSI_FG_BLACK   "\033[1;30m"
#define ANSI_FG_RED     "\033[1;31m"
#define ANSI_FG_GREEN   "\033[1;32m" 
#define ANSI_FG_YELLOW  "\033[1;33m" 
#define ANSI_FG_BLUE    "\033[1;34m"
#define ANSI_FG_MAGENTA "\033[1;35m"
#define ANSI_FG_CYAN    "\033[1;36m"
#define ANSI_FG_WHITE   "\033[1;37m"
#define ANSI_BG_BLACK   "\033[1;40m"
#define ANSI_BG_RED     "\033[1;41m"
#define ANSI_BG_GREEN   "\033[1;42m"
#define ANSI_BG_YELLOW  "\033[1;43m"
#define ANSI_BG_BLUE    "\033[1;44m"
#define ANSI_BG_MAGENTA "\033[1;35m"
#define ANSI_BG_CYAN    "\033[1;46m"
#define ANSI_BG_WHITE   "\033[1;47m"
#define ANSI_NONE       "\033[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)


#endif