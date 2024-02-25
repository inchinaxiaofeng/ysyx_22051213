package isa

import chisel3._
import chisel3.util._

import defs._

object RVZicsrInstr extends HasInstrType {
	def CSRRW	= BitPat("b????????????_?????_001_?????_1110011")
	def CSRRS	= BitPat("b????????????_?????_010_?????_1110011")
	def CSRRC	= BitPat("b????????????_?????_011_?????_1110011")
	def CSRRWI	= BitPat("b????????????_?????_101_?????_1110011")
	def CSRRSI	= BitPat("b????????????_?????_110_?????_1110011")
	def CSRRCI	= BitPat("b????????????_?????_111_?????_1110011")

	val table = Array (
		CSRRW	-> List(InstrZicsr, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.P0,  RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
		CSRRS	-> List(InstrZicsr, ALUCtrl.OR,   ALUSrcA.REG, ALUSrcB.CSR, RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
		CSRRC	-> List(InstrZicsr, ALUCtrl.NAND, ALUSrcA.REG, ALUSrcB.CSR, RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
		CSRRWI	-> List(InstrZicsr, ALUCtrl.ADD,  ALUSrcA.P0,  ALUSrcB.IMM, RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
		CSRRSI	-> List(InstrZicsr, ALUCtrl.OR,   ALUSrcA.CSR, ALUSrcB.IMM, RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
		CSRRCI	-> List(InstrZicsr, ALUCtrl.NAND, ALUSrcA.CSR, ALUSrcB.IMM, RegWrite.T, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
	)
}