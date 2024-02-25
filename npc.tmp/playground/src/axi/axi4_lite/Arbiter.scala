package axi.axi4_lite

import chisel3._
import chisel3.util._

import axi.axi4_lite._
import defs._

class AXI4_LiteArbiter
extends MarCoreModule {
	val IFU		= IO(Flipped(new Arbiter_IO()))
	val LSU		= IO(Flipped(new Arbiter_IO()))
	val Arbit	= IO(new Arbiter_IO())

	// Rule: LSU Read > IFU iFetch
	// This is the interface between the
	// "module parts external" to
	// "SoC/Simulation external"

	when(IFU.AR.m2sARvalid.asBool &&
	LSU.AR.m2sARvalid.asBool) {
		// Both LSU and IFU send read request, satisfy LSU first
		LSU.AR	<> Arbit.AR
		LSU.R	<> Arbit.R
		IFU.AR.s2mARready	:= false.B
		IFU.R.s2mRvalid		:= false.B
		IFU.R.s2mRdata		:= 0.U
		IFU.R.s2mRresp		:= 0.U
	}.elsewhen(IFU.AR.m2sARvalid.asBool &&
	(!LSU.AR.m2sARvalid.asBool)) {
		// Only IFU
		IFU.AR	<> Arbit.AR
		IFU.R	<> Arbit.R
		LSU.AR.s2mARready	:= false.B
		LSU.R.s2mRvalid		:= false.B
		LSU.R.s2mRdata		:= 0.U
		LSU.R.s2mRresp		:= 0.U
	}.elsewhen((!IFU.AR.m2sARvalid.asBool &&
	LSU.AR.m2sARvalid.asBool)) {
		// Only LSU
		LSU.AR	<> Arbit.AR
		LSU.R	<> Arbit.R
		IFU.AR.s2mARready	:= false.B
		IFU.R.s2mRvalid		:= false.B
		IFU.R.s2mRdata		:= 0.U
		IFU.R.s2mRresp		:= 0.U
	}.otherwise{
		// No read request
		Arbit.AR.m2sARvalid	:= false.B
		Arbit.R.m2sRready	:= false.B
		Arbit.AR.m2sARaddr	:= 0.U
		IFU.AR.s2mARready	:= false.B
		IFU.R.s2mRvalid		:= false.B
		IFU.R.s2mRdata		:= 0.U
		IFU.R.s2mRresp		:= 0.U
		LSU.AR.s2mARready	:= false.B
		LSU.R.s2mRvalid		:= false.B
		LSU.R.s2mRdata		:= 0.U
		LSU.R.s2mRresp		:= 0.U
	}
}