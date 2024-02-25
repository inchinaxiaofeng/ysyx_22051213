package defs

import chisel3._
import chisel3.util._

import defs._

class HU_EXU extends MarCoreBundle {
	val forwardCtrl	= new ForwardIO(ForwardE.WIDTH)
	val regID		= Flipped(new InstrRegID())
	val csrID		= Input(UInt(CSRIDWidth.W))
	val regWrite	= Input(Bool())
	val csrWrite	= Input(Bool())
	val memtoReg	= Input(Bool())
}

class HU_IDU extends MarCoreBundle {
	val forwardCtrl	= new ForwardIO(ForwardD.WIDTH)
	val jump		= Input(Bool())
	val branch		= Input(Bool())
	val pcPlusSrc	= Input(UInt(PCPlusSrc.WIDTH.W))
	val rs1			= Input(UInt(RegIDWidth.W))
	val rs2			= Input(UInt(RegIDWidth.W))
	val csrID		= Input(UInt(CSRIDWidth.W))
}

class HU_LSU extends MarCoreBundle {
	val memtoReg	= Input(Bool())
	val regWrite	= Input(Bool())
	val csrWrite	= Input(Bool())
	val rd			= Input(UInt(RegIDWidth.W))
	val csrID		= Input(UInt(CSRIDWidth.W))
}

class HU_WBU extends MarCoreBundle {
	val regWrite	= Input(Bool())
	val csrWrite	= Input(Bool())
	val rd			= Input(UInt(RegIDWidth.W))
	val csrID		= Input(UInt(CSRIDWidth.W))
}

