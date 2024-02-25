package module

import chisel3._
import chisel3.util._
// import chisel3.util.experimental.BoringUtils

import defs._
import isa._
import utils._

class InstrDecode extends MarCoreModule with HasInstrType {
	val io = IO(new Bundle {
		val ctrlFlowIO = new CtrlFlowIO()
		val instrIO = new InstrIO()
	})
	val instr = io.instrIO.instrIn.instr
	val instrType :: aluCtrl :: aluSrcA :: aluSrcB :: regWrite :: csrWrite :: memtoReg :: memRW :: memWidth :: branchCtrl :: pcPlusSrc :: branch :: jump :: Nil = 
		ListLookup(instr, Instructions.DecodeDefault, Instructions.DecodeTable)

	val ecall = (io.instrIO.instrIn.instr === "h00000073".U).asBool

	io.instrIO.instrRegID.rs1	:= instr(RS1Hi, RS1Lo)
	io.instrIO.instrRegID.rs2	:= instr(RS2Hi, RS2Lo)
	io.instrIO.instrRegID.rd	:= instr(RDHi, RDLo)
	io.instrIO.csrID			:= instr(CSRHi, CSRLo)
	io.instrIO.instrRegImm.imm	:= MuxLookup (
		instrType,
		0.U(XLEN.W),
		Seq (
			InstrI		-> SignExt(instr(31, 20), XLEN),
			InstrS		-> SignExt(Cat(instr(31, 25), instr(11, 7)), XLEN),
			InstrB		-> SignExt(Cat(instr(31), instr(7), instr(30, 25), instr(11, 8), 0.U(1.W)), XLEN),
			InstrU		-> SignExt(Cat(instr(31, 12), 0.U(12.W)), XLEN),
			InstrJ		-> SignExt(Cat(instr(31), instr(19, 12), instr(20), instr(30, 21), 0.U(1.W)), XLEN),
			InstrZicsr	-> ZeroExt(instr(19, 15), XLEN)
		)
	)

	io.ctrlFlowIO.ctrl2EXU.aluSrcA		:= aluSrcA
	io.ctrlFlowIO.ctrl2EXU.aluSrcB		:= aluSrcB
	io.ctrlFlowIO.ctrl2EXU.aluCtrl		:= aluCtrl
	io.ctrlFlowIO.ctrl2WBU.regWrite		:= regWrite
	io.ctrlFlowIO.ctrl2WBU.csrWrite		:= csrWrite
	io.ctrlFlowIO.ctrl2WBU.memtoReg		:= memtoReg
	io.ctrlFlowIO.ctrl2LSU.memRW		:= memRW
	io.ctrlFlowIO.ctrl2LSU.memWidth		:= memWidth
	io.ctrlFlowIO.ctrl2IDU.branchCtrl	:= branchCtrl
	io.ctrlFlowIO.ctrl2IDU.branch		:= branch
	io.ctrlFlowIO.ctrl2IDU.jump			:= jump
	io.ctrlFlowIO.ctrl2IDU.pcPlusSrc	:= pcPlusSrc
	io.ctrlFlowIO.ctrl2IDU.ecall		:= ecall
}

object Instructions extends HasInstrType with HasMarCoreParameter {
	def NOP = 0x00000013.U

	val DecodeDefault = List(
		InstrN, 
		ALUCtrl.NOCARE,
		ALUSrcA.NOCARE,
		ALUSrcB.NOCARE,
		RegWrite.F,
		CSRWrite.F,
		MemtoReg.F,
		MemRW.NONE,
		MemWidth.NOCARE,
		BranchCtrl.NOCARE,
		PCPlusSrc.PC,
		Branch.F,
		Jump.NONE
		)
	def DecodeTable = RVIInstr.table ++ RVMInstr.table ++ RVZicsrInstr.table
}