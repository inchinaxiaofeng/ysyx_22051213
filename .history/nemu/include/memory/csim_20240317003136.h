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
	cls_t data; bool dirty;
	paddr_t tag; bool valid; // TagAddr bits wouldn't bigger than paddr.
	union {
		uint64_t count;
		uint64_t fifo_count; // 记录最一开始的访问时间
		uint64_t lru_count; // 记录上一次访问的时间
	};
} cache_line_t;

/* Cache update policy: write back */
typedef struct cachelv {
	uint64_t cache_size;
	uint64_t cache_line_size;
	uint64_t way_num;
	uint64_t way_size;
	uint8_t swap_policy;
	cache_line_t line[SET_NUM][WAY_NUM];

	uint64_t hit_count, miss_count;
	uint128_t cache_free_num;
} cachelv_t;

typedef struct cache {
	cachelv_t lv[MAX_LEVEL];
	uint64_t read_count, write_count, write_mem_count;
} cache_t;

enum cache_swap_policy {
	CACHE_SWAP_RAND,
	CACHE_SWAP_FIFO,
	CACHE_SWAP_LRU
};

static bool cache_lv_init(
	cache_t *cache, uint8_t level,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
);

bool cache_init();
void cache_free();
paddr_t check_cache_hit(paddr_t addr, uint8_t level);


#endif