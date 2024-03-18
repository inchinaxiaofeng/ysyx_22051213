#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>

#define CACHE_SIZE 0
#define CACHE_LINE_SIZE 0
#define WAY_NUM 0
#define WAY_SIZE CACHE_SIZE/WAY_NUM
#define SET_NUM WAY_SIZE/CACHE_LINE_SIZE
#define OLEN

bool cache_init();

#define uint128_t __uint128_t

struct cache_line
{
	uint128_t tag;
	union {
		uint64_t count;
		uint64_t lru_count;
		uint64_t fifo_count;
	};
	uint8_t flag;
	uint8_t
	
};


#endif