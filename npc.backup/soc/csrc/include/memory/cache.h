// #ifndef __CACHE_H__
// #define __CACHE_H__
// 
// #include <common.h>
// #include <memory/host.h>
// #include <memory/vaddr.h>
// #include <cpu/exec.h>
// #include <trace.h>
// 
// #define CHECK_MEM 0x8046a038
// 
// #define Mr vaddr_read
// #define Mw vaddr_write
// 
// static inline uint32_t inst_fetch
// (
// vaddr_t pc
// ) {
//     int len = 4; 
//     uint32_t inst = vaddr_ifetch(pc, len);
//     IFDEF(IO_TRACE, print_ifetch(
//         pc,
//         inst
//     ));
// 
//     return inst;
// }
// 
// static inline uint64_t load_store
// (
// vaddr_t addr, 
// vaddr_t write_data,
// int width,
// int read_or_write
// ) {
// 	vaddr_t phy_addr = addr + CONFIG_MBASE;
// 	if (MEM_RW_READ == read_or_write) {
// 		word_t retVal = 0;
// 		switch (width) {
// 		case MEM_WIDTH_BYTE: // Load Byte
// 			retVal = (uint64_t)SEXT((int64_t)Mr(addr, 1), 8); break;
// 		case MEM_WIDTH_HALF: // Load Half Word
// 			retVal = (uint64_t)SEXT((int64_t)Mr(addr, 2), 16); break;
// 		case MEM_WIDTH_WORD: // Load Word
// 			retVal = (uint64_t)SEXT((int64_t)Mr(addr, 4), 32); break;
// 		case MEM_WIDTH_DOUBLE: // Load Double Word
// 			retVal = (uint64_t)SEXT((int64_t)Mr(addr, 8), 64); break;
// 		case MEM_WIDTH_BYTEU: // Load Unsigned Byte
// 			retVal = UEXT(Mr(addr, 1), 8); break;
// 		case MEM_WIDTH_HALFU: // Load Unsigned Half Word
// 			retVal = UEXT(Mr(addr, 2), 16); break;
// 		case MEM_WIDTH_WORDU: // Load Unsigned Word
// 			retVal = UEXT(Mr(addr, 4), 32); break;
// 		default:
// 			assert(0);
// 		}
// 		if (addr == CHECK_MEM) print_load_store(
// 			true,
// 			addr, 
// 			retVal,
// 			width,
// 			read_or_write
// 		);
// 
// 		IFDEF(IO_TRACE, print_load_store(
// 			true,
// 			addr, 
// 			retVal,
// 			width,
// 			read_or_write
// 		));
// 
// 		return retVal;
// 	} else if (MEM_RW_WRITE == read_or_write) {
// 		if(addr == CHECK_MEM) print_load_store(
// 			false,
// 			addr, 
// 			write_data,
// 			width,
// 			read_or_write
// 		);
// 
// 		IFDEF(IO_TRACE, print_load_store(
// 			false,
// 			addr, 
// 			write_data,
// 			width,
// 			read_or_write
// 		));
// 		switch (width) {
// 		case MEM_WIDTH_BYTE: // Store Byte
// 			Mw(addr, 1, write_data); return 0;
// 		case MEM_WIDTH_HALF: // Store Half Word
// 			Mw(addr, 2, write_data); return 0;
// 		case MEM_WIDTH_WORD: // Store Word
// 			Mw(addr, 4, write_data); return 0;
// 		case MEM_WIDTH_DOUBLE: // Store Double Word
// 			Mw(addr, 8, write_data); return 0;
// 		case MEM_WIDTH_BYTEU: // Store Unsigned Byte
// 			Mw(addr, 1, write_data); return 0;
// 		case MEM_WIDTH_HALFU: // Store Unsigned Half Word
// 			Mw(addr, 2, write_data); return 0;
// 		case MEM_WIDTH_WORDU: // Store Unsigned Word
// 			Mw(addr, 4, write_data); return 0;
// 		default:
// 			assert(0);
// 		}
// 	} else if (MEM_RW_NONE == read_or_write) {
// 		return 0;
// 		// Nothing to do
// 	} else assert(0);
// }
// 
// #endif