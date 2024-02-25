package units

import chisel3._
import chisel3.util._

import module.fu._
import defs._

class EXU extends MarCoreModule {
	val io = IO(new Bundle {
		val id_ex_IO = Flipped(new ID_EX_IO())
		val ex_ls_IO = new EX_LS_IO()
		val hu_exu = Flipped(new HU_EXU())
		val forwardDataM = Input(UInt(XLEN.W))
		val forwardDataW = Input(UInt(XLEN.W))
		val alu_srcA = new ProbeIO(XLEN)
		val alu_srcB = new ProbeIO(XLEN)
	})

	val alu = Module(new ALU())

	val data1 = MuxLookup (
		io.hu_exu.forwardCtrl.forwardA,
		0.U(XLEN.W),
		Seq (
			ForwardE.RDE    -> (io.id_ex_IO.regData.rd1),
			ForwardE.ALUM   -> (io.forwardDataM),
			ForwardE.RDW    -> (io.forwardDataW)
		)
	)
	val data2 = MuxLookup (
		io.hu_exu.forwardCtrl.forwardB,
		0.U(XLEN.W),
		Seq (
			ForwardE.RDE    -> (io.id_ex_IO.regData.rd2),
			ForwardE.ALUM   -> (io.forwardDataM),
			ForwardE.RDW    -> (io.forwardDataW)
		)
	)
	val srcA = MuxLookup (
		io.id_ex_IO.ctrl2EXU.aluSrcA,
		0.U(XLEN.W),
		Seq (
			ALUSrcA.REG -> data1,
			ALUSrcA.PC  -> io.id_ex_IO.pc.pc,
			ALUSrcA.P0  -> 0.U,
			ALUSrcA.CSR	-> io.id_ex_IO.csrData
		)
	)
	val srcB = MuxLookup (
		io.id_ex_IO.ctrl2EXU.aluSrcB,
		0.U(XLEN.W),
		Seq (
			ALUSrcB.REG -> data2,
			ALUSrcB.IMM -> io.id_ex_IO.instrRegImm.imm,
			ALUSrcB.P4  -> 4.U,
			ALUSrcB.P0	-> 0.U,
			ALUSrcB.PB	-> 0xb.U,
			ALUSrcB.CSR	-> io.id_ex_IO.csrData
		)
	)

	alu.io.srcA := srcA
	alu.io.srcB := srcB
	alu.io.ctrl := io.id_ex_IO.ctrl2EXU.aluCtrl

	io.hu_exu.regID <> io.id_ex_IO.instrRegID
	io.hu_exu.csrID	:= io.id_ex_IO.csrID
	io.hu_exu.regWrite := io.id_ex_IO.ctrl2WBU.regWrite
	io.hu_exu.csrWrite := io.id_ex_IO.ctrl2WBU.csrWrite
	io.hu_exu.memtoReg := io.id_ex_IO.ctrl2WBU.memtoReg

	io.ex_ls_IO.aluOut := alu.io.outC
	io.ex_ls_IO.writeData := data2
	io.ex_ls_IO.rd := io.id_ex_IO.instrRegID.rd
	io.ex_ls_IO.csrID := io.id_ex_IO.csrID

	io.ex_ls_IO.ctrl2LSU := io.id_ex_IO.ctrl2LSU
	io.ex_ls_IO.ctrl2WBU := io.id_ex_IO.ctrl2WBU

	// Difftest
	io.ex_ls_IO.commit <> io.id_ex_IO.pc
	io.ex_ls_IO.instr <> io.id_ex_IO.instr // Pipeline Trace
	// Debug
	io.alu_srcA.data := srcA
	io.alu_srcB.data := srcB
}