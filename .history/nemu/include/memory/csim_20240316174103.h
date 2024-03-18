#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>

int cache_size;
int cache_line_size;
int cache_line

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