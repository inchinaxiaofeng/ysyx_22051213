#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

/// @brief 串口寫由于串口是一个字符设备, 对应的字节序列没有"位置"的概念，因此serial_write()中的offset参数可以忽略.
/// @param buf 
/// @param offset(Ignore) 
/// @param len 
/// @return return 0 always
size_t serial_write(const void *buf, size_t offset, size_t len) {
  size_t i = 0;
  for (; len > 0; len--) {
    putch(((char *)buf)[i]);
    i++;
  }
  return 0;
}

/// @brief 把事件写入到buf中, 最长写入len字节
/// @param buf 
/// @param offset 
/// @param len 
/// @return 返回写入的实际长度，或在沒有按下的時候返回0
size_t events_read(void *buf, size_t offset, size_t len) {
  assert(NULL != buf);

  AM_INPUT_KEYBRD_T kbd = io_read(AM_INPUT_KEYBRD);
  if (AM_KEY_NONE != kbd.keycode) {
   snprintf((char *)buf, len,
              "%s %2d %s",
              (kbd.keydown) ? "kd" : "ku",
              kbd.keycode,
              keyname[kbd.keycode]);
    return len;
  } else return 0;
}

/// @brief 把屏幕信息寫入buf中，最長寫入len字節
/// @param buf 
/// @param offset 
/// @param len 
/// @return [UB]總是返回0
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  assert(NULL != buf);

  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  snprintf((char *)buf, len,
              "width: %d, height: %d",
              cfg.width,
              cfg.height);
  return 0;
}

extern size_t open_offset;

/// @brief 用於向幀緩衝中寫入數據，寫入策略採取支持native
/// @param buf 幀緩衝的指針
/// @param offset 寫入數據的偏移量
/// @param len 寫書數據的長度
/// @return [UB]總是返回0
size_t fb_write(const void *buf, size_t offset, size_t len) {
  assert(NULL != buf);

  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);

  AM_GPU_FBDRAW_T fbd;
  fbd.pixels = (void *)buf;
  fbd.sync = true;

  // // 方案1：只寫一次w，使用循環寫完所有，支持native
  // fbd.x = (offset / 4) % cfg.width;
  // fbd.y = (offset / 4) / cfg.width;
  // fbd.w = len / 4;
  // fbd.h = 1;

  // 方案2：使用高32位ie存儲w，低32位存儲h，但是這個方法不支持native
  fbd.x = offset % cfg.width;
  fbd.y = offset / cfg.width;
  fbd.w = len >> 32; // 高32位
  fbd.h = len & 0x00000000FFFFFFFF; // 低32位

  io_write(AM_GPU_FBDRAW, fbd.x, fbd.y, fbd.pixels, fbd.w, fbd.h, fbd.sync);
  open_offset = offset + len;

  // Log("gpu frame write at position (x,y)=(%d,%d), size (w,h)=(%d,%d)", fbd.x, fbd.y, fbd.w, fbd.h);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
