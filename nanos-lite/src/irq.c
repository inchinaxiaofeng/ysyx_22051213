#include <common.h>
// [src/irq.c,5,do_event] system panic: Unhandled event ID = 4
extern void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_SYSCALL: do_syscall(c); break;
    case EVENT_YIELD: printf("nanos already yield.\n"); break;
    case EVENT_ERROR: panic("irq event error."); break;
    default: Log("I'm Here!");panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
