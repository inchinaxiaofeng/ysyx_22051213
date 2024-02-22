#include <am.h>
#include "../riscv.h"

#define AM_RV_NPC_KBD_ADDR 0xa0000060

#define KEYDOWN_MASK 0x8000
#define KEYCODE_MASK 0x7FFF

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint32_t kvalue = inl(AM_RV_NPC_KBD_ADDR);
	if (0 == (kvalue & KEYDOWN_MASK)) {
		kbd->keydown = false;
	} else {
		kbd->keydown = true;
	}
	kbd->keycode = kvalue & (~KEYDOWN_MASK);
}
