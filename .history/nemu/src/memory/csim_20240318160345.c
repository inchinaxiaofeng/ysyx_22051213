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
#include <memory/paddr.h>
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
			cache->lv[level].line[s][w].data = (uint8_t *)malloc(sizeof(uint8_t)*cache->lv[level].cache_line_size);
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

/* 
描述
	用于判断所查找地址是否在Cache中并有效。
参数
	level 获取cache级数
	addr 尝试check的地址
	hit 标定是否hit的指针，作为输出使用
返回值
	如果hit为true，则返回对应line在set中的way
	如果hit为false，返回值无意义
行为
	在函数中会更新Hit count与Miss count
	如果更新策略为LRU，则在函数中更新LRU时间戳
*/
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

/*
描述
	获取当前set中空闲way(line)
参数
	level 用于获取cache级数
	addr 尝试获取的地址
	update 用于标定返回的way是否需要被更新
返回值
	返回获取到的free line的way(line)
行为
	在cache中存在可用line时直接返回way
	在cache中不存在可用line时，执行替换算法，得出要替换的line的way
*/
paddr_t get_cache_free_line(uint8_t level, paddr_t addr, bool *update) {
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
			*update = false;
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
	*update = true;
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

/*
描述
	将word_t类型转化为byteArr类型
参数
	byte uint8_t *类型数据
	byte_len byte类型所支持的最大长度
	word word_t类型数据，不传入指针类型以避免错误的操作
返回值
	当word_t类型不能完全转化为byteArr时，返回false
	当word_t类型能够完整转化为byteArr时，返回true
行为
	将word_t类型拆分写入byteArr
	对于byteArr，不改变多余高位
	当word_t类型不能被写入byteArr时，仅写入可以写入的低字节，并设置返回值
*/
inline bool word_t2byteArr(
	uint8_t *byte, int byte_len, word_t word
) {
	bool isFullTrans = byte_len >= sizeof(word_t);
	for (size_t i = 0; i < isFullTrans?sizeof(word_t):byte_len; i++) {
		byte[i] = word&UINT8_MAX >> i*8;
		word = word >> i*8;
	}
	return isFullTrans;
}

/*
描述
	将byteArr类型转化为word_t类型
参数
	byte uint8_t * 类型数据
	byte_len 共将byteArr中的多少个数据转化为word_t
	word word_t *类型数据, 作为返回值处理
返回值
	当byteArr类型不能不带损失的转化为word_t类型时，返回false
	当byteArr类型可以完全转化为word_t类型时，返回true
行为
	将byteArr的数据写入word_t中，高位为0
	如果byteArr不能完全转化为word_t类型时，仅转化可以无损失的转化的低字节，并设置返回值
*/
inline bool byteArr2word_t(
	uint8_t *byte, int byte_len, word_t *word
) {
	bool isFullTrans = sizeof(word_t) >= byte_len;
	for (size_t i = 0; i < isFullTrans?byte_len:sizeof(word_t); i++)
		*word |= byte[i] << i*8;
	return isFullTrans;
}

/*
描述
	由Pmem Addr类型数据计算出Cache Info
参数
	paddr 将要被转化的paddr_t
	offset paddr_t *类型，作为返回值使用，为paddr的低OLEN位
*/
inline void paddr2info(
) {
}

/*
描述
	对某一行cacheline进行原子化读操作。
参数
	level 用于获取cache级
	offset addr的offset字段
	index addr的index字段
	way 当前数据位于set的第几个way(line)
	byteArr 存放读取的数据
	byte_len 对访问的数据的范围进行选定
返回值
	当基于offset的读取范围超出当前line的范围，返回false，表示cache read out of line
	当基于offset的读取范围没有超出当前line的范围，返回true
行为
	当越界读取时，仅读取从offset开始的line内的合法空间，并设置返回值
*/
bool do_cache_read_line(
	uint8_t level, paddr_t offset, paddr_t index,
	paddr_t way, uint8_t *read_data, int byte_len
) {
	uint32_t cls = cache->lv[level].cache_line_size;
	bool isInsideLine = cls-offset >= byte_len;
	for (size_t i = 0; i < isInsideLine?byte_len:cls-offset; i++)
		read_data[i] = cache->lv[level].line[index][way].data[offset+i];
	return isInsideLine;
}

/*
描述
	对某一行cacheline进行原子写操作
参数
	level 用于获取cache级
	offset addr的offset字段
	index addr的index字段
	way 当前数据位于set的第几个way(line)
	write_data 要写入line的数据，数据类型word_t，满足来自指令集的一次读需求。
	byte_len 对访问的数据的范围进行选定
返回值
	当基于offset的写入范围超过当前line范围，返回false，表示cache write out of line
	当基于offset的写入范围没有超出当前line范围，返回true
行为
	当越界写入时，仅写入从offset开始的line内的合法空间，并设置返回值
*/
bool do_cache_write_line(
	uint8_t level, paddr_t offset, paddr_t index,
	paddr_t way, uint8_t* write_data, int byte_len
) {
	uint32_t cls = cache->lv[level].cache_line_size;
	bool isInsideLine = cls-offset >= byte_len;
	for (size_t i = 0; i < isInsideLine?byte_len:cls-offset; i++)
		cache->lv[level].line[index][way].data[offset+i] = write_data[i];
	return isInsideLine;
}

/*
描述
	更新cacheline。
参数
	level 用于获取cache级
	index 标定替换的set
	way 标定替换的way
	old_mapping_addr 原来line中的数据地址
	target_mapping_addr 需要被替换成的地址的数据
	isWriteBack 标定该line是否需要写回内存
行为
	对指定的line进行更新，并由参数isWriteBack标定该line是否需要写回内存
*/
void do_cache_update_line(
	uint8_t level, paddr_t index, paddr_t way,
	paddr_t old_mapping_addr, paddr_t target_mapping_addr,
	bool isWriteBack
) {
	paddr_t set_offset_mask = cache->lv[level].set_offset_mask;
	paddr_t set_index_mask = cache->lv[level].set_index_mask;
	uint32_t olen = cache->lv[level].olen;
	uint32_t cls = cache->lv[level].cache_line_size;

	Assert(index == ((target_mapping_addr&set_index_mask) >> olen), "Target addr should not mapping to here.");
	uint8_t *line = malloc(sizeof(uint8_t)*cls);
	word_t *tmp_val = malloc(sizeof(word_t));

/*
	sizeof(word_t)为主存单次访问最大数据长度
	trans_count == 0
		表示cls比word_t小，主存能够支持单次访问cls长度的数据。
		访存时应当以cls为访问长度
		读写主存都在一次完成。
	trans_count >= 1
		表示cls比word_t大或相等，cls等与或超出主存支持的单次最大访问长度
		采用连续传输的方式与主存交互。
		last_trans_offset == 0
			以sizeof(word_t)为访问长度, 访问trans_count次
		last_trans_offset != 0
			以sizeof(word_t)为访问长度，访问trans_count次
			以last_trans_offset为访问长度，访问第trans_count+1次
--------------------------------------------------------------------
值得注意的是，在连续传输的情况下，除了CPU给出的地址之外的任何地址，都可能发生访问的pmem地址是内存映射地址或非法地址。
所以需要在执行访存函数时，通过in_pmem函数判断以避免访问这些地址。
在单次访问的情况下，CPU给出的地址在到达Cache之前，
访问的地址已经被in_pmem函数检查过一次，而NEMU默认检查地址往后的paddr_t都不会越界，
所以不会发生访问非法地址空间的情况。
--------------------------------------------------------------------
任何时候进行访问的地址到达Cache前都应当被判断是否访问到不当地址，
所以对于不当地址的访问不可能到达Cache，这一情况会造成在LineSize大于paddr_t时，
某些line中的数据是不可访问的，我称之为Cache碎片。
对于Cache碎片中的内容，任何值都是有可能的。
*/
	int trans_count = cls / sizeof(word_t);
	paddr_t last_trans_offset = cls % sizeof(word_t);

	if (trans_count == 0) {
		if (isWriteBack) {
			assert(do_cache_read_line(level, 0, index, way, line, cls));
			assert(byteArr2word_t(line, cls, tmp_val)); // cls的长度小于word_t，一定可以成功转化
			pmem_write(old_mapping_addr, cls, *tmp_val);
		}

		// write data from main memory to cache
		*tmp_val = pmem_read(target_mapping_addr, cls);
		assert(word_t2byteArr(line, cls, tmp_val)); // 只转化cls个数据，一定可以成功转化
		assert(do_cache_write_line(level, 0, index, way, tmp_val, cls));
	} else if (trans_count >= 1) {
		bool isInsideLine;
		size_t i;
		if (isWriteBack) {
			assert(do_cache_read_line(level, 0, index, way, line, cls));
			for (i = 0; i < trans_count; i++) {
				isInsideLine = byteArr2word_t(line + i*sizeof(word_t), sizeof(word_t), tmp_val);
				if (likely(in_pmem(old_mapping_addr + i*sizeof(word_t))))
					pmem_write(old_mapping_addr + i*sizeof(word_t), sizeof(word_t), *tmp_val);
			}
			if (last_trans_offset != 0) {
				assert(!isInsideLine);
				assert(byteArr2word_t(line + i*sizeof(word_t), last_trans_offset, tmp_val));
				if (likely(in_pmem(old_mapping_addr + i*sizeof(word_t))))
					pmem_write(old_mapping_addr + i*sizeof(word_t), last_trans_offset, *tmp_val);
			} else assert(isInsideLine);
		}

		// write data from main memory to cache
		for (i = 0; i < trans_count; i++) {
			if (likely(in_pmem(target_mapping_addr + i*sizeof(word_t))))
				*tmp_val = pmem_read(target_mapping_addr + i*sizeof(word_t), sizeof(word_t));
			assert(word_t2byteArr(line, sizeof(word_t), tmp_val));
			assert(do_cache_write_line(level, i*sizeof(word_t), index, way, line, sizeof(word_t)));
		}
		if (last_trans_offset != 0) {
			if (likely(in_pmem(target_mapping_addr + i*sizeof(word_t))))
				*tmp_val = pmem_read(target_mapping_addr + i*sizeof(word_t), last_trans_offset);
			assert(word_t2byteArr(line, last_trans_offset, tmp_val));
			assert(do_cache_write_line(level, i*sizeof(word_t), index, way, line, last_trans_offset));
		}
	} else assert(0);
	
	return;
}

/*
描述
	CPU访问Cache时应当调用此函数。对cache进行一般性操作，不对Level进行区别。
参数
	addr 尝试访问的地址
	oper_style 表明对cache将要执行的操作
	byte_len 对访问的数据的范围进行选定
返回值
	返回值依据需要读取的数据大小
	如果oper_style为read的话，则返回读出的数据
	如果oper_style为write的话，则返回值无意义
*/
word_t do_cache_op(paddr_t addr, char oper_style, int byte_len) {
	bool *hit_l1, *hit_l2, *hit_l3;
	paddr_t hit_way_l1, hit_way_l2, hit_way_l3;
	uint8_t *line;
	word_t *ret_val;

	cache->tick_count++;

	/* 这里去记录对cache try了多少次读取，而不去记录hit了多少次 */
	if (OPERATION_READ == oper_style) cache->read_count++;
	if (OPERATION_WRITE == oper_style) cache->write_count++;

	switch (CONFIG_CACHE_LEVEL) {
	case 1: // Only have L1 Cache
		paddr_t offset = addr&cache->lv[0].set_offset_mask;
		paddr_t index = (addr&cache->lv[0].set_index_mask) >> cache->lv[0].olen;
		paddr_t tag = (addr&cache->lv[0].set_tag_mask) >> (cache->lv[0].olen + cache->lv[0].ilen);
		paddr_t cls = cache->lv[0].cache_line_size;

		int get_line_count = (offset+byte_len);
		paddr_t last_get_line_byte_len;

		hit_way_l1 = check_cache_hit(1, addr, hit_l1);
		if (false == *hit_l1) break; // TODO Miss

		/* write back allocation，主存中的数据只有在cacheline将要被替换或clean的时候被更新 */
		/* Hit, 如果是写数据，则遵循writeback allocation；如果读数据，则读出数据. */
		switch (oper_style)
		{
		case OPERATION_READ:
			if (!do_cache_read_line(0, offset, index, hit_way_l1, line, byte_len))
			break;
		
		default:
			break;
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