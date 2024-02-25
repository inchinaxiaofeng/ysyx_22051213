package isa

import chisel3._
import chisel3.util._

import defs._
import module.fu.CSRCtrl
import module.fu.ALUCtrl

object Priviledged extends HasInstrType {
	def ECALL	= BitPat("b000000000000_00000_000_00000_1110011")
	def EBREAK	= BitPat("b000000000001_00000_000_00000_1110011")
	def WFI		= BitPat("b0001000_00101_00000_000_00000_1110011")

	val table = Array (
		ECALL	-> List(InstrI, FuType.csr, CSRCtrl.jmp),
		EBREAK	-> List(InstrI, FuType.csr, CSRCtrl.jmp),
		WFI		-> List(InstrI, FuType.alu, ALUCtrl.add)
	)
}