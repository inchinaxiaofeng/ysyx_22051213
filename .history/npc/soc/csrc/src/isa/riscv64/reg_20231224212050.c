#include <isa.h>
#include <isa/riscv64/reg.h>
#include <trace.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void isa_reg_display() {
	print_split(GPR)
	for (size_t i = 0; i < sizeof(regs)/sizeof(char *); i++)
	{
		print_reg_val(GPR, regs[i], gpr(i))
		if ((i+1)%4 == 0) {
			printf("\n");
	    	if ((i+1)%8 == 0) print_split(GPR)
		}
	}
	print_reg_val(GPR, "CMT", env_cpu.pc_commit);
	print_reg_val(GPR, "DNM", env_cpu.pc_dynamic);
	print_reg_val(GPR, "REG", env_cpu.pc); 
	printf("\n");
	pipeline_trace(env_cpu.if_id_pc, env_cpu.if_id_instr, env_cpu.if_id_pcEnable, "if_id");
	pipeline_trace(env_cpu.id_ex_pc, env_cpu.id_ex_instr, env_cpu.id_ex_pcEnable, "id_ex");
	pipeline_trace(env_cpu.ex_ls_pc, env_cpu.ex_ls_instr, env_cpu.ex_ls_pcEnable, "ex_ls");
	pipeline_trace(env_cpu.ls_wb_pc, env_cpu.ls_wb_instr, env_cpu.ls_wb_pcEnable, "ls_wb");
	pipeline_trace(env_cpu.rf_pc, env_cpu.rf_instr, env_cpu.rf_pcEnable, "rf");
	print_split(CSR)
    print_reg_val(CSR, "mstatus", csr(MSTATUS)) print_reg_val(CSR, "mtvec" , csr(MTVEC) ) printf("\n");
	print_reg_val(CSR, "mepc"   , csr(MEPC)   ) print_reg_val(CSR, "mcause", csr(MCAUSE)) printf("\n");
	print_split(CSR)
	return;
}

word_t isa_reg_str2val(const char *s, bool *success) {
	*success = true;
	if (0 == strcmp(s, regs[0])) {
		return gpr(0);
	}
	if (0 == strcmp(s, "$pc")) {
		return env_cpu.pc_commit;
	}

	for (size_t i = 1; i < 32; i++) {
		if (0 == strcmp(regs[i], s+1)) {
			*success = true;
			return gpr(i);
		}
	}

	*success = false;
	return 0;
}