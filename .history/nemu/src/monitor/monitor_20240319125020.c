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
#include <memory/paddr.h>
#include <memory/csim.h>
#include <elf.h>
#include <debug.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);
#ifdef CONFIG_FTRACE
Elf64_Sym *string_funcs = NULL; // string_funcs 记录了string_table中，type为STT_FUNC的tables
int string_func_count; // string_table中，type == STT_FUNC的数量
char* str_tab; // 段名 字符串表(ASCII字符串的堆积)
void init_ftrace(const char *argv);
#endif

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) { // 通过$(NEMU_HOME)/scripts/config.mk 编辑
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"ftrace"   , required_argument, NULL, 'f'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:f:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
#ifdef CONFIG_FTRACE
      case 'f': init_ftrace(optarg); break; // 调用当前脚本下的函数，用于开启cpu-exec下的ftrace功能。
#endif
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
#ifdef CONFIG_FTRACE
        printf("\t-f,--ftrace=ELF         run Ftrace with ELF\n");
#endif
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initalize cache. */
  init_cache(0, CACHE_SWAP_FIFO, 512, 8, 4);

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

#ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
#endif

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif

#ifdef CONFIG_FTRACE

void init_ftrace(const char *argv) { // Note: EZ
  Assert(NULL != argv, "Function [init_ftrace] requires argument: char *argv.Check me in [monitor.c]");

  FILE *pelf = NULL;  // elf文件指针
  Elf64_Ehdr *header = NULL; // elf header
  Elf64_Shdr *section_headers = NULL; // section headers 结构体数组
  Elf64_Sym *symbol_table = NULL; // string tables 结构体数组
  uint64_t symbol_entries = 0; // symbol_entrie的数量
  int string_func_count_tmp = 0;

  int return_value = 0; // 返回值的临时变量

  /* 打开elf文件 */
  pelf = fopen(argv, "rb");
  Assert(NULL != pelf, "[fopen] wrong.Can not open file:[%s]. Check me in [monitor.c]", argv);

  /* 解析elf文件 */
  // 定位elf header，读取信息
  fseek(pelf, 0, SEEK_SET);
  header = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
  Assert(NULL != header, "Can't malloc new space for [header]. Check me in [monitor.c]");
  return_value = fread(header, sizeof(Elf64_Ehdr), 1, pelf);
  Assert(1 == return_value, "fread for [header] gose wrong. Check me in [monitor.c]");

  // 定位Section header，读取信息
  fseek(pelf, header->e_shoff, SEEK_SET);
  section_headers = (Elf64_Shdr *)malloc(sizeof(Elf64_Shdr)*header->e_shnum);
  Assert(NULL != section_headers, "Can't malloc new space for [section_headers]. Check me in [monitor.c]");
  return_value = fread(section_headers, sizeof(Elf64_Shdr)*header->e_shnum, 1, pelf);
  Assert(1 == return_value, "fread for [section_headers] gose wrong. Check me in [monitor.c]");

  // 定位符号表和字符串表
  for (size_t i = 0; i < header->e_shnum; i++)
  {
    if (section_headers[i].sh_type == SHT_SYMTAB) // 找到了Symbol table符号表
    {
      // 通过sh_link定位符号表，读取信息
      symbol_entries = section_headers[i].sh_size/section_headers[i].sh_entsize; // 符号表条目
      fseek(pelf, section_headers[i].sh_offset, SEEK_SET);
      symbol_table = (Elf64_Sym *)malloc(sizeof(Elf64_Sym)*symbol_entries);
      Assert(NULL != symbol_table, "Can't malloc new space for [symbol_table]. Check me in [monitor.c]");
      return_value = fread(symbol_table, sizeof(Elf64_Sym), symbol_entries, pelf);
      Assert(symbol_entries == return_value, "fread for [symbol_table] goes wrong. Check me in [monitor.c]");

      // 定位到字符串表
      fseek(pelf, section_headers[section_headers[i].sh_link].sh_offset, SEEK_SET);
      str_tab = (char*)malloc(section_headers[section_headers[i].sh_link].sh_size);
      Assert(NULL != str_tab, "Can't malloc new space for [str_tab]. Check me in [monitor.c]");
      return_value = fread(str_tab, section_headers[section_headers[i].sh_link].sh_size, 1, pelf);
      Assert(1 == return_value, "fread for [str_tab] goes wrong. Check me in [monitor.c]");
      break;
    }
  }

  // 将string table中的type为func的entries数量做统计
  for (size_t i = 0; i < symbol_entries; i++)
  {
    if (STT_FUNC == ELF64_ST_TYPE(symbol_table[i].st_info))
    {
      string_func_count++;
    }
  }

  // 为string_funcs malloc空间
  string_funcs = (Elf64_Sym *)malloc(sizeof(Elf64_Sym)*string_func_count);
  Assert(NULL != string_funcs, "Can't malloc new space for [string_funcs]. Check me in [monitor.c]");

  // 将string table中的type为func的entries存储起来
  for (size_t i = 0; i < symbol_entries ; i++)
  {
    if (STT_FUNC == ELF64_ST_TYPE(symbol_table[i].st_info))
    {
      Assert(string_func_count_tmp < string_func_count, "The index of [string_funcs] over the bound. Check me in [monitor.c]");
      string_funcs[string_func_count_tmp++] = symbol_table[i];
    }
  }
  
  /* 释放文件指针与空间 */
  // 关闭文件，置空文件指针
  return_value = fclose(pelf);
  Assert(EOF != return_value, "fclose for [pelf] gose wrong. Check me in [monitor.c]");
  pelf = NULL;

  // 释放malloc空间，置空栈指针
  free(header);
  header = NULL;
  free(section_headers);
  section_headers = NULL;
  free(symbol_table);
  symbol_table = NULL;
  // str_tab在函数cpu_exec.c中释放

  // 返回
  return;
}

#endif