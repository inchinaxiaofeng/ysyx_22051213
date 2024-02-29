#ifndef __RISCV64_H__
#define __RISCV64_H__

#include <common.h>

/* To use Difftest, we agree on the following
   order of registers to be compared:
   word_t gpr_for_difftest[32];
   vaddr_t pc_for_difftest;
   */

typedef struct {
	word_t gpr[32];
	vaddr_t pc_commit; // same with NEMU's dnpc
	word_t csr[4]; 
/*
	csr[0] = mstatus
	csr[1] = mtvec
	csr[2] = mepc
	csr[3] = mcause
*/

	vaddr_t pc; // Reg
	int commit;
	// Pipeline Debug
	vaddr_t ls_wb_pc; uint32_t ls_wb_instr; int ls_wb_pcEnable;
	vaddr_t ex_ls_pc; uint32_t ex_ls_instr; int ex_ls_pcEnable;
	vaddr_t id_ex_pc; uint32_t id_ex_instr; int id_ex_pcEnable;
	vaddr_t if_id_pc; uint32_t if_id_instr; int if_id_pcEnable;
	vaddr_t rf_pc;    uint32_t rf_instr;    int rf_pcEnable;

#ifdef JUMP_TRACE
   	vaddr_t dnpc; 
   	int instr_jump; int instr_branch; int instr_pcPlusSrc;
	int idu_pcSrc;
   	word_t bruSrcA; word_t bruSrcB; int bruOutC; int bruCtrl;
#endif

   	uint32_t instr; // same cycle with pc_commit
   	// Debug
   	vaddr_t pc_dynamic; // NPC's dnpc
   	bool stallF, stallD, flushE;
   	int8_t exu_forwardA, exu_forwardB, 
			idu_forwardA, idu_forwardB;
} CPU_state;

// decode
// typedef struct {
//     union {
//         uint32_t val;
//     } inst;
// } ISADecodeInfo;

// #define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

void isa_exec_once();
void init_isa();

#endif