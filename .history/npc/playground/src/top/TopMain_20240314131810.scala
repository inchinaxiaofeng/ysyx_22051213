package top

import chisel3._
import circt.stage._
import chisel3.util._

import defs._
import units._
import utils._
import bus.axi4._

class Core(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
	class MarCoreIO extends Bundle {
//		val imem = new SimpleBusUC(userBits = ICacheUserBundleWidth, addrBits = VAddrBits)
//		val dmem = new SimpleBusUC(addrBits = VAddrBits)
//		val mmio = new SimpleBusUC
//		val frontend = Flipped(new SimpleBusUC)
		val imem = new AXI4Lite
		val dmem = new AXI4Lite
		val gpr = new RegsDiffIO(num = 32)
		val csr = new RegsDiffIO(num = 4)
		val difftest_commit = Decoupled(new CommitIO)
		val difftest_instr = Output(UInt(XLEN.W))
		val difftest_redirect = new RedirectIO
	}
	val io = IO(new MarCoreIO)

	// Frontend
	val frontend = (Settings.get("IsRV32"), Settings.get("EnableOutOfOrderExec")) match {
//		case (true, _)		=> Module(new Frontend_embedded)
		case (false, _)		=> Module(new Frontend_embedded)
	}
	frontend.io.imem <> io.imem

	// Backend
	if (EnableOutOfOrderExec) {
		// TODO
	} else {
		val backend = Module(new Backend_inorder)
		backend.io.dmem <> io.dmem

		PipelineVector2Connect(new DecodeIO, frontend.io.out(0), frontend.io.out(1), backend.io.in(0), backend.io.in(1), frontend.io.flushVec(1), 1)

		frontend.io.ipf := false.B // Fixme maybe

		// redirect
		frontend.io.redirect <> backend.io.redirect
		backend.io.flush := frontend.io.flushVec(3, 2)
		Debug("flush = %b, 0: frontend:(%d,%d), backend:(%d,%d); " +
			"1: frontend:(%d,%d), backend:(%d,%d)\n",
			frontend.io.flushVec.asUInt,
			frontend.io.out(0).valid, frontend.io.out(0).ready,
			backend.io.in(0).valid, backend.io.in(0).ready,
			frontend.io.out(1).valid, frontend.io.out(1).ready,
			backend.io.in(1).valid, backend.io.in(1).ready)

		io.gpr <> backend.io.gpr
		io.csr <> backend.io.csr
		io.difftest_commit <> backend.io.difftest_commit
		io.difftest_redirect <> backend.io.difftest_redirect
	}
}