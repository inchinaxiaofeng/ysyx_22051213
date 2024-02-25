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
	})

	io.wb.rfWen := io.in.bits.decode.ctrl.rfWen && io.in.valid
	io.wb.rfDest := io.in.bits.decode.ctrl.rfDest
	io.wb.rfData := io.in.bits.commits(io.in.bits.decode.ctrl.fuType)

	io.in.ready := true.B

	io.redirect := io.in.bits.decode.cf.redirect
	io.redirect.valid := io.in.bits.decode.cf.redirect.valid && io.in.valid

	Debug(io.in.valid, 
		blink + magentaFG + "[COMMIT]" + resetColor + " pc = 0x%x inst %x wen %x wdst %x wdata %x mmio %x intrNO %x\n",
		io.in.bits.decode.cf.pc, io.in.bits.decode.cf.instr, 
		io.wb.rfWen, io.wb.rfDest, io.wb.rfData, 
		io.in.bits.isMMIO, io.in.bits.intrNO
	)

	val falseWire = WireInit(false.B) // make BoringUtils.addSource happy
//	BoringUtils.addSource(io.in.valid, "perfCntCondMinstret")
//	BoringUtils.addSource(falseWire, "perfCntCondMultiCommit")

//	if (!p.FPGAPlatform) {
//		val difftest_commit = DifftestModule()
//	}
}

//class WBU extends MarCoreModule {
//	val io = IO(new Bundle {
//		val ls_wb_IO = Flipped(new LS_WB_IO())
//		val wbIO = new WriteBackIO()
//		val hu_wbu = Flipped(new HU_WBU())
//		val commit = new PC()
//		val instr = new Instr()
//	})
//	
//	io.wbIO.rd := io.ls_wb_IO.rd
//	io.wbIO.csrID := io.ls_wb_IO.csrID
//	io.wbIO.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
//	io.wbIO.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite
//	io.wbIO.data := MuxLookup (
//		io.ls_wb_IO.ctrl2WBU.memtoReg,
//		0.U(XLEN.W),
//		Seq (
//			MemtoReg.F  -> io.ls_wb_IO.exOut,
//			MemtoReg.T  -> io.ls_wb_IO.readData
//		)
//	)
//
//	io.hu_wbu.rd := io.ls_wb_IO.rd
//	io.hu_wbu.csrID := io.ls_wb_IO.csrID
//	io.hu_wbu.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
//	io.hu_wbu.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite
//
//	// Difftest
//	io.commit <> io.ls_wb_IO.commit
//	// Pipeline Trace
//	io.instr <> io.ls_wb_IO.instr
//}