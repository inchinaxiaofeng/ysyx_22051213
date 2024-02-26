package utils.difftest

import chisel3._
import chisel3.util._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends Bundle {
}

class GPRState extends  DifftestBaseBundle {
	
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