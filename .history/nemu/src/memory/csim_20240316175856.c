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

static int cache_size;
static int cache_line_size;
static int ways_num;
static int set_size;
static int set_num;
static int ways_size;

/* Type: Memory address */
typedef unsigned long long int mem_addr_t;


/* cache_init - Allocate memory, write 0's for valid and tag and LRU
	also computes the vars. */
bool cache_init(int _cache_size, int _cache_line_size, int _ways_num) {
	Assert(0 != _cache_size, "Cache Size is 0.");
	bool success = false;
	cache_size = _cache_size;
	cache_line_size = _cache_line_size;
	ways_num = _ways_num;

	return success;
}