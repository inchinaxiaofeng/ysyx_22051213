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
caches_t *caches;

/* cache_init - Allocate memory, write 0's for valid. */
bool cache_init() {
	Log("Initing cache...");
	Assert(0 != CACHE_SIZE && 0 != CACHE_LINE_SIZE && 0 != WAY_NUM, "cache_init() args is illegal.");
	Assert(0 == CACHE_SIZE%WAY_NUM, "WAY_SIZE should not be a float val.");
	Assert(0 == WAY_SIZE%CACHE_LINE_SIZE, "SET_NUM should not be a float val.");
	bool success = false;

	cache_l1 = (cache_t *)malloc(sizeof(cache_t));
	assert(NULL != cache_l1);
	// TODO: 通过分段malloc，可以避免在内存不足的情况下，无法成功分配造成的程序中断

	for (int i = 0; i < SET_NUM; i++) {
		for (int j = 0; j < WAY_NUM; j++) {
			cache_l1->tagArr[i][j].valid = false;
		}
	}

	success = true;
	return success;
}

/* cache_free - free allocated memory */
void cache_free() {
	free(cache_l1);
	cache_l1 = NULL;
}