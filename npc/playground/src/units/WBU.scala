package units

import chisel3._
import chisel3.util._

import defs._

class WBU extends MarCoreModule {
	val io = IO(new Bundle {
		val ls_wb_IO = Flipped(new LS_WB_IO())
		val wbIO = new WriteBackIO()
		val hu_wbu = Flipped(new HU_WBU())
		val commit = new PC()
		val instr = new Instr()
	})
	
	io.wbIO.rd := io.ls_wb_IO.rd
	io.wbIO.csrID := io.ls_wb_IO.csrID
	io.wbIO.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
	io.wbIO.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite
	io.wbIO.data := MuxLookup (
		io.ls_wb_IO.ctrl2WBU.memtoReg,
		0.U(XLEN.W),
		Seq (
			MemtoReg.F  -> io.ls_wb_IO.exOut,
			MemtoReg.T  -> io.ls_wb_IO.readData
		)
	)

	io.hu_wbu.rd := io.ls_wb_IO.rd
	io.hu_wbu.csrID := io.ls_wb_IO.csrID
	io.hu_wbu.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
	io.hu_wbu.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite

	// Difftest
	io.commit <> io.ls_wb_IO.commit
	// Pipeline Trace
	io.instr <> io.ls_wb_IO.instr
}