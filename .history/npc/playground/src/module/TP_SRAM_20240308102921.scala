package module

import chisel3._
import chisel3.util._

import bus.axi4._
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
	val io	= IO(Flipped(new AXI4Lite))

	val mem	= Module(new MEM())

	val s_idle :: s_exec :: Nil = Enum(2)
	val state_read = RegInit(s_idle)
	val state_write = RegInit(s_idle)

	switch (state_read) {
		is (s_idle) {
			when (io.ar.fire) { state_read := s_exec }
		}

		is (s_exec) {
			when (io.r.ready) { state_read := s_idle }
		}
	}

	switch (state_write) {
		is (s_idle) {
			when (io.)
		}
	}

	// Used to simulate SRAM delay, OK == run
	val rWriteStatuOK = RegInit(false.B)
	val rReadStatuOK  = RegInit(false.B)
	/* Just push the data to SRAM and use enable signal control */
	mem.io.iReadAddr := io.ar.bits.addr
	mem.io.iWriteAddr := io.aw.bits.addr
	mem.io.iWriteData := io.w.bits.data
	mem.io.iByteMask := io.w.bits.strb

	/* Write */
	// Immediately ready
	io.w.ready	:= io.w.valid
	io.aw.ready	:= io.aw.valid
	rWriteStatuOK := Mux(
		io.aw.valid && io.w.valid && !rWriteStatuOK,
		true.B, false.B
	) // All valid and not reading/writting, start transformate
	mem.io.iWen := rWriteStatuOK
	io.b.valid := rWriteStatuOK
	// if not ready, anything can be resp
	io.b.bits.apply(resp = Mux(io.b.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))

	/* Read */
	// Immediately ready
	io.ar.ready := state_read === sr_idle
//	rReadStatuOK := Mux(io.ar.valid && !rReadStatuOK, true.B, false.B)
	mem.io.iRen := rReadStatuOK
	io.r.valid := rReadStatuOK
	// if not ready, anything can be resp
	io.r.bits.apply(data = mem.io.oReadData, resp =
		Mux(io.r.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))
}