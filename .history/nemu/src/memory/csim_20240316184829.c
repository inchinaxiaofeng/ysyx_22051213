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

/* Counters used to record cache statistics. 
	Set static for security and default val to 0.*/
static int miss_count;
static int hit_count;

/* The cache we are simulating. */
cache_t cache;

/* cache_init - Allocate memory, write 0's for valid and tag and LRU
	also computes the vars. */
bool cache_init() {
	Assert(0 != CACHE_SIZE && 0 != CACHE_LINE_SIZE && 0 != WAY_NUM, "cache_init() args is illegal.");
	Assert(0 == CACHE_SIZE%WAY_NUM, "WAY_SIZE should not be a float val.");
	Assert(0 == WAY_SIZE%CACHE_LINE_SIZE, "SET_NUM should not be a float val.");
	bool success = false;

	cache = 

	return success;
}