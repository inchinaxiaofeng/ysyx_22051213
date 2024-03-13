package units

import chisel3._
import chisel3.util._

import defs._
import utils._
import bus.axi4._

class Backend_inorder(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
	val io = IO(new Bundle {
		val in = Vec(2, Flipped(Decoupled(new DecodeIO)))
		val flush = Input(UInt(2.W))
		val dmem = new AXI4Lite

		val redirect = new RedirectIO
		// DiffTest
		val gpr = new RegsDiffIO(num = 32)
		val csr = new RegsDiffIO(num = 4)
		val difftest_commit = Decoupled(new CommitIO)
		val difftest_redirect = new RedirectIO
	})

	val isu = Module(new ISU)
	val exu = Module(new EXU)
	val wbu = Module(new WBU)

	PipelineConnect(isu.io.out, exu.io.in, exu.io.out.fire, io.flush(0))
	PipelineConnect(exu.io.out, wbu.io.in, true.B, io.flush(1))

	isu.io.in <> io.in

	isu.io.flush := io.flush(0)
	exu.io.flush := io.flush(1)

	Info("EXU OUT %x(%d,%d)\n",
		exu.io.out.bits.commits(0), exu.io.out.valid, exu.io.out.ready)

	isu.io.wb <> wbu.io.wb
	io.redirect <> wbu.io.redirect
	// forward
	isu.io.forward <> exu.io.forward

	io.dmem <> exu.io.dmem

	Debug("---------------------- Backend ----------------------\n")
	Debug("flush = %b, ==%x%x>[isu]<%x---%x>[exu]<%x---%x>[wbu]\n",
		io.flush.asUInt,
		isu.io.in(0).ready, isu.io.in(1).ready,
		isu.io.out.valid, exu.io.in.ready,
		exu.io.out.valid, wbu.io.in.ready)

	io.gpr <> isu.io.gpr
	io.csr <> exu.io.csr
	io.difftest_commit <> wbu.io.difftest_commit
	io.difftest_redirect <> wbu.io.difftest_redirect
}