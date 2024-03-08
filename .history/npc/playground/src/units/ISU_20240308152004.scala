package units

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import utils._
import module._
import top.Settings

// Sequential Inst Issue Unit
class ISU(implicit val p: MarCoreConfig) extends MarCoreModule with HasRegFileParameter {
	implicit val moduleName: String = this.name
    val io = IO(new Bundle {
        val in = Vec(2, Flipped(Decoupled(new DecodeIO))) // make in-order backend compatible with high performance frontend
        val out = Decoupled(new DecodeIO)
        val wb = Flipped(new WriteBackIO)
        val forward = Flipped(new ForwardIO)
		val flush = Input(Bool())
		val gpr = new RegsDiffIO(num = 32)
//		val difftest_decode_isu = Decoupled(new DecodeIO)
    })

	io.out.bits := DontCare
	val rfSrcA = io.in(0).bits.ctrl.rfSrcA
	val rfSrcB = io.in(0).bits.ctrl.rfSrcB
	val rfDest = io.in(0).bits.ctrl.rfDest

	def isDepend(rfSrc: UInt, rfDest: UInt, wen: Bool): Bool = (rfSrc =/= 0.U) && (rfSrc === rfDest) && wen

	val forwardRfWen = io.forward.wb.rfWen && io.forward.valid
	val dontForward = (io.forward.fuType =/= FuType.alu) && (io.forward.fuType =/= FuType.lsu)
	val srcADependEX = isDepend(rfSrcA, io.forward.wb.rfDest, forwardRfWen)
	val srcBDependEX = isDepend(rfSrcB, io.forward.wb.rfDest, forwardRfWen)
	val srcADependWB = isDepend(rfSrcA, io.wb.rfDest, io.wb.rfWen)
	val srcBDependWB = isDepend(rfSrcB, io.wb.rfDest, io.wb.rfWen)

	val srcAForwardNextCycle = srcADependEX && !dontForward
	val srcBForwardNextCycle = srcBDependEX && !dontForward
	val srcAForward = srcADependWB && Mux(dontForward, !srcADependEX, true.B)
	val srcBForward = srcBDependWB && Mux(dontForward, !srcBDependEX, true.B)

	val sb = new ScoreBoard
	val srcAReady = !sb.isBusy(rfSrcA) || srcAForwardNextCycle || srcAForward
	val srcBReady = !sb.isBusy(rfSrcB) || srcBForwardNextCycle || srcBForward
	io.out.valid := io.in(0).valid && srcAReady && srcBReady

	val rf = new RegFile

	// out 1
	io.out.bits.data.srcA := Mux1H(List(
		(io.in(0).bits.ctrl.srcAType === SrcType.pc) -> SignExt(io.in(0).bits.cf.pc, AddrBits),
		srcAForwardNextCycle -> io.forward.wb.rfData,
		(srcAForward && !srcAForwardNextCycle) -> io.wb.rfData,
		((io.in(0).bits.ctrl.srcAType =/= SrcType.pc) && !srcAForwardNextCycle && !srcAForward) -> rf.read(rfSrcA)
	))
	io.out.bits.data.srcB := Mux1H(List(
		(io.in(0).bits.ctrl.srcBType =/= SrcType.reg) -> io.in(0).bits.data.imm,
		srcBForwardNextCycle -> io.forward.wb.rfData,
		(srcBForward && !srcBForwardNextCycle) -> io.wb.rfData,
		((io.in(0).bits.ctrl.srcBType === SrcType.reg) && !srcBForwardNextCycle && !srcBForward) -> rf.read(rfSrcB)
	))
	io.out.bits.data.imm := io.in(0).bits.data.imm

	io.out.bits.cf <> io.in(0).bits.cf
	io.out.bits.ctrl := io.in(0).bits.ctrl
	io.out.bits.ctrl.isSrcAForward := srcAForwardNextCycle
	io.out.bits.ctrl.isSrcBForward := srcBForwardNextCycle
	// retire: write rf
	when (io.wb.rfWen) { rf.write(io.wb.rfDest, io.wb.rfData) }

	val wbClearMask = Mux(io.wb.rfWen && !isDepend(io.wb.rfDest, io.forward.wb.rfDest, forwardRfWen), sb.mask(io.wb.rfDest), 0.U(NRReg.W))
	val isuFireSetMask = Mux(io.out.fire, sb.mask(rfDest), 0.U)
	when (io.flush) { sb.update(0.U, Fill(NRReg, 1.U(1.W))) }
	.otherwise { sb.update(isuFireSetMask, wbClearMask) }

	io.in(0).ready := !io.in(0).valid || io.out.fire
	io.in(1).ready := false.B

	if (!Settings.get("IsChiselTest")) {
		for (i <- 0 until 32) io.gpr.regs(i) := rf.read(i.U)
	}

//	io.difftest_decode_isu <> io.in(0)
}