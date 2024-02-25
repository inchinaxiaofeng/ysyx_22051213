package isa

import chisel3._
import chisel3.util._

import defs._

object RV32I_ALUInstr extends HasInstrType {
    def ADDI    = BitPat("b???????_?????_?????_000_?????_00100_11")
    def SLLI    = if (XLEN == 32) BitPat("b0000000_?????_?????_001_?????_00100_11")
                            else  BitPat("b000000?_?????_?????_001_?????_00100_11")
    def SLTI    = BitPat("b???????_?????_?????_010_?????_00100_11")
    def SLTIU   = BitPat("b???????_?????_?????_011_?????_00100_11")
    def XORI    = BitPat("b???????_?????_?????_100_?????_00100_11")
    def SRLI    = if (XLEN == 32) BitPat("b0000000_?????_?????_101_?????_00100_11")
                            else  BitPat("b000000?_?????_?????_101_?????_00100_11")
    def SRAI    = if (XLEN == 32) BitPat("b0100000_?????_?????_101_?????_00100_11")
                            else  BitPat("b010000?_?????_?????_101_?????_00100_11")
    def ORI     = BitPat("b???????_?????_?????_110_?????_00100_11")
    def ANDI    = BitPat("b???????_?????_?????_111_?????_00100_11")

    def ADD     = BitPat("b0000000_?????_?????_000_?????_01100_11")
    def SUB     = BitPat("b0100000_?????_?????_000_?????_01100_11")
    def SLL     = BitPat("b0000000_?????_?????_001_?????_01100_11")
    def SLT     = BitPat("b0000000_?????_?????_010_?????_01100_11")
    def SLTU    = BitPat("b0000000_?????_?????_011_?????_01100_11")
    def XOR     = BitPat("b0000000_?????_?????_100_?????_01100_11")
    def SRL     = BitPat("b0000000_?????_?????_101_?????_01100_11")
    def SRA     = BitPat("b0100000_?????_?????_101_?????_01100_11")
    def OR      = BitPat("b0000000_?????_?????_110_?????_01100_11")
    def AND     = BitPat("b0000000_?????_?????_111_?????_01100_11")

    def LUI     = BitPat("b???????_?????_?????_???_?????_01101_11")
    def AUIPC   = BitPat("b???????_?????_?????_???_?????_00101_11")

    val table   = Array (
        ADDI    -> List(InstrI, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLLI    -> List(InstrI, ALUCtrl.SLL,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLTI    -> List(InstrI, ALUCtrl.SLT,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLTIU   -> List(InstrI, ALUCtrl.SLTU, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        XORI    -> List(InstrI, ALUCtrl.XOR,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRLI    -> List(InstrI, ALUCtrl.SRL,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRAI    -> List(InstrI, ALUCtrl.SRA,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        ORI     -> List(InstrI, ALUCtrl.OR,   ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        ANDI    -> List(InstrI, ALUCtrl.AND,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        ADD     -> List(InstrR, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SUB     -> List(InstrR, ALUCtrl.SUB,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLL     -> List(InstrR, ALUCtrl.SLL,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLT     -> List(InstrR, ALUCtrl.SLT,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLTU    -> List(InstrR, ALUCtrl.SLTU, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        XOR     -> List(InstrR, ALUCtrl.XOR,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRL     -> List(InstrR, ALUCtrl.SRL,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        OR      -> List(InstrR, ALUCtrl.OR,   ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        AND     -> List(InstrR, ALUCtrl.AND,  ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),

        LUI     -> List(InstrU, ALUCtrl.ADD,  ALUSrcA.P0,  ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        AUIPC   -> List(InstrU, ALUCtrl.ADD,  ALUSrcA.PC,  ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )
}

object RV32I_BRUInstr extends HasInstrType {
    def JAL     = BitPat("b?_??????????_?_????????_?????_11011_11")
    def JALR    = BitPat("b???????_?????_?????_000_?????_11001_11")

    def BEQ     = BitPat("b???????_?????_?????_000_?????_11000_11")
    def BNE     = BitPat("b???????_?????_?????_001_?????_11000_11")
    def BLT     = BitPat("b???????_?????_?????_100_?????_11000_11")
    def BGE     = BitPat("b???????_?????_?????_101_?????_11000_11")
    def BLTU    = BitPat("b???????_?????_?????_110_?????_11000_11")
    def BGEU    = BitPat("b???????_?????_?????_111_?????_11000_11")

    val table   = Array (
        JAL     -> List(InstrJ, ALUCtrl.ADD, ALUSrcA.PC, ALUSrcB.P4, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.PC,  Branch.F, Jump.JUMP),
        JALR    -> List(InstrI, ALUCtrl.ADD, ALUSrcA.PC, ALUSrcB.P4, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.REG, Branch.F, Jump.JUMP),

        BEQ     -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BEQ,  PCPlusSrc.PC, Branch.T, Jump.NONE),
        BNE     -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BNE,  PCPlusSrc.PC, Branch.T, Jump.NONE),
        BLT     -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BLT,  PCPlusSrc.PC, Branch.T, Jump.NONE),
        BGE     -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BGE,  PCPlusSrc.PC, Branch.T, Jump.NONE),
        BLTU    -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BLTU, PCPlusSrc.PC, Branch.T, Jump.NONE),
        BGEU    -> List(InstrB, ALUCtrl.NOCARE, ALUSrcA.NOCARE, ALUSrcB.NOCARE, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.BGEU, PCPlusSrc.PC, Branch.T, Jump.NONE)
    )
}

object RV32I_LSUInstr extends HasInstrType {
    def LB      = BitPat("b???????_?????_?????_000_?????_00000_11")
    def LH      = BitPat("b???????_?????_?????_001_?????_00000_11")
    def LW      = BitPat("b???????_?????_?????_010_?????_00000_11")
    def LBU     = BitPat("b???????_?????_?????_100_?????_00000_11")
    def LHU     = BitPat("b???????_?????_?????_101_?????_00000_11")
    
    def SB      = BitPat("b???????_?????_?????_000_?????_01000_11")
    def SH      = BitPat("b???????_?????_?????_001_?????_01000_11")
    def SW      = BitPat("b???????_?????_?????_010_?????_01000_11")

    val table   = Array (
        LB      -> List(InstrI, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.BYTE,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        LH      -> List(InstrI, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.HALF,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        LW      -> List(InstrI, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.WORD,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        LBU     -> List(InstrI, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.BYTEU, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        LHU     -> List(InstrI, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.HALFU, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),

        SB      -> List(InstrS, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.WRITE, MemWidth.BYTE,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SH      -> List(InstrS, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.WRITE, MemWidth.HALF,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SW      -> List(InstrS, ALUCtrl.ADD, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.WRITE, MemWidth.WORD,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
   )
}

object RV64I_Instr extends HasInstrType {
    def ADDIW   = BitPat("b???????_?????_?????_000_?????_00110_11")
    def SLLIW   = BitPat("b0000000_?????_?????_001_?????_00110_11")
    def SRLIW   = BitPat("b0000000_?????_?????_101_?????_00110_11")
    def SRAIW   = BitPat("b0100000 ????? ????? 101 ????? 00110 11")

    def ADDW    = BitPat("b0000000_?????_?????_000_?????_01110_11")
    def SUBW    = BitPat("b0100000_?????_?????_000_?????_01110_11")
    def SLLW    = BitPat("b0000000_?????_?????_001_?????_01110_11")
    def SRLW    = BitPat("b0000000_?????_?????_101_?????_01110_11")
    def SRAW    = BitPat("b0100000_?????_?????_101_?????_01110_11")
    
    def LWU     = BitPat("b???????_?????_?????_110_?????_00000_11")
    def LD      = BitPat("b???????_?????_?????_011_?????_00000_11")
    def SD      = BitPat("b???????_?????_?????_011_?????_01000_11")

    val table   = Array (
        // 64 only
        ADDIW   -> List(InstrI, ALUCtrl.ADDW, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLLIW   -> List(InstrI, ALUCtrl.SLLW, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRLIW   -> List(InstrI, ALUCtrl.SRLW, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRAIW   -> List(InstrI, ALUCtrl.SRAW, ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),

        ADDW    -> List(InstrR, ALUCtrl.ADDW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SUBW    -> List(InstrR, ALUCtrl.SUBW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SLLW    -> List(InstrR, ALUCtrl.SLLW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRLW    -> List(InstrR, ALUCtrl.SRLW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SRAW    -> List(InstrR, ALUCtrl.SRAW, ALUSrcA.REG, ALUSrcB.REG, RegWrite.T, CSRWrite.F, MemtoReg.F, MemRW.NONE, MemWidth.NOCARE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),

        LWU     -> List(InstrI, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.WORDU,  BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        LD      -> List(InstrI, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.T, CSRWrite.F, MemtoReg.T, MemRW.READ,  MemWidth.DOUBLE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE),
        SD      -> List(InstrS, ALUCtrl.ADD,  ALUSrcA.REG, ALUSrcB.IMM, RegWrite.F, CSRWrite.F, MemtoReg.F, MemRW.WRITE, MemWidth.DOUBLE, BranchCtrl.NOCARE, PCPlusSrc.NOCARE, Branch.F, Jump.NONE)
    )
}

object RVIInstr extends HasMarCoreParameter {
    val table = RV32I_ALUInstr.table ++ RV32I_BRUInstr.table ++ RV32I_LSUInstr.table ++
        (if (XLEN == 64) RV64I_Instr.table else Array.empty)
}