#include <am.h>
#include "../riscv.h"
#include <klib.h>

#define VGACTL_ADDR 0xa0000100
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define FB_ADDR		0xa1000000

#define WIDTH 400
#define HEIGHT 300

void __am_gpu_init() {
	int i;
	int w = 400;
	int h = 300;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	for (i = 0; i < w * h; i++) fb[i] = i;
	outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	uint32_t config_info = inl(VGACTL_ADDR);
	*cfg = (AM_GPU_CONFIG_T) {
		.present = true, .has_accel = false,
		.width = config_info >> 16, .height = (config_info << 16) >> 16,
		.vmemsz = 0
	};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int i, j;
	uint32_t *pixels = ctl->pixels;
	int x = ctl->x, y = ctl->y;
	int w = ctl->w, h = ctl->h;
	bool sync = ctl->sync;
	uint32_t *fb;

	int idx;

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			idx = i*w + j;

			fb = (uint32_t *)(uintptr_t)(FB_ADDR 
				+ ((y + i) * WIDTH 
				+ (x + j)) * sizeof(uint32_t));
			*fb = pixels[idx];
		}
	}

	if (sync) {
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
	status->ready = true;
}

// #define VGACTL_ADDR 0xa0000100
// #define FB_ADDR		0xa1000000
// 
// #define SYNC_ADDR (VGACTL_ADDR + 4)
// 
// uint32_t am_gpu_width = 0;
// uint32_t am_gpu_height = 0;
// 
// #define am_gpu_width_mask 0xFFFF0000
// #define am_gpu_height_mask 0x0000FFFF
// 
// void __am_gpu_init() {
// 	uint32_t am_gpu_config = inl(VGACTL_ADDR);
// 	am_gpu_width = (am_gpu_config & am_gpu_width_mask) >> 16;
// 	am_gpu_height = am_gpu_config & am_gpu_height_mask;
// }
// 
// void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
// 	*cfg = (AM_GPU_CONFIG_T) {
// 		.present = true,
// 		.has_accel = false,
// 		.width = am_gpu_width,
// 		.height = am_gpu_height,
// 		.vmemsz = 0
// 	};
// }
// 
// void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
// 	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
// 	uint32_t *pixels = (uint32_t *)(ctl->pixels);
// 	int x = ctl->x, y = ctl->y;
// 	int w = ctl->w, h = ctl->h;
// 
// 	printf("update fbdraw\n");
// 	printf("h:%d, w:%d\n", h, w);
// 
// 	for (int i = 0; i < h; i++) {
// 		for (int j  = 0; j < w; j++) {
// 			printf("WTF:%d\n", *(pixels + i * w + j));
// 			fb[(y + i) * am_gpu_width + (x + j)] = *(pixels + i * w + j);
// 		}		
// 	}
// 
// 	if (ctl->sync) {
// 		outl(VGACTL_ADDR + 4, 1);
// 	}
// }
// 
// void __am_gpu_status(AM_GPU_STATUS_T *status) {
// 	status->ready = true;
// }