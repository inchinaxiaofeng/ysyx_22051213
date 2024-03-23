/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <memory/csim.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

word_t proxy_pmem_read(paddr_t addr, int len) {
  word_t ret_val = pmem_read(addr, len);
  Log("Read PMEM: addr "FMT_PADDR" data "FMT_WORD, addr, ret_val);
  return ret_val;
}

void proxy_pmem_write(paddr_t addr, int len, word_t data) {
  Log("Write PMEM: addr "FMT_PADDR" data "FMT_WORD, addr, data);
  pmem_write(addr, len, data);
  return;
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

#ifdef CONFIG_MTRACE
void static mtrace_display(paddr_t addr, int len, word_t data, bool is_write) {
  if (true == is_write) printf("\033[1;35mwrite:\033[0m\n"); else printf("\033[1;35mread:\033[0m\n");
  printf("\033[7;32mpaddr_t:\033[0m\t\033[7;33mHEX:\033[0m \033[2;32m0x\033[0m%08x\t\n", addr);
  printf("\033[7;32mlen:\033[0m\t\t\033[7;33mDEC:\033[0m %d\n", len);
  if (true == is_write) printf("\033[7;32mdata:\033[0m\t\t\033[7;33mDEC:\033[0m %ld\n", data);

  return;
}
#endif

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr)))
    return MUXDEF(CONFIG_CACHE_ENABLE,
      do_cache_op(addr, OPERATION_READ, len, 0),
      pmem_read(addr, len)
    );
  IFDEF(CONFIG_MTRACE, mtrace_display(addr, len, 0, false));
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    MUXDEF(CONFIG_CACHE_ENABLE,
      do_cache_op(addr, OPERATION_WRITE, len, data),
      pmem_write(addr, len, data)
    );
    return;
  }
  IFDEF(CONFIG_MTRACE, mtrace_display(addr, len, data, true));
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
