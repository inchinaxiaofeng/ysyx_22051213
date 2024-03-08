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
//		val imem = new SimpleBusUC(userBits = VAddrBits*2, addrBits = VAddrBits)
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

//	val bpu = Module(new BPU_embedded) // 分支预测单元

	// predict next pc
	val pnpc = pc + 4.U // bpu.io.out.target // 分支预测npc
	val npc = Mux(io.redirect.valid, io.redirect.target, Mux(false.B/*bpu.io.out.valid*/, pnpc, snpc))

//	bpu.io.in.pc.valid := io.imem.req.fire // only predict when ICache accepts a request
//	bpu.io.in.pc.bits := npc // predict one cycle early
//	bpu.io.flush := io.redirect.valid // 重定向时，之前记录的已经没用了

	when (pcUpdate) { pc := npc }

	io.flushVec := Mux(io.redirect.valid, "b1111".U, 0.U)
	io.bpFlush := false.B

	val s_idle :: s_wait_resp :: Nil = Enum(2)
	val state = RegInit(s_idle)
	switch (state) {
		is (s_idle) {
			when (dmem.ar.fire) { state := s_wait_resp}
		}

		is (s_wait_resp) {
			when (dmem.r.fire) { state := s_wait_resp}
		}
	}
//	io.imem := DontCare
	io.imem.ar.bits.apply(addr = pc)
	io.imem.ar.valid := state === s_idle && io.out.ready
	io.imem.r.ready := state === s_wait_resp && (io.out.ready || io.flushVec(0))
	// Close B channel by setting false.B to b.ready signal.
	io.imem.b.ready := false.B
	// Close AW and W channel by setting false.B to aw.valid and w.valid signal.
	// Calling apply func with default args has no effect on closing a channel.
	io.imem.aw.valid := false.B;	io.imem.w.valid := false.B;
	io.imem.aw.bits.apply();		io.imem.w.bits.apply();

	io.out.bits := DontCare
	io.out.bits.instr := io.imem.r.bits.data
//	we havn't a real TLB yet, so there have no slave to set the "user" channel, 
//	which used to send a predictally PC value and the orinally PC value.
//	io.imem.resp.bits.user.map{ case x =>
//		io.out.bits.pc := x(2*VAddrBits-1, VAddrBits)
//		io.out.bits.pnpc := x(VAddrBits-1, 0)
//	}
	io.out.bits.pc := pc
	io.out.bits.pnpc := pnpc
	Info(" %x\n", pnpc)
//	here is a temporary way to fix the problem
	io.out.valid := io.imem.r.valid && !io.flushVec(0)

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