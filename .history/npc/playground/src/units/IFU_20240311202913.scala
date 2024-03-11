package units

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import bus.axi4._
import module.fu._
import defs._
import utils._
import top.Settings

trait HasResetVector {
	val resetVector = Settings.getLong("ResetVector")
}

class IFU_embedded extends MarCoreModule with HasResetVector {
	implicit val moduleName: String = this.name
	val io = IO(new Bundle {
		val imem = new AXI4Lite
		val out = Decoupled(new CtrlFlowIO)
		val redirect = Flipped(new RedirectIO)
		val flushVec = Output(UInt(4.W))
		val bpFlush = Output(Bool())
		val ipf = Input(Bool())
	})

	val pc = RegInit(resetVector.U(VAddrBits.W))
	val pcUpdate = io.redirect.valid || io.imem.r.fire
	val snpc = pc + 4.U // sequential next PC

	// predict next pc
	val pnpc = pc + 4.U // bpu.io.out.target // static predict pc
	val npc = Mux(io.redirect.valid, io.redirect.target, Mux(false.B/*bpu.io.out.valid*/, pnpc, snpc))

	when (pcUpdate) { pc := npc }

	io.flushVec := Mux(io.redirect.valid, "b1111".U, 0.U)
	io.bpFlush := false.B

	io.imem := DontCare
	io.imem.ar.bits.apply(addr = pc)
	io.imem.ar.valid := io.out.ready
	io.imem.r.ready := io.out.ready || io.flushVec(0)

	io.out.bits := DontCare
	io.out.bits.instr := io.imem.r.bits.data

	io.out.bits.pc := pc
	io.out.bits.pnpc := pnpc
	io.out.valid := io.imem.r.valid && !io.flushVec(0)

//	Info("imem valid %x\n", io.imem.r.valid)

	Debug(io.imem.r.fire || io.imem.ar.fire, magentaFG+"[IFI]"+resetColor+
		" pc=%x redirect %x npc %x pc %x pnpc %x\n",
		io.imem.ar.bits.addr, io.redirect.valid, 
		npc, pc, /*bpu.io.out.target*/npc)
	Debug(io.out.fire, magentaFG+"[IFO]"+resetColor+
		" pc=%x inst=%x npc=%x ipf %x\n",
		io.out.bits.pc, io.out.bits.instr, io.out.bits.pnpc, io.ipf)
	Debug(io.redirect.valid, magentaFG+"[Redirect]"+resetColor+
		" target 0x%x rtype %b\n",
		io.redirect.target, io.redirect.rtype)

	// 需要实现，用于做性能计数器
//	BoringUtils.addSource(BoolStopWatch(io.imem.req.valid, io.imem.resp.fire), "perfCntCondMimemStall")
//	BoringUtils.addSource(WireInit(io.flushVec.orR), "perfCntCondMifuFlush")
}