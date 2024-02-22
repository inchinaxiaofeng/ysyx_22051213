package isa

import chisel3._
import chisel3.util._

import defs._

object RV32M_Instr extends HasInstrType {
    def MUL     = BitPat("b0000001_?????_?????_000_?????_01100_11")
    def MULH    = BitPat("b0000001_?????_?????_001_?????_01100_11")
    def MULHSU  = BitPat("b0000001_?????_?????_010_?????_01100_11")
    def MULHU   = BitPat("b0000001_?????_?????_011_?????_01100_11")
    def DIV     = BitPat("b0000001_?????_?????_100_?????_01100_11")
    def DIVU    = BitPat("b0000001_?????_?????_101_?????_01100_11")
    def REM     = BitPat("b0000001_?????_?????_110_?????_01100_11")
    def REMU    = BitPat("b0000001_?????_?????_111_?????_01100_11")

    val mul_table = Array (
        MUL     -> List(InstrR, ALUCtrl.MUL,    ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        MULH    -> List(InstrR, ALUCtrl.MULH,   ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        MULHSU  -> List(InstrR, ALUCtrl.MULHSU, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        MULHU   -> List(InstrR, ALUCtrl.MULHU,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )

    val div_table = Array (
        DIV     -> List(InstrR, ALUCtrl.DIV,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        DIVU    -> List(InstrR, ALUCtrl.DIVU, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        REM     -> List(InstrR, ALUCtrl.REM,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        REMU    -> List(InstrR, ALUCtrl.REMU, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )
    val table = mul_table ++ (if (HasDiv) div_table else Array.empty)
}

object RV64M_Instr extends HasInstrType {
    def MULW    = BitPat("b0000001_?????_?????_000_?????_01110_11")
    def DIVW    = BitPat("b0000001_?????_?????_100_?????_01110_11")
    def DIVUW   = BitPat("b0000001_?????_?????_101_?????_01110_11")
    def REMW    = BitPat("b0000001_?????_?????_110_?????_01110_11")
    def REMUW   = BitPat("b0000001_?????_?????_111_?????_01110_11")

    val mul_table = Array (
        MULW    -> List(InstrR, ALUCtrl.MULW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )

    val div_table = Array (
        DIVW    -> List(InstrR, ALUCtrl.DIVW,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        DIVUW   -> List(InstrR, ALUCtrl.DIVUW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        REMW    -> List(InstrR, ALUCtrl.REMW,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        REMUW   -> List(InstrR, ALUCtrl.REMUW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )
    val table = mul_table ++ (if (HasDiv) div_table else Array.empty)
}

object RVMInstr extends HasMarCoreParameter {
    val table = RV32M_Instr.table ++ (if (XLEN == 64) RV64M_Instr.table else Array.empty)
}