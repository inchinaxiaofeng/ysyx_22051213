package utils.difftest

import defs._
import chisel3._
import chisel3.util._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends Bundle {
}

class GPRState extends  DifftestBaseBundle {
	val zero = UInt(XLEN.W)
	val ra   = UInt(XLEN.W)
	val sp   = UInt(XLEN.W)
	val gp   = UInt(XLEN.W)
	val tp   = UInt(XLEN.W)
	val t0   = UInt(XLEN.W)
	val t1   = UInt(XLEN.W)
	val t2   = UInt(XLEN.W)
	val s0   = UInt(XLEN.W)
	val s1   = UInt(XLEN.W)
	val a0   = UInt(XLEN.W)
	val a1   = UInt(XLEN.W)
	val a2   = UInt(XLEN.W)
	val a3   = UInt(XLEN.W)
	val a4   = UInt(XLEN.W)
	val a5   = UInt(XLEN.W)
	val a6   = UInt(XLEN.W)
	val a7   = UInt(XLEN.W)
	val s2   = UInt(XLEN.W)
	val s3   = UInt(XLEN.W)
	val s4   = UInt(XLEN.W)
	val s5   = UInt(XLEN.W)
	val s6   = UInt(XLEN.W)
	val s7   = UInt(XLEN.W)
	val s8   = UInt(XLEN.W)
	val s9   = UInt(XLEN.W)
	val s10  = UInt(XLEN.W)
	val s11  = UInt(XLEN.W)
	val t3   = UInt(XLEN.W)
	val t4   = UInt(XLEN.W)
	val t5   = UInt(XLEN.W)
	val t6   = UInt(XLEN.W)
}

class InstrCommit(val numPhyRegs: Int) extends DifftestBaseBundle with HasValid {
	val skip = Bool()
	val isRVC = Bool()
	val rfWen = Bool()
	val wDest = Bool()

	val pc = UInt(64.W)
	val instr = UInt(32.W)
	val isLoad = Bool()
	val isStore = Bool()
}

class CSRState extends DifftestBaseBundle {
	val mstatus	= UInt(XLEN.W)
	val mepc	= UInt(XLEN.W)
	val mtvec	= UInt(XLEN.W)
	val mcause	= UInt(XLEN.W)
}

class StoreEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(VAddrBits.W)
	val data = UInt(XLEN.W)
	val mask = UInt(8.W)
}

class LoadEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(VAddrBits.W)
}