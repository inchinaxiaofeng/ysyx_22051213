#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

/// @brief 以毫秒爲單位返回系統時間
/// @return 時間
uint32_t NDL_GetTicks() {
  struct timeval now = { 0 };
  gettimeofday(&now, NULL);
  return now.tv_sec * 1000 + now.tv_usec / 1000;
}

/// @brief 读出一条事件信息, 将其写入`buf`中, 最长写入`len`字节
/// @param buf 
/// @param len 
/// @return 若读出了有效的事件, 函数返回1, 否则返回0
int NDL_PollEvent(char *buf, int len) {
  memset(buf, 0, len);
  assert(NULL != buf);
  int fd = open("/dev/events", 0, 0);
  return read(fd, buf, len);
}

/// @brief 打开一张(*w) X (*h)的画布，如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
/// @param w 
/// @param h 
void NDL_OpenCanvas(int *w, int *h) {
  assert(NULL != w);
  assert(NULL != h);

  int fd = open("/proc/dispinfo", 0, 0);

  char buf[64];
  read(fd, buf, sizeof(buf));
  sscanf(buf, 
          "width: %d, height: %d",
          &screen_w,
          &screen_h);
  
  if (0 == *w && 0 == *h) {
    *w = screen_w;
    *h = screen_h;
  }
  assert(screen_w >= *w && screen_h >= *h);
  // printf("Screen info: width: %d, height: %d\n", screen_w, screen_h);
  close(fd);

  //=================================
  // if (getenv("NWM_APP")) {
  //   int fbctl = 4;
  //   fbdev = 5;
  //   screen_w = *w; screen_h = *h;
  //   char buf[64];
  //   int len = sprintf(buf, "%d %d", screen_w, screen_h);
  //   // let NWM resize the window and create the frame buffer
  //   write(fbctl, buf, len);
  //   while (1) {
  //     // 3 = evtdev
  //     int nread = read(3, buf, sizeof(buf) - 1);
  //     if (nread <= 0) continue;
  //     buf[nread] = '\0';
  //     if (strcmp(buf, "mmap ok") == 0) break;
  //   }
  //   close(fbctl);
  // }
}

/// @brief 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上，图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
/// @param pixels 
/// @param x 
/// @param y 
/// @param w 
/// @param h 
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  assert(NULL != pixels);

  int fd = open("/dev/fb", 0, 0);
  if (-1 == fd) assert(0);

  #if defined(__ISA_NATIVE__)
    for(int j=0; j<h; j++){
      lseek(fd,((y+j)*screen_w+x)*4,SEEK_SET); // 4 for 32bits, 4bytes.
      write(fd, pixels+w*j, 4*w);              // 4 for 32bits, 4bytes.
    }
  #else
    lseek(fd,x*y,SEEK_SET);
    write(fd, pixels, ((size_t)w << 32) | ((size_t)h & 0x00000000FFFFFFFF)); //w=high 32bit, h=low 32bit.
  #endif
  //     x = 1;
  // y = screen_w * ((screen_h - h) / 2) + ((screen_w - w) / 2);

  // int fd = open("/dev/fb", 0, 0);
  // lseek(fd, x * y, SEEK_SET);
  // write(fd, pixels, ((size_t)w << 32) | ((size_t)h & 0x00000000FFFFFFFF));
  // close(fd);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
