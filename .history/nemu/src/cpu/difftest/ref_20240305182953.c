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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

# define DIFFTEST_REG_SIZE_REF (sizeof(uint64_t) * 37) // GRPs + pc

extern void init_mem();

static long load_img(char *img_file) {
  if (NULL == img_file) {
    Log(
      ANSI_BG_MAGENTA
      "[ref]No image is given. Use the default build-in image." 
      ANSI_NONE
    );
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log(
    ANSI_BG_MAGENTA
    "The image is %s, size = %ld"
    ANSI_NONE, 
    img_file, size
  );

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

// 在DUT host memory的`buf`和REF guest memory的`addr`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (DIFFTEST_TO_REF == direction) {
    memcpy(guest_to_host(addr), buf, n);
  } else if (DIFFTEST_TO_DUT == direction) {
    memcpy(buf, guest_to_host(addr), n);
  }
  return;
}

// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
void difftest_regcpy(void *dut, bool direction) {
//  printf("begin of cpy: nemu:%lx\tnpc:%lx\n", cpu.pc, _dut->pc);
  if (DIFFTEST_TO_REF == direction) {
//    printf("\033[1;31mTo ref\033[0m\n");
    memcpy(&cpu, dut, DIFFTEST_REG_SIZE_REF); // CSR
  } else if (DIFFTEST_TO_DUT == direction) {
//    printf("\033[1;31mTo dut\033[0m\n");
    memcpy(dut, &cpu, DIFFTEST_REG_SIZE_REF); // CSR
  }
//  printf("end of cpy: nemu:%lx\tnpc:%lx\n", cpu.pc, _dut->pc);
  return;
}

// 让REF执行`n`条指令
void difftest_exec(uint64_t n) {
//  Log(
//    ANSI_BG_MAGENTA
//    "REF exec"
//    ANSI_NONE
//  );
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  cpu.pc = isa_raise_intr(NO, cpu.pc);
  assert(0);
}

// 初始化REF的DiffTest功能
void difftest_init(int port, char *img_file) {
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
  /* Load Img */
  load_img(img_file);
}
