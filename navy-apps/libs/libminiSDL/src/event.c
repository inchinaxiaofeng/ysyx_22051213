#include <NDL.h>
#include <SDL.h>
#include "assert.h"
#include <string.h>

#define EVENT_BUF_LENGTH 256
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

/// @brief 聲明一個可以放下所有key對應的掃描碼的uint8_t數組
uint8_t keystate[ARRLEN(keyname)];

/// @brief 
/// @param ev 
/// @return 
int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

/// @brief 讀出一條事件信息（封裝了NDL_PollEvent）,和SDL_WaitEvent()不同的是, 如果当前没有任何事件, 就会立即返回
/// @param ev 
/// @return 存在信息時，返回1,否則返回0
int SDL_PollEvent(SDL_Event *ev) {
  assert(NULL != ev);

  char buf[EVENT_BUF_LENGTH];

  if (0 != NDL_PollEvent(buf, ARRLEN(buf) - 1)) {
    if (0 == strncmp(buf, "kd", 2)) {
      ev->key.type = SDL_KEYDOWN;
    } else if (0 == strncmp(buf, "ku", 2)) {
      ev->key.type = SDL_KEYUP;
    }

    if (SDL_KEYDOWN == ev->key.type || 
        SDL_KEYUP == ev->key.type) {
      uint8_t keycode = 0;
      int tmpbuf = 0;
      sscanf(buf + 3, "%2d %s", &tmpbuf, buf + 6);
      keycode = (uint8_t)tmpbuf;
      // printf("%s\n", buf);
      // printf("KeyCode: %d\n", keycode);
      if (0 != keycode) {
        keystate[keycode] = ((SDL_KEYDOWN == ev->type) ? 1 : 0);
        ev->key.keysym.sym = keycode;
        return 1;
      }
    }
  }
  return 0;
}

/// @brief 當不存在信息時，忙等待事件的發生，循環調用SDL_PollEvent
/// @param event 
/// @return 總是返回1
int SDL_WaitEvent(SDL_Event *event) {
  while (0 == SDL_PollEvent(event));
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
