#include <dlfcn.h>

#include <isa.h>
#include <utils.h>
#include <difftest-def.h>
#include <memory/paddr.h>

typedef void (*ref_difftest_initT)(int port, char *img_file);
ref_difftest_initT ref_difftest_init = NULL;
typedef void (*ref_difftest_memcpyT)(paddr_t addr, void *buf, size_t n, bool direction);
ref_difftest_memcpyT ref_difftest_memcpy = NULL;
typedef void (*ref_difftest_regcpyT)(void *dut, bool direction);
ref_difftest_regcpyT ref_difftest_regcpy = NULL;
typedef void (*ref_difftest_execT)(uint64_t n);
ref_difftest_execT ref_difftest_exec = NULL;
typedef void (*ref_difftest_raise_intrT)(uint64_t NO);
ref_difftest_raise_intrT ref_difftest_raise_intr = NULL;

#ifdef CONFIG_DIFFTEST

#define DIFF_FONT ANSI_FG_CYAN

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

word_t mem_img_size = -1;

// skip delay bit map
#define RESET_BIT_MASK 0x0
#define SKIP_BIT_MASK 0x00000001
#define DIFF_DELAY_MASK 0x00000004
uint32_t skip_delay_bit = 0;

void update_delay_bit() {
	skip_delay_bit = skip_delay_bit << 1;
	if(skip_delay_bit & DIFF_DELAY_MASK) {
		is_skip_ref = true;
		skip_dut_nr_inst = 0;
	}
}

void difftest_skip_ref() {
	skip_delay_bit |= SKIP_BIT_MASK;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
	skip_dut_nr_inst += nr_dut;
	
	while (nr_ref-- > 0) {
		ref_difftest_exec(1);
	}
}

void init_difftest(
	char *ref_so_file, 
	long img_size, 
	int port, 
	char *img_file
) {
	Log("init Difftest...");
	assert(NULL != ref_so_file);
	assert(0 <= img_size);
	mem_img_size = img_size;
	printf(
		DIFF_FONT
		"[difftest] initializing differential testing, "
		"the ref_so_file is %s "
		"the img_size is %ld "
		ANSI_NONE
		"\n",
		ref_so_file, img_size
	);
	
	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);
	
	ref_difftest_memcpy = (ref_difftest_memcpyT)dlsym(
		handle, 
		"difftest_memcpy"
	);
	assert(ref_difftest_memcpy);
	
	ref_difftest_regcpy = (ref_difftest_regcpyT)dlsym(
		handle, 
		"difftest_regcpy"
	);
	assert(ref_difftest_regcpy);
	
	ref_difftest_exec = (ref_difftest_execT)dlsym(
		handle, 
		"difftest_exec"
	);
	assert(ref_difftest_exec);
	
	ref_difftest_raise_intr = (ref_difftest_raise_intrT)dlsym(
		handle, 
		"difftest_raise_intr"
	);
	assert(ref_difftest_raise_intr);
	
	ref_difftest_init = (ref_difftest_initT)dlsym(
		handle, 
		"difftest_init"
	);
	assert(ref_difftest_init);
	
	// Reset bit map
	skip_delay_bit &= RESET_BIT_MASK;
	
	Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
	Log("The result of every instruction will be compared with %s. "
		"This will help you a lot for debugging, but also significantly reduce the performance. "
		"If it is not necessary, you can turn it off in menuconfig. "
		"If in Simulation for CPU, please change config in file config.h", ref_so_file);

	ref_difftest_init(port, img_file);
	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	// difftest_reg_init();
	Log("DONE!");
}

void difftest_reg_init() {
    ref_difftest_regcpy(&env_cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
	if (!isa_difftest_checkregs(ref, pc)) {
		sim_state.state = SIM_ABORT;
		sim_state.halt_pc = pc;
		isa_reg_display();
	}
}

void ref_reg_display() {
	CPU_state ref_r;
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
	difftest_display_ref(&ref_r);
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
    CPU_state ref_r;
    if (skip_dut_nr_inst > 0) {
		assert(0);
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
        if (ref_r.pc == npc) {
            skip_dut_nr_inst = 0;
            checkregs(&ref_r, npc);
            return;
        }
        skip_dut_nr_inst--;
        if (0 == skip_dut_nr_inst)
            panic("can not catch up width ref.pc = " 
                FMT_WORD " at pc = " FMT_WORD, 
                ref_r.pc, pc
            );
        return;
    }
    IFDEF(SKIP_REF_DEBUG,  printf("skip begin:%x\n", env_cpu.pc_commit));
    if (is_skip_ref) {
        IFDEF(SKIP_REF_DEBUG, Log("Skip"));
        ref_difftest_regcpy(&env_cpu, DIFFTEST_TO_REF);
        is_skip_ref = false;
        IFDEF(SKIP_REG_DEBUG, printf("skip end:%x\n", env_cpu.pc_commit));
        return;
    }

    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

    checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif