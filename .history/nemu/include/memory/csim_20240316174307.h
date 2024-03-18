#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>

static int cache_size;
static int cache_line_size;
static int ways_num;
static int set_size;
static int set_num;
static int ways_size;

int cache_init() {
	
}

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