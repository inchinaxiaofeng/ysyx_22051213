package isa

import chisel3._
import chisel3.util._

import defs._
import module._
import module.fu._

object RV32M_Instr extends HasInstrType {
	def MUL		= BitPat("b0000001_?????_?????_000_?????_01100_11")
	def MULH	= BitPat("b0000001_?????_?????_001_?????_01100_11")
	def MULHSU	= BitPat("b0000001_?????_?????_010_?????_01100_11")
	def MULHU	= BitPat("b0000001_?????_?????_011_?????_01100_11")
	def DIV		= BitPat("b0000001_?????_?????_100_?????_01100_11")
	def DIVU	= BitPat("b0000001_?????_?????_101_?????_01100_11")
	def REM		= BitPat("b0000001_?????_?????_110_?????_01100_11")
	def REMU	= BitPat("b0000001_?????_?????_111_?????_01100_11")
	
	val mul_table = Array (
		MUL		-> List(InstrR, FuType.mdu, MDUCtrl.mul		),
		MULH	-> List(InstrR, FuType.mdu, MDUCtrl.mulh	),
		MULHSU	-> List(InstrR, FuType.mdu, MDUCtrl.mulhsu	),
		MULHU	-> List(InstrR, FuType.mdu, MDUCtrl.mulhu	)
	)
	
	val div_table = Array (
		DIV		-> List(InstrR, FuType.mdu, MDUCtrl.div		),
		DIVU	-> List(InstrR, FuType.mdu, MDUCtrl.divu	),
		REM		-> List(InstrR, FuType.mdu, MDUCtrl.rem		),
		REMU	-> List(InstrR, FuType.mdu, MDUCtrl.remu	)
	)
	val table = mul_table ++ (if (HasDiv) div_table else Array.empty)
}

object RV64M_Instr extends HasInstrType {
	def MULW	= BitPat("b0000001_?????_?????_000_?????_01110_11")
	def DIVW	= BitPat("b0000001_?????_?????_100_?????_01110_11")
	def DIVUW	= BitPat("b0000001_?????_?????_101_?????_01110_11")
	def REMW	= BitPat("b0000001_?????_?????_110_?????_01110_11")
	def REMUW	= BitPat("b0000001_?????_?????_111_?????_01110_11")
	
	val mul_table = Array (
	    MULW	-> List(InstrR, FuType.mdu, MDUCtrl.mulw	)
	)
	
	val div_table = Array (
		DIVW	-> List(InstrR, FuType.mdu, MDUCtrl.divw	),
		DIVUW	-> List(InstrR, FuType.mdu, MDUCtrl.divuw	),
		REMW	-> List(InstrR, FuType.mdu, MDUCtrl.remw	),
		REMUW	-> List(InstrR, FuType.mdu, MDUCtrl.remuw	)
	)
	val table = mul_table ++ (if (HasDiv) div_table else Array.empty)
}

object RVMInstr extends HasMarCoreParameter {
	val table = RV32M_Instr.table ++ (if (XLEN == 64) RV64M_Instr.table else Array.empty)
}