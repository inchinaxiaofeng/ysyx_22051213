#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>
#include <math.h>

#define CACHE_SIZE CONFIG_CACHE_SIZE
#define CACHE_LINE_SIZE CONFIG_CACHE_LINE_SIZE
#define WAY_NUM CONFIG_WAY_NUM
#define WAY_SIZE CACHE_SIZE/WAY_NUM
#define SET_NUM WAY_SIZE/CACHE_LINE_SIZE
#define OLEN ceil(log2(CACHE_LINE_SIZE))
#define ILEN ceil(log2(SET_NUM))
#define TLEN paddr_t-OLEN-ILEN

typedef MUXDEF(CACHE_LINE_SIZE==2, it)

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