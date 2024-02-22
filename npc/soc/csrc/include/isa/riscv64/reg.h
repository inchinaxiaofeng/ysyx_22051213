#ifndef __REG_H__
#define __REG_H__

#include <common.h>

#define GPR 0
#define CSR 1

#define MSTATUS	0x300
#define MTVEC	0x305
#define MEPC	0x341
#define MCAUSE	0x342

// TODO :調試好了直接鏈接過來用好了

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

static inline int check_csr_idx(int idx) {
	IFDEF(CONFIG_RT_CHECK, 
		assert(MSTATUS == idx ||
				MTVEC == idx ||
				MEPC == idx ||
				MCAUSE == idx))
	switch (idx) {
		case MSTATUS: idx = 0; break; // mstatus
		case MTVEC	: idx = 1; break; // mtvec
		case MEPC	: idx = 2; break; // mepc
		case MCAUSE : idx = 3; break; // mcause
	}
	return idx;
}

#define gpr(idx) (env_cpu.gpr[check_reg_idx(idx)])
#define csr(idx) (env_cpu.csr[check_csr_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

// OUTPUT Format
#define __print_gpr_val(reg_name, reg_val) \
	printf("\33[3;36m%3s:\33[0m \033[2;32m0x\033[0m", reg_name); \
	if(0x0 == reg_val) printf("\33[2;37m"); \
	printf( \
		DATA_FONT \
		ANSI_NONE \
		" ", \
		reg_val \
	);

#define __print_csr_val(reg_name, reg_val) \
	printf("\33[1;44m%8s:\33[0m \033[2;32m0x\033[0m", reg_name); \
	printf("%016lx\33[0m ", reg_val);

#define __print_gpr_split printf("\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\33[3;36m----\33[0m|------------------|\n");

#define __print_csr_split printf("\33[1;44m---------\33[0m|------------------|\33[1;44m---------\33[0m|------------------|\n");

#define __print_reg_error printf("\33[1;33mWRONG REG_PRINT TYPE.\33[0m\n");

#define print_split(reg_type) switch (reg_type) { \
case GPR: __print_gpr_split break; \
case CSR: __print_csr_split break; \
default : __print_reg_error break; \
}

#define print_reg_val(reg_type, reg_name, reg_val) switch (reg_type) { \
case GPR: __print_gpr_val(reg_name, reg_val); break; \
case CSR: __print_csr_val(reg_name, reg_val); break; \
default : __print_reg_error break; \
}

#endif