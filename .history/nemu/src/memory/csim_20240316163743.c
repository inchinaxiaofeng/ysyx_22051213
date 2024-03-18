/*
csim.c - A cache simulator that can replay traces from Valgrind
	and output statistics such as number of hits, misses, and
	evictions.

The function printSummary() is given to print output.
Please use this function to print the numberof hits, misses and eviction.
*/

#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>