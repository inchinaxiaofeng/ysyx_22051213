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
bool cache_init() {
	Log("Initing cache...");
	Assert(0 == CACHE_SIZE || 0 == CACHE_LINE_SIZE || 0 == WAY_NUM, "cache_init() args is illegal.");
	Assert(0 != CACHE_SIZE%WAY_NUM, "WAY_SIZE should not be a float val.");
	Assert(0 != WAY_SIZE%CACHE_LINE_SIZE, "SET_NUM should not be a float val.");
	Assert(0 >= MAX_LEVEL, "Cache Level is illegal.");
	bool success = false;

	// TODO: 通过分段分malloc，可以避免在内存不足的情况下，无法成功分配造成的程序中断
	cache = (cache_t *)malloc(sizeof(cache_t));
	assert(NULL != cache);

	cache->lv[0].swap_policy = CACHE_SWAP_FIFO;
	for (size_t i = 0; i < MAX_LEVEL; i++) {
		for (size_t j = 0; j < SET_NUM; j++) {
			for (size_t k = 0; k < WAY_NUM; k++) {
				cache->lv[i].tagArr[j][k].valid = false;
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

bool check_cache_hit(paddr_t addr, uint8_t level) {
	for (size_t i = 0; i < WAY_NUM; i++)
	{
		/* code */
	}
	
}