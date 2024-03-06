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
//		val dmem = new SimpleBusUC(addrBits = VAddrBits)
//		val memMMU = Flipped(new MemMMUIO)

		val redirect = new RedirectIO
		// Debug
		val gpr = new RegsDiffIO(num = 32)
		val csr = new RegsDiffIO(num = 4)
		val commit = new DiffCommitIO
	})

	val isu = Module(new ISU)
	val exu = Module(new EXU)
	val wbu = Module(new WBU)

	PipelineConnect(isu.io.out, exu.io.in, exu.io.out.fire, io.flush(0))
	PipelineConnect(exu.io.out, wbu.io.in, true.B, io.flush(1))

	isu.io.in <> io.in

	isu.io.flush := io.flush(0)
	exu.io.flush := io.flush(1)

	isu.io.wb <> wbu.io.wb
	io.redirect <> wbu.io.redirect
//	Info("exu redirect (%b,%x), wbu redirect (%b,%x)\n",
//		exu.io.out.bits.decode.cf.redirect.valid,
//		exu.io.out.bits.decode.cf.redirect.target,
//		wbu.io.redirect.valid, wbu.io.redirect.target)
	// forward
	isu.io.forward <> exu.io.forward

//	io.memMMU.imem <> exu.io.memMMU.imem
//	io.memMMU.dmem <> exu.io.memMMU.dmem
	io.dmem <> exu.io.dmem

	Debug("---------------------- Backend ----------------------\n")
	Debug("flush = %b, isu:(%d,%d), exu:(%d,%d)\n",
		io.flush.asUInt, 
		isu.io.out.valid, isu.io.out.ready,
		exu.io.out.valid, exu.io.out.ready)
//	Debug(isu.io.out.valid, "ISU: pc = 0x%x, instr = 0x%x\n",
//		isu.io.out.bits.pc)

	io.gpr <> isu.io.gpr
	io.csr <> exu.io.csr
	io.commit := wbu.io.commit
}