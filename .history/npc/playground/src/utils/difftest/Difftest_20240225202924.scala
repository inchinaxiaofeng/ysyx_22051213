package utils.difftest

import chisel3._
import chisel3.util._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends Bundle {
}

class GPRState extends  DifftestBaseBundle {
	val zero = Output(UInt(XLEN.W))
	val ra   = Output(UInt(XLEN.W))
	val sp   = Output(UInt(XLEN.W))
	val gp   = Output(UInt(XLEN.W))
	val tp   = Output(UInt(XLEN.W))
	val t0   = Output(UInt(XLEN.W))
	val t1   = Output(UInt(XLEN.W))
	val t2   = Output(UInt(XLEN.W))
	val s0   = Output(UInt(XLEN.W))
	val s1   = Output(UInt(XLEN.W))
	val a0   = Output(UInt(XLEN.W))
	val a1   = Output(UInt(XLEN.W))
	val a2   = Output(UInt(XLEN.W))
	val a3   = Output(UInt(XLEN.W))
	val a4   = Output(UInt(XLEN.W))
	val a5   = Output(UInt(XLEN.W))
	val a6   = Output(UInt(XLEN.W))
	val a7   = Output(UInt(XLEN.W))
	val s2   = Output(UInt(XLEN.W))
	val s3   = Output(UInt(XLEN.W))
	val s4   = Output(UInt(XLEN.W))
	val s5   = Output(UInt(XLEN.W))
	val s6   = Output(UInt(XLEN.W))
	val s7   = Output(UInt(XLEN.W))
	val s8   = Output(UInt(XLEN.W))
	val s9   = Output(UInt(XLEN.W))
	val s10  = Output(UInt(XLEN.W))
	val s11  = Output(UInt(XLEN.W))
	val t3   = Output(UInt(XLEN.W))
	val t4   = Output(UInt(XLEN.W))
	val t5   = Output(UInt(XLEN.W))
	val t6   = Output(UInt(XLEN.W))

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
	val mstatus = UInt(64.W)
	val mepc = UInt(64.W)
	val mtvec = UInt(64.W)
	val mcause = UInt(64.W)
}

class StoreEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(64.W)
	val data = UInt(64.W)
	val mask = UInt(8.W)
}

class LoadEvent extends DifftestBaseBundle with HasValid {
	val addr = UInt(64.W)
}