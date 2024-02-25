package axi.axi4_lite

import chisel3._
import chisel3.util._

import defs._

class AXI4_LiteAW(addrWidth: Int)
extends MarCoreBundle {
	val s2mAWready	= Input(Bool())
	val m2sAWvalid	= Output(Bool())
	val m2sAWaddr	= Output(UInt(addrWidth.W))
}

class AXI4_LiteW(dataWidth: Int)
extends MarCoreBundle {
	val s2mWready	= Input(Bool())
	val m2sWvalid 	= Output(Bool())
	val m2sWdata	= Output(UInt(dataWidth.W))
	val m2sWstrb	= Output(UInt((dataWidth/BYTELEN).W))
}

class AXI4_LiteB
extends MarCoreBundle {
	val s2mBresp	= Input(UInt(2.W))
	val s2mBvalid	= Input(Bool())
	val m2sBready	= Output(Bool())
}

class AXI4_LiteAR(addrWidth: Int)
extends MarCoreBundle {
	val s2mARready	= Input(Bool())
	val m2sARvalid	= Output(Bool())
	val m2sARaddr	= Output(UInt(addrWidth.W))
}

class AXI4_LiteR(dataWidth: Int)
extends MarCoreBundle {
	val s2mRvalid	= Input(Bool())
	val s2mRresp	= Input(UInt(2.W))
	val s2mRdata	= Input(UInt(dataWidth.W))
	val m2sRready	= Output(Bool())
}