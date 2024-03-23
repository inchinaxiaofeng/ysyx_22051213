/*
csim.c - A cache simulator that can replay traces from Valgrind
	and output statistics such as number of hits, misses, and
	evictions. The replacement policy is LRU.

Implementation and assumptions:
	1. Each load/store can cause at most one cache miss.

The function printSummary() is given to print output.
Please use this function to print the numberof hits, misses and eviction.

操作函数具有do\set两种前缀
	do前缀用于执行对data操作，是为了保证操作原子性的。应当避免直接调用。
	set通过调用do来完成包括cacheline标签在内的所有数据的操作，应当调用set开头的函数完成操作。
函数do_cache_read_line和do_cache_write_line用于完成对cacheline中data字段的原子化操作
函数set_cache_read和set_cache_write完成对cache数据的读写操作
采用了do_cache_read_line和do_cache_write_line
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
#include <memory/csim.h>

/* The cache we are simulating. */
cache_t *cache;

/* init_cache - Allocate memory, write 0's for valid. */
bool init_cache (
	uint8_t level, uint8_t policy,
	uint32_t cache_size, uint32_t cache_line_size, uint32_t way_num
) {
	Log("Initing cache...");
	Assert(level+1 <= CONFIG_CACHE_LEVEL && level+1 > 0, "Cache level does not exist.");
	Assert(cache_size && cache_line_size && way_num, "Wrong args to set.");
	Assert(0 == cache_size%way_num, "way_size should not be a float val.");
	bool success = false;

	cache = (cache_t *)malloc(sizeof(cache_t));
	assert(cache);

	cache->lv[level].cache_size = cache_size;
	cache->lv[level].cache_line_size = cache_line_size;
	cache->lv[level].way_size = cache_size/way_num;
	cache->lv[level].way_num = way_num;
	cache->lv[level].set_num = cache->lv[level].way_size/cache_line_size;
	cache->lv[level].olen = ceil(log2(cache_line_size));
	cache->lv[level].ilen = ceil(log2(cache->lv[level].set_num));
	cache->lv[level].tlen = sizeof(paddr_t)*8 - cache->lv[level].olen - cache->lv[level].ilen;
	cache->lv[level].set_offset_mask = (paddr_t)pow(2, cache->lv[level].olen)-1;
	cache->lv[level].set_index_mask = ((paddr_t)pow(2, cache->lv[level].ilen)-1) << cache->lv[level].olen;
	cache->lv[level].set_tag_mask = ((paddr_t)pow(2, cache->lv[level].tlen)-1) << (cache->lv[level].olen + cache->lv[level].ilen);
	cache->lv[level].swap_policy = policy;
	cache->lv[level].hit_count = 0;
	cache->lv[level].miss_count = 0;
	// Set init val
	cache->lv[level].cache_free_num = cache->lv[level].set_num; // Fixme Maybe cache->read_count = 0; cache->write_count = 0;
	cache->write_mem_count = 0;
	cache->tick_count = 0;
	Assert(0 == cache->lv[level].way_size%cache_line_size, "set_num should not be a float val.");

	cache->lv[level].line = (cache_line_t **)malloc(sizeof(cache_line_t*)*cache->lv[level].set_num);
	for (size_t s = 0; s < cache->lv[level].set_num; s++)
		cache->lv[level].line[s] = (cache_line_t *)malloc(sizeof(cache_line_t)*cache->lv[level].way_num);
	assert(cache->lv[level].line);

	for (size_t s = 0; s < cache->lv[level].set_num; s++) {
		for (size_t w = 0; w < cache->lv[level].way_num; w++) {
			cache->lv[level].line[s][w].valid = false; // FIXME: 这里报READ错误
			cache->lv[level].line[s][w].data = (uint8_t *)malloc(sizeof(uint8_t)*cache->lv[level].cache_line_size);
		}
	}

	success = true;
	return success;
}

/* free_cache - free allocated memory */
void free_cache(uint8_t level) {
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
	return;
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
paddr_t check_cache_hit(uint8_t level, paddr_t index, paddr_t tag, bool *hit) {
//	paddr_t index = (addr&cache->lv[level].set_index_mask) >> cache->lv[level].olen;
//	paddr_t tag = (addr&cache->lv[level].set_tag_mask) >> (cache->lv[level].olen + cache->lv[level].ilen);
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
	isWriteBack 用于标定返回的way是否需要被写回
返回值
	返回获取到的free line的way(line)
行为
	对于某一个line，以下情况将会被视作空闲
		valid标签为false
	对于一个line，以下情况将会被视作不需要写回
		valid标签为false
		dirty标签为false
		#TODO# allocation policy被设置为WRITE_THROUGH
	在cache中存在可用line时直接返回way
	在cache中不存在可用line时，执行替换算法，得出要替换的line的way
*/
paddr_t get_cache_free_line(uint8_t level, paddr_t index, bool *isWriteBack) {
	// 如果能够在当前line中，找到空闲的，则将free_line设置为
	paddr_t free_line; // 用来决定当前set中，哪个line应当被替换
	uint64_t count;

	/* 从当前的Set中到找空闲的way(line)
		cacheline_free_num统计整个Cache的可用块 */
//	Log("FFF");
	for (size_t w = 0; w < cache->lv[level].way_num; w++) {
//		Log("cond %ld < %x, index %x", w, cache->lv[level].way_num, index);
		if (!cache->lv[level].line[index][w].valid) {
//			Log("DDD");
			if (cache->lv[level].cache_free_num > 0)
				cache->lv[level].cache_free_num--;
			free_line = w;
			*isWriteBack = false;
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

	*isWriteBack = cache->lv[level].line[index][free_line].dirty;
	return free_line;
}

/*
Description
	Convert word_t format to byteArr format.
Arguments
	byte		target_format, treated as return val.
	byte_len	期望转化的字节长度，不应当超过byte的最大长度
	word		源格式，不传入指针类型以避免错误的操作
Return
	Return trans_discount, which defines as source_format_len minus
	target_format_len.
Behavior
	Define sizeof(word_t) minus byte_len as trans_discount.
	If trans_discount <= 0, it is called full_trans, which will
	not cause data loss between source_format and target_format.
	If trans_discount > 0, it is called part_trans, which will
	cause data loss between source_format and target_format.
	全信息转换时，将信息写入byte_len格式的低位，byte_len高位保持不变
	半信息转换时，将信息全部写入byte_len格式，并将word_t高位信息丢弃
*/
static inline int word_t2byteArr(
	uint8_t *byte, int byte_len, word_t word
) {
	int trans_discount = sizeof(word_t) - byte_len;
	for (size_t i = 0; i < (trans_discount?byte_len:sizeof(word_t)); i++) {
//		Log("word %016lx byte %016lx = %016lx&(%016x), word&mask %016lx",
//			word, word&BYTE_MASK, word, BYTE_MASK, word&BYTE_MASK);
		byte[i] = word&BYTE_MASK;
		word = word >> 8;
	}
	return trans_discount;
}

/*
描述
	将byteArr格式转化为word_t格式
参数
	byte		源格式
	byte_len	期望转化的字节长度
	word		目标格式, 作为返回值处理
Return
	Return trans_discount, which defines as source_format_len minus
	target_format_len.
Behavior
	Define sizeof(word_t) minus byte_len as trans_discount.
	If trans_discount <= 0, it is called full_trans, which will
	not cause data loss between source_format and target_format.
	If trans_discoutn > 0, it is called part_trans, which will
	cause data loss between source_format and target_format.
	全信息转换时，将信息写入word_t格式的低位，word_t高位保持不变
	半信息转换时，将信息全部写入word_t格式，并将byte_len高位信息丢弃
*/
static inline int byteArr2word_t(
	uint8_t *byte, int byte_len, word_t *word
) {
	int trans_discount = byte_len - sizeof(word_t);
	for (size_t i = 0; i < (trans_discount?sizeof(word_t):byte_len); i++)
		*word |= byte[i] << i*8;
	return trans_discount;
}

/*
描述
	对某一行cacheline进行原子化读操作
参数
	level 用于获取cache级
	offset addr的offset字段
	index addr的index字段
	way 当前数据位于set的第几个way(line)
	* read_data 存放读取的数据
	access_len 对访问的数据的范围进行选定
Return
	Return access_margin, which is cls-offset-access_len.
Behavior
	Define the cache_line_size(cls) minus offset as the line_margin.
	Define the line_margin minus access_len as the access_margin.
	If the access_margin >= 0, it is called inline_access.
	If the access_margin < 0, it is called outline_access.
	inline_access will access the data correctly,
	and outline_access will only access the line_margin part.
注意
	在调用这个函数之前，应当确保其line的valid是true。
	用于读取数据的line，其大小必须大与等与cls
*/
static inline int do_cache_read_line(
	uint8_t level, paddr_t offset, paddr_t index, paddr_t way,
	uint8_t *read_data, int access_len
) {
	uint32_t cls = cache->lv[level].cache_line_size;
	int line_margin = cls - offset;
	int access_margin = line_margin - access_len;
	for (size_t i = 0; i < (access_margin>=0 ? access_len : line_margin); i++)
		read_data[i] = cache->lv[level].line[index][way].data[offset+i];
	return access_margin;
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
Return
	Return access_margin, which is cls-offset-access_len
Behavior
	Define the cache_line_size(cls) minus offset as the line_margin.
	Define the line_margin minus access_len as the access_margin.
	If the access_margin >= 0, it is called inline_access.
	If the access_margin < 0, it is called outline_access.
	inline_access will access the data correctly,
	and outline_access will only access the line_margin part.
*/
int do_cache_write_line(
	uint8_t level, paddr_t offset, paddr_t index, paddr_t way,
	uint8_t* write_data, int access_len
) {
	uint32_t cls = cache->lv[level].cache_line_size;
	int line_margin = cls - offset;
	int access_margin = line_margin - access_len;
	for (size_t i = 0; i < (access_margin>=0 ? access_len : line_margin); i++)
		cache->lv[level].line[index][way].data[offset+i] = write_data[i];
	return access_margin;
}

/*
描述
	更新指定index和指定way的cacheline，将其替换为另一个tag的cacheline。
参数
	level 用于获取cache级
	index 标定替换的set
	way 标定替换的way
	new_tag 目标地址的tag
	isWriteBack 标定该line是否需要写回内存
行为
	对指定的line进行更新，并由参数isWriteBack标定该line是否需要写回内存
备注
	定义连续访存长度为总共调用pmem函数族的次数
	定义full访存为长度为sizeof(word_t)的一次访存
	定义last访存为长度小于sizeof(word_t)的一次访存
	定义主存单次最大访问长度为sizeof(word_t)，也是pmem函数族能够支持的最大单次访问长度
----
	通过连续访存与main memory进行交互
	当cls的大小足够单次访存完成传输，表现为进行一次last访存或者一次full访存
	当cls的大小不足以单次访存完成传输，表现为进行trans_count次full访存，以及一次可能的last访存
----
	值得注意的是，在连续访存的长度大于1的情况下，除了传输起始地址，都可能发生访问的pmem地址是内存映射地址或非法地址。
	所以需要在执行访存函数时，通过in_pmem函数判断以避免访问这些地址。
	在单次访问的情况下，CPU给出的地址在到达Cache之前，
	访问的地址已经被in_pmem函数检查过一次，而NEMU默认检查地址往后的paddr_t都不会越界，
	所以不会发生访问非法地址空间的情况。
	但是这里为了简化代码，并没有对单次访问的情况做优化
----
	任何时候进行访问的地址到达Cache前都应当被判断是否访问到不当地址，
	所以对于不当地址的访问不可能到达Cache，这一情况会造成在LineSize大于paddr_t时，
	某些line中的数据是不可访问的，我称之为Cache碎片。
	对于Cache碎片中的内容，任何值都是有可能的。
*/
void do_cache_update_line(
	uint8_t level, paddr_t index, paddr_t way, paddr_t new_tag,
	bool isWriteBack
) {
	// Debug here
	// 这段代码里有很多隐藏的依赖，都会造成BUG，可以考虑的方向是：深化判断情况，给基础函数更多的表达能力，是调用人可以判断更多的情况
	uint32_t olen = cache->lv[level].olen;
	uint32_t ilen = cache->lv[level].ilen;
	uint32_t cls = cache->lv[level].cache_line_size;
	paddr_t old_tag = cache->lv[level].line[index][way].tag;
	paddr_t old_mapping_addr = (old_tag << (olen+ilen)) | (index << olen) | 0;
	paddr_t new_mapping_addr = (new_tag << (olen+ilen)) | (index << olen) | 0;

	uint8_t *line = malloc(sizeof(uint8_t)*cls);
	word_t *tmp_val = malloc(sizeof(word_t));

/*
写会导致连续传输，但是读不会导致连续传输
|                  cls                  |
|                pmem(1)                |
full_trans_count = 1
last_trans_offset = 0

|                  cls                  |
|      pmem(1)      |      pmem(2)      |
full_trans_count = 2
last_trans_offset = 0

|                  cls                  |
|            pmem(1)          | pmem(2) l     pmem'(2)     |
|                             | offset  |
full_trans_count = 1
last_trans_offset = offset

|       cls         |
|                 pmem(1)               |
full_trans_count = 0
last_trans_offset = cls
*/

	int full_trans_count = cls / sizeof(word_t);
	paddr_t last_trans_offset = cls % sizeof(word_t);

	size_t i;
	if (isWriteBack) {
		assert(0 <= do_cache_read_line(level, 0, index, way, line, cls)); // which is inline_access.
		for (i = 0; i < full_trans_count; i++) { // cls >= pmem
			assert(!byteArr2word_t(line + i*sizeof(word_t), sizeof(word_t), tmp_val));
			if (likely(in_pmem(old_mapping_addr + i*sizeof(word_t))))
				proxy_pmem_write(old_mapping_addr + i*sizeof(word_t), sizeof(word_t), *tmp_val);
		}
		if (last_trans_offset != 0) { // cls offset or cls < pmem
			assert(!byteArr2word_t(line + i*sizeof(word_t), last_trans_offset, tmp_val));
			if (likely(in_pmem(old_mapping_addr + i*sizeof(word_t))))
				proxy_pmem_write(old_mapping_addr + i*sizeof(word_t), last_trans_offset, *tmp_val);
		}
	}

	// write data from main memory to cache
	for (i = 0; i < full_trans_count; i++) { // cls >= pmem
		if (likely(in_pmem(new_mapping_addr + i*sizeof(word_t))))
			*tmp_val = proxy_pmem_read(new_mapping_addr + i*sizeof(word_t), sizeof(word_t));
		assert(!word_t2byteArr(line, sizeof(word_t), *tmp_val));
		print_line_info(line, cls, "Update line as");
		assert(0 <= do_cache_write_line(level, i*sizeof(word_t), index, way, line, sizeof(word_t)));
	}
	if (last_trans_offset != 0) { // cls offset or cls < pmem
		if (likely(in_pmem(new_mapping_addr + i*sizeof(word_t))))
			*tmp_val = proxy_pmem_read(new_mapping_addr + i*sizeof(word_t), last_trans_offset);
		assert(!word_t2byteArr(line, last_trans_offset, *tmp_val));
		assert(0 <= do_cache_write_line(level, i*sizeof(word_t), index, way, line, last_trans_offset));
	}

	cache->lv[level].line[index][way].valid = true;
	cache->lv[level].line[index][way].dirty = false;

	switch (cache->lv[level].swap_policy)
	{
	case CACHE_SWAP_FIFO: 
		cache->lv[level].line[index][way].fifo_count = cache->tick_count;
		break;
	case CACHE_SWAP_LRU:
		cache->lv[level].line[index][way].lru_count = cache->tick_count;
		break;
	default: break;
	}

	free(line);
	line = NULL;
	free(tmp_val);
	tmp_val = NULL;
	return;
}

/*
描述
	CPU访问Cache时应当调用此函数。对cache进行一般性操作，不对Level进行区别。
参数
	addr 尝试访问的地址
	oper_style 表明对cache将要执行的操作
	byte_len 对访问的数据的范围进行选定
	write_data 需要写入的数据
返回值
	返回值依据需要读取的数据大小
	如果oper_style为read的话，则返回读出的数据
	如果oper_style为write的话，则返回值无意义
*/
word_t do_cache_op(paddr_t addr, char oper_style, int byte_len, word_t write_data) {
	word_t ret_val = 0;
	cache->tick_count++;

	/* 这里去记录对cache try了多少次读取，而不去记录hit了多少次 */
	if (OPERATION_READ == oper_style) cache->read_count++;
	if (OPERATION_WRITE == oper_style) cache->write_count++;

	switch (CONFIG_CACHE_LEVEL) {
	case 1: // Only have L1 Cache
		uint8_t *line = malloc(sizeof(uint8_t)*cache->lv[0].cache_line_size);
		memset(line, 0, sizeof(uint8_t)*cache->lv[0].cache_line_size);
		word_t tmp_val = 0;
		size_t i;
		bool hit_l1;
		bool hit_l1_wb;
		paddr_t hit_way_l1;
		paddr_t offset = addr&cache->lv[0].set_offset_mask;
		paddr_t index = (addr&cache->lv[0].set_index_mask) >> cache->lv[0].olen;
		paddr_t tag = (addr&cache->lv[0].set_tag_mask) >> (cache->lv[0].olen + cache->lv[0].ilen);
		paddr_t cls = cache->lv[0].cache_line_size;
/*
line cls = 8
|			cls					|				cls				|				cls				|
{	data}
		{	data		}
		{			data				}
				{							data								}

Return access_margin, which is cls-offset-access_len
不论如何访问cacheline，一定会从第一个cacheline的内部出发
	所以无论何时，我们都可以进行一次访问Cacheline的尝试，参数为offset、len，通过返回值判断是否完成读取

如果返回值小于0,则说明访问越界线，再次访问，以offset = 0、len为-access_margin，直到返回的访存余量>=0
*/
		int full_access_count = (offset+byte_len)/cls;
		paddr_t last_access_len = full_access_count ? (offset+byte_len)%cls : (byte_len+offset)%cls-offset;
		Log("addr %x full_count %x last_len %x", addr, full_access_count, last_access_len);

		switch (oper_style)
		{
		case OPERATION_READ:
			for (i = 0; i < full_access_count; i++) {
				hit_way_l1 = check_cache_hit(0, index+i, tag, &hit_l1);
				if (!hit_l1) { // Miss
					hit_way_l1 = get_cache_free_line(0, index+i, &hit_l1_wb);
					do_cache_update_line(0, index+i, hit_way_l1, tag, hit_l1_wb);
				}

				Assert(0 <= do_cache_read_line(0, i?0:offset, index+i, hit_way_l1, line, i?cls:cls-offset), 
					"access_margin: i %lx offset %x byte_len %x cls %x", i, i?0:offset, byte_len, cls);
				Log("Arg Check Cls%x-offset%x", cls, offset);
				print_line_info(line, cls, "Read data from line");
				Assert(0 >= byteArr2word_t(line, i?cls:cls-offset, &tmp_val),
					"part_trans: byte_len %x word_t %lx", i?cls:cls-offset, sizeof(word_t));
				ret_val |= tmp_val << (i*cls);
			}

			if (0 != last_access_len) {
				hit_way_l1 = check_cache_hit(0, index+i, tag, &hit_l1);
				if (!hit_l1) {
					hit_way_l1 = get_cache_free_line(0, index+i, &hit_l1_wb);
					do_cache_update_line(0, index+i, hit_way_l1, tag, hit_l1_wb);
				}
				Assert(0 <= do_cache_read_line(0, 0, index+i, hit_way_l1, line, last_access_len),
					"access_margin: i %lx offset %x byte_len %x cls %x", i, 0, byte_len, cls);
				print_line_info(line, cls, "Read data from line");
				Assert(0 >= byteArr2word_t(line, last_access_len, &tmp_val),
					"part_trans: byte_len %x word_t %lx", last_access_len, sizeof(word_t));
				ret_val |= tmp_val << (i*cls);
			}
			break;
		case OPERATION_WRITE:
			for (i = 0; i < full_access_count; i++) {
				hit_way_l1 = check_cache_hit(0, index+i, tag, &hit_l1);
				if (!hit_l1) { // Miss
					hit_way_l1 = get_cache_free_line(0, index+i, &hit_l1_wb);
					do_cache_update_line(0, index+i, hit_way_l1, tag, hit_l1_wb);
				}
				assert(0 >= word_t2byteArr(line, i?cls:cls-offset, write_data));
				assert(0 <= do_cache_write_line(0, i?0:offset, index+i, hit_way_l1, line, i?cls:cls-offset));
				print_line_info(line, cls, "Write data to line");
				cache->lv[0].line[index][hit_way_l1].dirty = true;
			}

			if (0 != last_access_len) {
				hit_way_l1  = check_cache_hit(0, index+i, tag, &hit_l1);
				if (!hit_l1) {
					hit_way_l1 = get_cache_free_line(0, index+i, &hit_l1_wb);
					do_cache_update_line(0, index+i, hit_way_l1, tag, hit_l1_wb);
				}
				assert(0 >= word_t2byteArr(line, last_access_len, write_data));
				assert(0 <= do_cache_write_line(0, 0, index+i, hit_way_l1, line, last_access_len));
				print_line_info(line, cls, "Write data to line");
				cache->lv[0].line[index][hit_way_l1].dirty = true;
			}
			break;
		default: assert(0);
		}
		free(line);
		line = 0;
		return ret_val;
	case 2: Assert(true, "Do not support L2 yet.");
	case 3: Assert(true, "Do not support L3 yet.");
	default: assert(0);
	}

	assert(0);
	return 0;
}