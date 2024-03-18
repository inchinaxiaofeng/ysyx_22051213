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

/* cache_init - Allocate memory, write 0's for valid. */
bool cache_init(
	uint8_t level, uint8_t policy,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
) {
	Log("Initing cache...");
	Assert(level+1 > CONFIG_CACHE_LEVEL || level < 0, "Cache level does not exist.");
	Assert(0 == cache_size || 0 == cache_line_size || 0 == way_num, "Wrong args to set.");
	Assert(0 != cache_size%way_num, "way_size should not be a float val.");
	bool success = false;

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
	// Set init val
	cache->lv[level].swap_policy = policy;
	cache->lv[level].hit_count = 0;
	cache->lv[level].miss_count = 0;
	cache->lv[level].cache_free_num = cache->lv[level].set_num; // Fixme Maybe cache->read_count = 0; cache->write_count = 0;
	cache->write_mem_count = 0;
	cache->tick_count = 0;
	Assert(0 != cache->lv[level].way_size%cache_line_size, "set_num should not be a float val.");

	// TODO: 通过分段分malloc，可以避免在内存不足的情况下，无法成功分配造成的程序中断
	cache = (cache_t *)malloc(sizeof(cache_t));
	assert(NULL != cache);

	for (size_t s = 0; s < cache->lv[level].set_num; s++) {
		for (size_t w = 0; w < cache->lv[level].way_num; w++) {
			cache->lv[level].line = (cache_line_t *)malloc(sizeof(cache_line_t)*(cache->lv[level].set_num*cache->lv[level].way_num));
			cache->lv[level].line[s][w].data = (cls_t *)malloc(sizeof(cls_t)*cache->lv[level].cache_line_size);
			cache->lv[level].line[s][w].valid = false;
		}
	}

	success = true;
	return success;
}

/* cache_free - free allocated memory */
void cache_free(uint8_t level) {
	for (size_t s = 0; s < cache->lv[level].set_num; s++) {
		for (size_t w = 0; w < cache->lv[level].way_num; w++) {
			free(cache->lv[level].line[s][w].data);
			cache->lv[level].line[s][w].data = NULL;
			free(cache->lv[level].line);
			cache->lv[level].line = NULL;
		}
	}

	free(cache);
	cache = NULL;
}

/* 判断是否Hit，如果Hit，则返回way, success = 1；否之返回0, success = 0。
记录当前Level的Hit&Miss*/
paddr_t check_cache_hit(uint8_t level, paddr_t addr, bool *hit) {
	paddr_t index = (addr&cache->lv[level].set_index_mask) >> cache->lv[level].olen;
	paddr_t tag = (addr&cache->lv[level].set_tag_mask) >> (cache->lv[level].olen + cache->lv[level].ilen);
	// 循环检查当前set的所有way，通过tag匹配，查看当前地址是否在cache中
	for (size_t w = 0; w < cache->lv[level].way_num; w++) {
		if (tag == cache->lv[level].line[index][w].tag &&
			true == cache->lv[level].line[index][w].valid) {
			cache->lv[level].hit_count++;
			*hit = true;

			switch (cache->lv[level].swap_policy)
			{
			case CACHE_SWAP_LRU: /* 当查询到line的时候，更新LRU的时间戳 */
				cache->lv[level].line[index][w].lru_count = cache->tick_count;
				break;
			default: break;
			}
			return w;
		}
	}
	cache->lv[level].miss_count++;
	*hit = false;
	return 0;
}

/* 获取当前set中空闲way(line)，如果没有，则要执行替换逻辑 */
paddr_t get_cache_free_line(uint8_t level, paddr_t addr) {
	// 如果能够在当前line中，找到空闲的，则将free_line设置为
	paddr_t free_line; // 用来决定当前set中，哪个line应当被替换
	paddr_t index = (addr&cache->lv[level].set_index_mask) << cache->lv[level].olen;
	uint64_t count;

	/* 从当前的Set中到找空闲的way(line)，可用：脏数据，空闲数据
		cacheline_free_num统计整个Cache的可用块 */
	for (size_t w = 0; w < cache->lv[level].way_num; w++) { if (!(cache->lv[level].line[index][w].valid)) {
			if (cache->lv[level].cache_free_num > 0)
				cache->lv[level].cache_free_num--;
			free_line = w;
			return free_line;
		}
	}

	/* 没有可用的line，则执行替换算法 */
	switch (cache->lv[level].swap_policy) {
	case CACHE_SWAP_RAND: /* 随机选出一个line进行替换 */
		free_line = rand() % cache->lv[level].way_num;
		break;
	case CACHE_SWAP_FIFO: /* 依据时间戳，将最先进入的line进行替换 */
		count = cache->tick_count;
		for (size_t w = 0; w < cache->lv[level].way_num; w++) {
			if (cache->lv[level].line[index][w].fifo_count < count) {
				count = cache->lv[level].line[index][w].fifo_count;
				free_line = w;
			}
		}
		break;
	case CACHE_SWAP_LRU: /* 依据时间戳，将最近最少访问的line进行替换 */
		count = 0;
		for (size_t w = 0; w < cache->lv[level].way_num; w++) {
			if (cache->lv[level].line[index][w].lru_count > count) {
				count = cache->lv[level].line[index][w].lru_count;
				free_line = w;
			}
		}
		break;
	default: Assert(true, "Should not reach here."); break;
	}
	return free_line;
}
// XXX
/* 将数据写入cache line中 */
void set_cache_line(uint8_t level, paddr_t addr, paddr_t way) {
	paddr_t offset = addr&cache->lv[level].set_offset_mask;
	paddr_t index = (addr&cache->lv[level].set_index_mask) >> cache->lv[level].olen;
	paddr_t tag = (addr&cache->lv[level].set_tag_mask) >> (cache->lv[level].olen + cache->lv[level].ilen);
	cache->lv[level].line[index][way].tag = tag;
	cache->lv[level].line[index][way].valid = true;
	switch (cache->lv[level].swap_policy) {
	case CACHE_SWAP_FIFO: /* 当被写入的时候，更新FIFO的时间戳 */
		cache->lv[level].line[index][way].fifo_count = cache->tick_count;
		break;
	case CACHE_SWAP_LRU: /* 当被写入的时候，更新LRU的时间戳 */
		cache->lv[level].line[index][way].lru_count = cache->tick_count;
		break;
	default: break;
	}
}

/* 不区分level */
void do_cache_op(paddr_t addr, char oper_style) {
	bool *hit_l1, *hit_l2, *hit_l3;
	paddr_t hit_way_l1, hit_way_l2, hit_way_l3;
	cache->tick_count++;

	if (OPERATION_READ == oper_style) cache->read_count++;
	if (OPERATION_WRITE == oper_style) cache->write_count++;

	switch (CONFIG_CACHE_LEVEL) {
	case 1: hit_way_l1 = check_cache_hit(1, addr, hit_l1);
		if (true == *hit_l1) {
			Log("L1 Hit")
		} else {

		}
	case 2: Assert(true, "Do not support L2 yet.");
	case 3: Assert(true, "Do not support L3 yet.");
	default: // TODO MISS
		break;
	}

	if (true == hit_l1) {
		cache
	}
}