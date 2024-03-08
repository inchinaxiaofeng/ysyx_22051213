package module

import chisel3._
import chisel3.util._

import bus.axi4._
import defs._
import utils._
import java.rmi.server.UID

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
	val state_load = RegInit(s_idle)
	val state_store = RegInit(s_idle)

	switch (state_load) {
		is (s_idle) {
			when (io.ar.fire) { state_load := s_exec }
		}

		is (s_exec) {
			when (io.r.fire) { state_load := s_idle }
		}
	}

	switch (state_store) {
		is (s_idle) {
			when (io.aw.fire && io.w.fire) { state_store := s_exec }
		}

		is (s_exec) {
			when (io.b.fire) { state_store := s_idle }
		}
	}

	/* Just push the data to SRAM and use enable signal control */
	Info("MEM iReadAddr %x oReadData %x\n",
		io.ar.bits.addr, mem.io.oReadData)
	//Fixme: 能够从对应地址读取正确的数据，但是因为时序问题，导致实际传输出去的数据是紧接着的指令地址对应的指令数据
	mem.io.iReadAddr := io.ar.bits.addr
	mem.io.iWriteAddr := io.aw.bits.addr
	mem.io.iWriteData := io.w.bits.data
	mem.io.iByteMask := io.w.bits.strb

	/* Write */
	// Immediately ready
	io.w.ready	:= state_store === s_idle
	io.aw.ready	:= state_store === s_idle
	mem.io.iWen := state_store === s_exec
	io.b.valid := state_store === s_exec
	// if not ready, anything can be resp
	io.b.bits.apply(resp = Mux(io.b.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))

	/* Read */
	// Immediately ready
	io.ar.ready := state_load === s_idle
	mem.io.iRen := state_load === s_exec
	io.r.valid := state_load === s_exec
	// if not ready, anything can be resp
	io.r.bits.apply(data = mem.io.oReadData, resp =
		Mux(io.r.ready, AXI4Parameters.RESP_OKAY, AXI4Parameters.RESP_SLVERR))
}