package units

import chisel3._
import chisel3.util._

import axi.axi4_lite._
import defs._

class iFetchInternal
extends MarCoreBundle {
	// ON-PIPELINE VALUES
	val iPC = Input(UInt(XLEN.W))
	val oPCPlus4 = Output(UInt(XLEN.W))

	val oFeedBackPCChange = Output(Bool())

	val Pipeline_IF2ID_MsgBunlde = new IF_ID_IO()
}

// class iFetchExternal
// extends MarCoreBundle {
// 	val ifu_f = Flipped(ArbiterIO())
// }

class IFU extends MarCoreModule {
	val ioInternal = IO(new iFetchInternal())
	val ioExternal = IO(new Arbiter_IO())

	// Pipelined Version IFU
	val PC = ioInternal.iPC

	/* Get reback */
	val Rinst	= ioExternal.R.s2mRdata
	val Rresp	= ioExternal.R.s2mRresp // used to judge if stall PC_ID
	val Rvalid	= ioExternal.R.s2mRvalid
	val ARready	= ioExternal.AR.s2mARready // used to tell S that end of transformate

	/* Just push the addr/data to Arbiter */
	ioExternal.AR.m2sARvalid := Mux(PC =/= 0.U, true.B, false.B)
	ioExternal.AR.m2sARaddr := PC(31, 0)
	ioExternal.R.m2sRready := Rvalid

	ioInternal.Pipeline_IF2ID_MsgBunlde.instr.instr := Rinst
	ioInternal.Pipeline_IF2ID_MsgBunlde.pc.pc := PC
	ioInternal.oPCPlus4 := PC + 4.U(XLEN.W)
	// If true, current PC already get the inst and it need to change
	val FeedBackPCChange = Mux(
		Rresp === 0.U && Rvalid === 1.U,
		true.B, false.B
	)

	ioInternal.oFeedBackPCChange := FeedBackPCChange
}