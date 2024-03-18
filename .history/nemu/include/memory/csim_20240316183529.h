#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>
#include <math.h>

#define CACHE_SIZE 512 // byte
#define CACHE_LINE_SIZE 2 // 2 - 128
#define WAY_NUM 1 // 1 - 128
#define WAY_SIZE CACHE_SIZE/WAY_NUM
#define SET_NUM WAY_SIZE/CACHE_LINE_SIZE
#define OLEN ceil(log2(CACHE_LINE_SIZE))
#define ILEN ceil(log2(SET_NUM))
#define TLEN paddr_t-OLEN-ILEN

typedef struct cls { uint8_t byte[CACHE_LINE_SIZE]; } cls_t;

bool cache_init();

#define uint128_t __uint128_t

struct cache_line {
	cls_t data;
	bool dirty;
};

struct tag_line {
	uint128_t tag; // Usually, addr bits wouldn't bigger than 64, so 128 bits is enough.
	bool valid;
};

struct cache_line dataArray[SET_NUM][WAY_NUM];


#endif