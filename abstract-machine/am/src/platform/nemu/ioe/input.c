#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kvalue = inl(KBD_ADDR);
  if ( (kvalue & KEYDOWN_MASK) == 0) {
    kbd->keydown = false;
  } else {
    kbd->keydown = true;
  }
  kbd->keycode = kvalue & (~KEYDOWN_MASK);
}
