#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

#define WIDTH 400
#define HEIGHT 300

void __am_gpu_init() {
  int i;
  int w = 400;
  int h = 300;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t config_info = inl(VGACTL_ADDR); // 從內存映射中，VGA的規定地址讀取uint32_t
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = config_info >> 16, .height = (config_info << 16) >> 16, // 长宽信息在一个寄存器中
    .vmemsz = 0
  }; // present表示可用，has_accel表示是否可以支持硬件加速（獨顯或者核顯）
  // width表示寬，height表示高
  // vmemsz表示虛擬內存的大小
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int i, j;
  uint32_t *pixels = ctl->pixels;  // 获取像素数据的指针
  int x = ctl->x, y = ctl->y;  // 获取绘制区域的左上角坐标
  int w = ctl->w, h = ctl->h;  // 获取绘制区域的宽度和高度
  bool sync = ctl->sync;       // 获取是否需要同步
  uint32_t *fb; // 帧缓冲
  
  int idx; // 计算当前下标

  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      idx = i*w + j;

      // (i, j)的像素点
      fb = (uint32_t*)(uintptr_t)(FB_ADDR + ((y+i)*WIDTH + (x+j))*sizeof(uint32_t));
      *fb = pixels[idx]; // alpha通道又不用
    }
  }

  if (sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
