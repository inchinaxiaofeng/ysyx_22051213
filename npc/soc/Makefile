TOPNAME = SimTop
BIN = $(BUILD_DIR)/$(TOPNAME)
INC_PATH += $(NPC_HOME)/soc/csrc/include/ $(AM_HOME)/klib/include/ $(AM_HOME)/am/include/
SO = riscv64-nemu-interpreter-so
GTK = gtkwave
IMG ?= $(AM_KERNELS_HOME)/tests/cpu-tests/build/recursion-riscv64-nemu.bin

# 杂项
# 包含文件路径，加前缀-I传递给g++
INCFLAGS += $(addprefix -I, $(INC_PATH))
VSRCS += $(shell find $(NPC_HOME)/playground/resources -name "*.v" -or -name "*.sv")
VSRCS += $(shell find $(NPC_HOME)/soc/vsrc -name "*.v" -or -name "*.sv")
CSRCS = $(shell find $(NPC_HOME)/soc/csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")

#OBJ = $(NEMU_HOME)/build/obj-$(SO)/src/isa/$(ISA)/inst.o  

# Include all filelist.mk to merge file lists
#FILELIST_MK = $(shell find ./ -name "filelist.mk")
#include $(FILELIST_MK)

VERILATOR = verilator
# 第二行用于Debug 第三行是用来加快编译速度的选项
VERILATOR_CFLAGS += -MMD --build -cc \
					-O3 --x-assign fast --x-initial fast --noassert -j 0 \
					--trace# --debug

# LLVM
#LLVM_CXXFLAGS = $(shell llvm-config --cxxflags) -fPIE
#LLVM_LIBS = $(shell llvm-config --libs)
# 链接
#LDFLAGS += $(LLVM_LIBS) # LLVM的库链接，用于传递编译后的信息给NPC，以实现TRACE
#LDFLAGS += -L$(NEMU_HOME)/build # nemu/build/riscv64-nemu-interpreter-so，用于给NPC添加TRACE
LDFLAGS += -lreadline -ldl -lSDL2 -fsanitize=address -fsanitize=leak
#LDFLAGS += -L/$(NEMU_HOME)/$(SO)
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" # 传递给g++参数，包括包含路径和TOP_NAME的定义
#CFLAGS += -fsanitize=address -fsanitize-recover=address
CFLAGS += -Wall
#CFLAGS += $(LLVM_CXXFLAGS) # -CFLAGS向Verilator传递g++参数，用于向生成的Makefile文件中的g++中添加参数；用于添加链接LLVM的参数
#CFLAGS += "-DTARGET_AM"
#CFLAGS += "-DPTR_EXCUTE"

#CFLAGS += -DVCD_TRACE
#CFLAGS += -DIO_TRACE
#CFLAGS += -DPC_TRACE
#CFLAGS += -DHAZARD_TRACE
#CFLAGS += -DPIPELINE_TRACE
#CFLAGS += -DJUMP_TRACE
#CFLAGS += -DSKIP_REF_DEBUG
#CFLAGS += -DBETTER_OUTPUT

# 执行
EXEC_FLAGS = -d $(NEMU_HOME)/build/$(SO)
#EXEC_FLAGS += -b
#EXEC_FLAGS += -f $(IMAGE).elf
NEMU_EXEC := $(BIN) $(EXEC_FLAGS) $(ARGS) $(IMG)

export PATH := $(PATH):$(abspath ./utils)

#default:$(BIN) # FIXME maybe

gdb:
	$(call git_commit, "gdb exec NPC")
	-rm -rf $(WAVE)
	gdb $(NEMU_EXEC)

exec:
	$(call git_commit, "exec NPC")
	-rm -rf $(WAVE)
	$(NEMU_EXEC)

run: run-env
	$(call git_commit, "run NPC") # Don't remove this line!
	-rm -rf $(WAVE)
	$(NEMU_EXEC)

# 用于跑外部测试文件
run-env:verilog sim $(IMG)

sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

$(BIN): $(CSRCS) $(VSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) \
		$^ \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
