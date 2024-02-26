package utils.difftest

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends MarCoreBundle {
}

class GPRState extends DifftestBaseBundle {
	val gpr = Wire(Vec(32, UInt(XLEN.W)))
	BoringUtils.addSink(gpr, "GPR")
//	x0	ra	sp	gp	tp	t0	t1	t2
//	s0	s1	a0	a1	a2	a3	a4	a5
//	a6	a7	s2	s3	s4	s5	s6	s7
//	s8	s9	s10	s11	t3	t4	t5	t6
}

class InstrCommit(val numPhyRegs: Int) extends DifftestBaseBundle with HasValid {
	val skip = Bool()
	val isRVC = Bool()
	val rfWen = Bool()
	val wDest = Bool()

	val pc = UInt(VAddrBits.W)
	val instr = UInt(32.W)
	val isLoad = Bool()
	val isStore = Bool()
}

class CSRState extends DifftestBaseBundle {
	val mstatus	= UInt(XLEN.W)
	val mtvec	= UInt(XLEN.W)
	val mepc	= UInt(XLEN.W)
	val mcause	= UInt(XLEN.W)

	val csr = Wire(Vec(4, UInt(XLEN.W)))
	mstatus	:= csr(0)
	mtvec	:= csr(1)
	mepc	:= csr(2)
	mcause	:= csr(3)
	BoringUtils.addSink(csr, "CSR")
}

class StoreEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(VAddrBits.W)
	val data = UInt(XLEN.W)
	val mask = UInt(8.W)
}

class LoadEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(VAddrBits.W)
	val data = UInt(XLEN.W)
}