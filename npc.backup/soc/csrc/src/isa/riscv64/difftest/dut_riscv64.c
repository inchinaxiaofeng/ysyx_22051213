#include <isa.h>
#include <cpu/difftest.h>
#include <common.h>

bool isa_difftest_checkregs(
    CPU_state *ref_r, 
    vaddr_t pc
) {
    if (0 == memcmp(ref_r, &env_cpu, sizeof(vaddr_t)*37)) {
        return true;
    } else {
        difftest_display_ref(ref_r);
        return false;
    }
}

void difftest_display_ref(
    CPU_state *ref_r
) {
    printf("\033[1;31mREF\033[0m\n");
    printf("\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\n");
    for (size_t i = 0; i < 32; i++) {
        if ((int)0 == ref_r->gpr[i]) {
            printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m\033[2;37m%016lx\033[0m\t", "XXX", ref_r->gpr[i]);
        } else {
            printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m%016lx\t", "XXX", ref_r->gpr[i]);
        }
        if (0 == (i+1)%4) {
            printf("\n");
            if (0 == (i+1)%8) {
                printf("\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\033[3;36m----\033[0m|------------------|\n");
            }
        }
    }
    printf("\033[3;36m%3s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "PC", ref_r->pc_commit);
	printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mepc", ref_r->csr[0]);
	printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mstatus", ref_r->csr[1]);
	printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mcause", ref_r->csr[2]);
	printf("\033[3;34m%7s:\033[0m \033[2;32m0x\033[0m%016lx\t\n", "mtvec", ref_r->csr[3]);
}