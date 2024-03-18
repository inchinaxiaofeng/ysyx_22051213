#ifndef __CSIM_H__
#define __CSIM_H__

#include <common.h>
#include <math.h>

typedef __uint128_t uint128_t;
typedef struct cls { uint8_t* byte; } cls_t; // CACHE_LINE_SIZE

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
	uint32_t cache_size, cache_line_size;
	uint32_t way_num, way_size;
	uint32_t set_num;
	uint32_t olen, ilen, tlen;
	uint8_t swap_policy;
	paddr_t set_offset_mask, set_index_mask, set_tag_mask;
	cache_line_t* line; // SET_NUM * WAY_NUM

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
	cache_t *cache, uint8_t level, uint8_t policy,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
);

bool cache_init();
void cache_free();
paddr_t check_cache_hit(paddr_t addr, uint8_t level);


#endif