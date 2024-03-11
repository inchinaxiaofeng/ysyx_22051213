# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VSimTop.mk

default: /home/marinatoo/ysyx-workbench/npc/build/SimTop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VSimTop
# Module prefix (from --prefix)
VM_MODPREFIX = VSimTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/marinatoo/ysyx-workbench/npc/soc/csrc/include/ \
	-I/home/marinatoo/ysyx-workbench/abstract-machine/klib/include/ \
	-I/home/marinatoo/ysyx-workbench/abstract-machine/am/include/ \
	-DTOP_NAME="VSimTop" \
	-Wall \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline \
	-ldl \
	-lSDL2 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	dut \
	alarm \
	device \
	device_timer \
	map \
	mmio \
	keyboard \
	serial \
	vga \
	engine_init \
	final \
	hostcall \
	dut_riscv64 \
	init \
	reg \
	riscv64 \
	paddr \
	vaddr \
	monitor \
	expr \
	sdb \
	watchpoint \
	sim-main \
	verilator_sim \
	state \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/cpu \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/io \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/engine \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64 \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64/difftest \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/memory \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor/sdb \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/sim \
	/home/marinatoo/ysyx-workbench/npc/soc/csrc/src/utils \


### Default rules...
# Include list of all generated classes
include VSimTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/cpu/cpu-exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/cpu/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
alarm.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/alarm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device_timer.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/device_timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
engine_init.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/engine/engine_init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
final.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/engine/final.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/engine/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut_riscv64.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64/difftest/dut_riscv64.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
riscv64.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/isa/riscv64/riscv64.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/memory/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/memory/vaddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim-main.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/sim-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator_sim.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/sim/verilator_sim.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/marinatoo/ysyx-workbench/npc/soc/csrc/src/utils/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/marinatoo/ysyx-workbench/npc/build/SimTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
