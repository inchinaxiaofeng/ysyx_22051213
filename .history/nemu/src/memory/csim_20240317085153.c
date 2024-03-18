/*
csim.c - A cache simulator that can replay traces from Valgrind
	and output statistics such as number of hits, misses, and
	evictions. The replacement policy is LRU.

Implementation and assumptions:
	1. Each load/store can cause at most one cache miss.

The function printSummary() is given to print output.
Please use this function to print the numberof hits, misses and eviction.
*/

#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <csim.h>

/* The cache we are simulating. */
cache_t *cache;

static bool cache_lv_set_val(
	cache_t *cache, uint8_t level, uint8_t policy,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
) {
	cache->lv[level].cache_size = cache_size;
	cache->lv[level].cache_line_size = cache_line_size;
	cache->lv[level].way_num = way_num;
	cache->lv[level].way_size = cache_size/way_num;
	cache->lv[level].set_num = cache->lv[level].way_size/cache_line_size;
	cache->lv[level].olen = ceil(log2(cache_line_size));
	cache->lv[level].ilen = ceil(log2(cache->lv[level].set_num));
	cache->lv[level].tlen = sizeof(paddr_t)*8 - cache->lv[level].olen - cache->lv[level].ilen;
	cache->lv[level].set_offset_mask = (paddr_t)pow(2, cache->lv[level].olen)-1;
	cache->lv[level].set_index_mask = ((paddr_t)pow(2, cache->lv[level].ilen)-1) << cache->lv[level].olen;
	cache->lv[level].set_tag_mask = ((paddr_t)(2, cache->lv[level].tlen)-1) << (cache->lv[level].olen + cache->lv[level].ilen);
}

/* cache_init - Allocate memory, write 0's for valid. */
bool cache_init(
	uint8_t level, uint8_t policy,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
) {
	Log("Initing cache...");
	Assert(level+1 > CONFIG_CACHE_LEVEL, "Cache level does not exist.")
	Assert(0 == CACHE_SIZE || 0 == CACHE_LINE_SIZE || 0 == WAY_NUM, "cache_init() args is illegal.");
	Assert(0 != CACHE_SIZE%WAY_NUM, "WAY_SIZE should not be a float val.");
	Assert(0 != WAY_SIZE%CACHE_LINE_SIZE, "SET_NUM should not be a float val.");
	Assert(0 >= MAX_LEVEL, "Cache Level is illegal.");
	bool success = false;

	// TODO: 通过分段分malloc，可以避免在内存不足的情况下，无法成功分配造成的程序中断
	cache = (cache_t *)malloc(sizeof(cache_t));
	assert(NULL != cache);

	cache->lv[0].swap_policy = CACHE_SWAP_FIFO;
	for (size_t l = 0; l < MAX_LEVEL; l++) {
		cache->lv[l].hit_count = 0;
		cache->lv[l].miss_count = 0;
		cache->lv[l].cache_free_num = SET_NUM; // Fixme Maybe
		for (size_t s = 0; s < SET_NUM; s++) {
			for (size_t w = 0; w < WAY_NUM; w++) {
				cache->lv[l].line[s][w].valid = false;
			}
		}
	}

	success = true;
	return success;
}

/* cache_free - free allocated memory */
void cache_free() {
	free(cache);
	cache = NULL;
}

/* 判断是否Hit，如果Hit，则返回way；否之返回-1。记录当前Level的Hit&Miss*/
paddr_t check_cache_hit(paddr_t addr, uint8_t level) {
	paddr_t index = GET_INDEX(addr);
	paddr_t tag = GET_TAG(addr);
	// 循环检查当前set的所有way，通过tag匹配，查看当前地址是否在cache中
	for (size_t w = 0; w < WAY_NUM; w++) {
		if (tag == cache->lv[level].line[index][w].tag &&
			true == cache->lv[level].line[index][w].valid) {
			cache->lv[level].hit_count++;
			return w;
		}
	}
	cache->lv[level].miss_count++;
	return -1;
}

/* 获取当前set中空闲way(line)，如果没有，则要执行替换逻辑 */
paddr_t get_cache_free_line(paddr_t addr, uint8_t level) {
	paddr_t free_index;
	paddr_t index = GET_INDEX(addr);

	/* 从当前的Set中到找空闲的way(line)，可用：脏数据，空闲数据
		cacheline_free_num统计整个Cache的可用块 */
	for (size_t w = 0; w < WAY_NUM; w++) {
		if (!(cache->lv[level].line[index][w].valid)) {
			if (cache->lv[level].cache_free_num > 0)
				cache->lv[level].cache_free_num--;
			return w;
		}
	}

	/* 没有可用的line，则执行替换算法 */
	switch (cache->lv[level].swap_policy)
	{
	case CACHE_SWAP_RAND:
		free_index = rand() % WAY_NUM;
		break;
	
	default:
		break;
	}
}

/* 将数据写入cache line中 */
void set_cache_line(paddr_t addr, uint8_t level) {

}