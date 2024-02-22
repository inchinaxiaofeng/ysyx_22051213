package isa

import chisel3._
import chisel3.util._

import defs._

object Priviledged extends HasInstrType {
	def ECALL	= BitPat("b000000000000_00000_000_00000_1110011")
	def EBREAK	= BitPat("b000000000001_00000_000_00000_1110011")

	val table = Array (
		ECALL	-> List(InstrI, ALUCtrl.ADD, ALUSrcA.CSR, ALUSrcB.PB, RegWrite.F, CSRWrite.T, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.MEPC)
	)
}