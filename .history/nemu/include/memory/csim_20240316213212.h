#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>
#include <math.h>

typedef __uint128_t uint128_t;

#define CACHE_SIZE 512 // byte
#define CACHE_LINE_SIZE 2 // 2 - 128
#define WAY_NUM 1 // 1 - 128
#define MAX_LEVEL 1 // 1-3 L1-L3 Cache
#define WAY_SIZE CACHE_SIZE/WAY_NUM
#define SET_NUM WAY_SIZE/CACHE_LINE_SIZE
#define OLEN ceil(log2(CACHE_LINE_SIZE))
#define ILEN ceil(log2(SET_NUM))
#define TLEN paddr_t-OLEN-ILEN

#define SET_OFFSET_MASK (paddr_t)(pow(2, OLEN)-1)
#define SET_INDEX_MASK (paddr_t)((pow(2, ILEN)-1) << OLEN)
#define SET_TAG_MASK (paddr_t)((pow(2, TLEN)-1) << (OLEN+ILEN))

#define GET_OFFSET(addr) addr&SET_OFFSET_MASK
#define GET_INDEX(addr) addr&SET_INDEX_MASK >> OLEN
#define GET_TAG(addr) addr&SET_TAG_MASK >> (OLEN+ILEN)

typedef struct cls { uint8_t byte[CACHE_LINE_SIZE]; } cls_t;

typedef struct cache_line {
	cls_t data;
	bool dirty;
} cache_line_t;

typedef struct tag_line {
	uint128_t tag; // Usually, addr bits wouldn't bigger than 64, so 128 bits is enough.
	bool valid;
} tag_line_t;

/* Cache update policy: write back */
typedef struct cache {
	cache_line_t dataArr[SET_NUM][WAY_NUM];
	tag_line_t tagArr[SET_NUM][WAY_NUM];
	uint8_t swap_policy; // 替换策略
	uint64_t hit_count, miss_count;
	uint64_t read_count, write_count, write_mem_count;
} cache_t;

typedef struct caches {
	cache_t cache[MAX_LEVEL];
} caches_t;



enum cache_swap_policy {
	CACHE_SWAP_RAND,
	CACHE_SWAP_FIFO,
	CACHE_SWAP_LRU
};

bool cache_init();
void cache_free();

#endif