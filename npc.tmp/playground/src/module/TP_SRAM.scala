package module

import chisel3._
import chisel3.util._

import axi.axi4_lite
import defs._

// Can't Change In YSYX
class MEM extends BlackBox {
	val io = IO(new Bundle {
		val iRen		= Input(UInt(1.W))
		val iWen		= Input(UInt(1.W))
		val iReadAddr	= Input(UInt(32.W))
		val iWriteAddr	= Input(UInt(32.W))
		val iByteMask 	= Input(UInt(8.W))
		val iWriteData 	= Input(UInt(64.W))
		val oReadData 	= Output(UInt(64.W))
	})
}

class TP_SRAM extends MarCoreModule {
	val io	= IO(new SRAMIO())

	val mem	= Module(new MEM())
	// Used to simulate SRAM delay, OK == run
//	val rWriteBuilded	= RegInit(false.B)
//	val rReadBuilded	= RegInit(false.B)
	val rWriteStatuOK = RegInit(false.B)
	val rReadStatuOK  = RegInit(false.B)
	/* Just push the data to SRAM and use enable signal control */
	mem.io.iReadAddr := io.AR.m2sARaddr
	mem.io.iWriteAddr := io.AW.m2sAWaddr
	mem.io.iWriteData := io.W.m2sWdata
	mem.io.iByteMask := io.W.m2sWstrb
	io.R.s2mRdata := mem.io.oReadData

//	rReadBuilded	:= Mux(rReadBuilding,  false.B, Mux())
//	rWriteBuilded	:= Mux(rWriteBuilding, false.B, Mux())

	/* Write */
	// Immediately ready
	io.W.s2mWready		:= io.W.m2sWvalid
	io.AW.s2mAWready	:= io.AW.m2sAWvalid
	rWriteStatuOK := Mux(
		io.AW.m2sAWvalid &&
		io.W.m2sWvalid &&
		!rWriteStatuOK,
		true.B, false.B
	) // All valid and not reading/writting, start transformate
	mem.io.iWen := rWriteStatuOK
	io.B.s2mBvalid := rWriteStatuOK
	// if not ready, anything can be resp
	io.B.s2mBresp := Mux(io.B.m2sBready, 0.U, 2.U)

	/* Read */
	// Immediately ready
	io.AR.s2mARready := io.AR.m2sARvalid
	rReadStatuOK := Mux(
		io.AR.m2sARvalid &&
		!rReadStatuOK,
		true.B, false.B
	)
	mem.io.iRen := rReadStatuOK
	io.R.s2mRvalid := rReadStatuOK
	// if not ready, anything can be resp
	io.R.s2mRresp := Mux(io.R.m2sRready, 0.U, 2.U)
}