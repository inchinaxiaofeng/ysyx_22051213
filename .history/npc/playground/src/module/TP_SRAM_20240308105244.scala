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
	implicit val moduleName: String = this.name
	val io	= IO(Flipped(new AXI4Lite))

	val mem	= Module(new MEM())

	val s_idle :: s_exec :: Nil = Enum(2)
	val state_read = RegInit(s_idle)
	val state_write = RegInit(s_idle)

	Info("stateRW (%x,%x)\n", state_read, state_write)

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
			when (io.aw.fire && io.w.fire) { state_write := s_exec }
		}

		is (s_exec) {
			when (io.b.ready) { state_write := s_idle }
		}
	}

	/* Just push the data to SRAM and use enable signal control */
	mem.io.iReadAddr := io.ar.bits.addr
	mem.io.iWriteAddr := io.aw.bits.addr
	mem.io.iWriteData := io.w.bits.data
	mem.io.iByteMask := io.w.bits.strb

	/* Write */
	// Immediately ready
	io.w.ready	:= state_write === s_idle
	io.aw.ready	:= state_write === s_idle
	mem.io.iWen := state_write === s_exec
	io.b.valid := state_write === s_exec
	// if not ready, anything can be resp
	io.b.bits.apply(resp = Mux(io.b.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))

	/* Read */
	// Immediately ready
	io.ar.ready := state_read === s_idle
	mem.io.iRen := state_read === s_exec
	io.r.valid := state_read === s_exec
	// if not ready, anything can be resp
	io.r.bits.apply(data = mem.io.oReadData, resp =
		Mux(io.r.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))
}