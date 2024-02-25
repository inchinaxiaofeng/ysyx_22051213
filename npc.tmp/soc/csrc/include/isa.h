#ifndef __ISA_H__
#define __ISA_H__

#include <common.h>
#include <isa/riscv64/riscv64.h>

// The macro `__GUEST_ISA__` is defined in $(CFLAGS)
// It will be expanded as "x86" or  "mips32" ...
// typedef const(__GUEST_ISA__, _CPU_state) CPU_state;
// typedef const(__GUEST_ISA__, _ISADecodeInfo) ISADecodeInfo;

//// monitor 
//extern char isa_logo[];
//void init_isa();
//
// reg
extern CPU_state env_cpu; // rgx+pc
void isa_reg_display();
word_t isa_reg_str2val(const char *name, bool *success);

// difftest
void init_difftest(
    char *ref_so_file, 
    long img_size, 
    int port, 
    char *img_file
);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();
void difftest_display_ref(CPU_state *ref_r);
void difftest_display_ref(CPU_state *ref_r);
void ref_reg_display();
void difftest_reg_init();

//// exec
//struct Decode;
//int isa_exec_once(struct Decode *s);
//
//// memory
//enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
//enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
//enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };
//#ifndef isa_mmu_check
//int isa_mmu_check(vaddr_t vaddr, int len, int type);
//#endif
//paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);
//
//// interrupt/exception
//vaddr_t isa_raise_intr()


#endif
