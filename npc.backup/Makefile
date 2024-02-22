# 用于实现Elabrate

BUILD_DIR = ./build
VSRC_DIR = $(NPC_HOME)/soc/vsrc
WAVE = $(abspath ./log/wave/sim_wave.vcd)
OBJ_DIR = $(NPC_HOME)/soc/obj_dir

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR) $(VSRC_DIR)
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR)
	mv $(BUILD_DIR)/*.v $(VSRC_DIR)/

help:
	mill -i __.test.runMain Elaborate --help

Help:
	$(info make target:)
	$(info *	[run]: Elaborate --> Synthesis --> Simulation --> Exec and git will commit)
	$(info *	[exec]: only run the execable file that Simulating resault)
	$(info *	[test]: run all tests in this design(recommended for test-driven development))
	$(info *	[verilog]: generate Verilog)
	$(info *	[help]: display mill help info)
	$(info *	[Help]: display this info)
	$(info *	[compile]: mill -i __.compile)
	$(info *	[bsp]: mill -i mill.bsp.BSP/install)
	$(info *	[reformat]: mill -i __.reformat)
	$(info *	[checkformat]: mill -i __.checkFormat)
	$(info *	[clean]: remove build dir and gtkwave file)
	$(info *	[gdb]: gdb exec and git will commit)
	$(info make Marco)
	$(info *	(NVB): Open NVBoard)
	$(info *	(NONE))

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)
	-rm -rf $(VSRC_DIR)
	-rm -rf $(WAVE)
	-rm -rf $(OBJ_DIR)

wave:
	$(GTK) $(WAVE)

all:default

.PHONY: run test verilog help Help compile bsp reformat checkformat clean wave

include ../Makefile
include ./soc/Makefile
