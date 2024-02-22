#include <proc.h>
#include <elf.h>
#include <fs.h>
// #include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386  // see /usr/include/elf.h to get the right type
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  int invalid = 0; // 標定函數執行是否合法
  Elf_Ehdr *ehdr = NULL;
  Elf_Phdr *phdr = NULL;
  int fd = -1; // 文件調用號

  ehdr = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr)); assert(NULL!=ehdr);
  phdr = (Elf_Phdr *)malloc(sizeof(Elf_Phdr)*ehdr->e_phnum); assert(NULL != phdr);

  if (NULL == pcb && NULL == filename) {
    Log("Load program from 0 offset address...");

    ramdisk_read(ehdr, 0, sizeof(Elf_Ehdr));

    assert(0x464C457f == *(uint32_t *)ehdr->e_ident); // 检查 Magic Number 是否是ELF文件
    assert(EXPECT_TYPE == ehdr->e_machine); // 检查ELF文件的ISA类型

    ramdisk_read(phdr, ehdr->e_phoff, sizeof(Elf_Phdr) * ehdr->e_phnum);
    for (int i = 0; i < ehdr->e_phnum; i++) { // 遍历取得每个segment
      if (PT_LOAD == phdr[i].p_type) { // 检查当前segment是何种类型的或者如何解释当前的segment，比如是动态链接相关的还是可加载类型的。当类型为loadalbe时，则加载
        ramdisk_read((void *)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_memsz);
        memset((void *)(phdr[i].p_vaddr + phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
      }
    }
  } else if (NULL == pcb && NULL != filename) {
    Log("Load program from a random offset address...");

    fd = fs_open(filename, 0, 0); if (-1 == fd) panic("Can not open file.");
    if (-1 == fs_read(fd, ehdr, sizeof(Elf_Ehdr))) panic("fs_read return -1 when read file: %s.",syscall_name[fd]);

    assert(0x464C457f == *(uint32_t *)ehdr->e_ident);
    assert(EXPECT_TYPE == ehdr->e_machine);

    if (-1 == fs_lseek(fd, ehdr->e_phoff, SEEK_SET)) panic("fs_lseek return -1 when seek file: %s.", syscall_name[fd]);
    if (-1 == fs_read(fd, phdr, sizeof(Elf_Phdr) * ehdr->e_phnum)) panic("fs_read return -1 when read file: %s.", syscall_name[fd]);

    for (int i = 0; i < ehdr->e_phnum; i++) {
      if (PT_LOAD == phdr[i].p_type) {
        if(-1 == fs_lseek(fd, phdr[i].p_offset, SEEK_SET)) panic("fs_lseek return -1 when seek file: %s.", syscall_name[fd]);
        if(-1 == fs_read(fd, (void *)phdr[i].p_vaddr, phdr[i].p_memsz)) panic("fs_read return -1 when read file: %s.", syscall_name[fd]);
        memset((void *)(phdr[i].p_vaddr + phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
      }
    }
  } else invalid = 1;

  free(ehdr);
  free(phdr);
  if (invalid) panic("Invalid argument.");
  return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}