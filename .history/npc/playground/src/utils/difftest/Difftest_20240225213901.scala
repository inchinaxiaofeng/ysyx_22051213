package utils.difftest

import defs._
import chisel3._
import chisel3.util._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends MarCoreBundle {
}

class GPRState extends DifftestBaseBundle {
	val gpr = Wire(Vec(32, UInt(XLEN.W)))

	BoringUtils.addSource(gpr, "GPRIO")
//	val zero = Wire(UInt(XLEN.W))
//	val ra   = Wire(UInt(XLEN.W))
//	val sp   = Wire(UInt(XLEN.W))
//	val gp   = Wire(UInt(XLEN.W))
//	val tp   = Wire(UInt(XLEN.W))
//	val t0   = Wire(UInt(XLEN.W))
//	val t1   = Wire(UInt(XLEN.W))
//	val t2   = Wire(UInt(XLEN.W))
//	val s0   = Wire(UInt(XLEN.W))
//	val s1   = Wire(UInt(XLEN.W))
//	val a0   = Wire(UInt(XLEN.W))
//	val a1   = Wire(UInt(XLEN.W))
//	val a2   = Wire(UInt(XLEN.W))
//	val a3   = Wire(UInt(XLEN.W))
//	val a4   = Wire(UInt(XLEN.W))
//	val a5   = Wire(UInt(XLEN.W))
//	val a6   = Wire(UInt(XLEN.W))
//	val a7   = Wire(UInt(XLEN.W))
//	val s2   = Wire(UInt(XLEN.W))
//	val s3   = Wire(UInt(XLEN.W))
//	val s4   = Wire(UInt(XLEN.W))
//	val s5   = Wire(UInt(XLEN.W))
//	val s6   = Wire(UInt(XLEN.W))
//	val s7   = Wire(UInt(XLEN.W))
//	val s8   = Wire(UInt(XLEN.W))
//	val s9   = Wire(UInt(XLEN.W))
//	val s10  = Wire(UInt(XLEN.W))
//	val s11  = Wire(UInt(XLEN.W))
//	val t3   = Wire(UInt(XLEN.W))
//	val t4   = Wire(UInt(XLEN.W))
//	val t5   = Wire(UInt(XLEN.W))
//	val t6   = Wire(UInt(XLEN.W))
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
	val data = UInt(XLEN.W)
}