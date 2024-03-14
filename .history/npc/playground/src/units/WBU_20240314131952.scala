package units

import chisel3._
import chisel3.util._

import defs._
import utils._

class WBU(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
    val io = IO(new Bundle {
		val in = Flipped(Decoupled(new CommitIO))
		val wb = new WriteBackIO
		val redirect = new RedirectIO
		val difftest_commit = Decoupled(new CommitIO)
		val difftest_instr = Output(UInt(XLEN.W))
		val difftest_redirect = new RedirectIO
	})

	io.wb.rfWen := io.in.bits.decode.ctrl.rfWen && io.in.valid
	io.wb.rfDest := io.in.bits.decode.ctrl.rfDest
	io.wb.rfData := io.in.bits.commits(io.in.bits.decode.ctrl.fuType)

	io.in.ready := true.B

	io.redirect.target := io.in.bits.decode.cf.redirect.target
	io.redirect.rtype := io.in.bits.decode.cf.redirect.rtype
	io.redirect.valid := io.in.bits.decode.cf.redirect.valid && io.in.valid

	Debug(io.in.valid, 
		blink + magentaFG + "[COMMIT]" + resetColor + " pc = 0x%x inst %x wen %x wdst %x wdata %x mmio %x intrNO %x\n",
		io.in.bits.decode.cf.pc, io.in.bits.decode.cf.instr, 
		io.wb.rfWen, io.wb.rfDest, io.wb.rfData, 
		io.in.bits.isMMIO, io.in.bits.intrNO
	)

	io.difftest_commit <> io.in
	io.difftest_instr <> io.in.bits.decode.cf.instr
	io.difftest_redirect.target := io.in.bits.decode.cf.redirect.target
	io.difftest_redirect.rtype := io.in.bits.decode.cf.redirect.rtype
	io.difftest_redirect.valid := io.in.bits.decode.cf.redirect.valid && io.in.valid

//	val falseWire = WireInit(false.B) // make BoringUtils.addSource happy
//	BoringUtils.addSource(io.in.valid, "perfCntCondMinstret")
//	BoringUtils.addSource(falseWire, "perfCntCondMultiCommit")
}