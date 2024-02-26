package utils.difftest

import chisel3._
import chisel3.util._

sealed trait HasValid {
	val valid = Bool()
}

sealed trait DifftestBaseBundle extends Bundle {
}

class InstrCommit(val numPhyRegs: Int) extends DifftestBaseBundle with Has