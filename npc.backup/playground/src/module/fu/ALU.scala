package module.fu

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import utils._

class ALU extends MarCoreModule {
    val io = IO(new EXIO(XLEN))

    io.outC := MuxLookup (
        io.ctrl,
        0.U(XLEN.W),
        Seq (
			ALUCtrl.ADD   	->	(io.srcA + io.srcB),
			ALUCtrl.SUB   	->	(io.srcA - io.srcB),
			ALUCtrl.SLL   	->	(io.srcA << io.srcB(5, 0)),
			ALUCtrl.SLT   	->	(io.srcA.asSInt() < io.srcB.asSInt()).asUInt(),
			ALUCtrl.SLTU  	->	(io.srcA.asUInt() < io.srcB.asUInt()).asUInt(),
			ALUCtrl.XOR   	->	(io.srcA ^ io.srcB),
			ALUCtrl.SRL   	->	(io.srcA >> io.srcB(5, 0)),
			ALUCtrl.SRA   	->	(io.srcA.asSInt() >> io.srcB(5, 0).asUInt()).asUInt(),
			ALUCtrl.OR    	->	(io.srcA | io.srcB),
			ALUCtrl.AND   	->	(io.srcA & io.srcB),
			ALUCtrl.NAND	->	(io.srcA & ~io.srcB),
			ALUCtrl.ADDW  	->	SignExt((io.srcA(31, 0) + io.srcB(31, 0))(31, 0), XLEN),
			ALUCtrl.SUBW  	->	SignExt((io.srcA(31, 0) - io.srcB(31, 0))(31, 0), XLEN),
			ALUCtrl.SLLW  	->	SignExt((io.srcA(31, 0) << io.srcB(4, 0))(31, 0), XLEN),
			ALUCtrl.SLTW  	->	SignExt((io.srcA(31, 0).asSInt() < io.srcB(31, 0).asSInt()).asUInt(), XLEN),
			ALUCtrl.SLTUW 	->	ZeroExt((io.srcA(31, 0).asUInt() < io.srcB(31, 0).asUInt()).asUInt(), XLEN),
			ALUCtrl.XORW  	->	SignExt((io.srcA(31, 0) ^ io.srcB(31, 0)), XLEN),
			ALUCtrl.SRLW  	->	SignExt((io.srcA(31, 0) >> io.srcB(4, 0)), XLEN),
			ALUCtrl.SRAW  	->	SignExt((io.srcA(31, 0).asSInt() >> io.srcB(4, 0).asUInt()).asUInt, XLEN),
//			ALUCtrl.SRAIW	->	(io.srcA(31, 0).asSInt() >> io.srcB(5, 0).asUInt()).asUInt(),
			ALUCtrl.ORW   	->	SignExt((io.srcA(31, 0) | io.srcB(31, 0)), XLEN),
			ALUCtrl.ANDW  	->	SignExt((io.srcA(31, 0) & io.srcB(31, 0)), XLEN),
			ALUCtrl.MUL   	->	(io.srcA * io.srcB),
			ALUCtrl.MULH  	->	(io.srcA.asSInt() * io.srcB.asSInt())(63, 32).asUInt(),
			ALUCtrl.MULHSU	->	(io.srcA.asSInt() * io.srcB.asUInt())(63, 32).asUInt(),
			ALUCtrl.MULHU 	->	(io.srcA.asUInt() * io.srcB.asUInt())(63, 32).asUInt(),
			ALUCtrl.DIV   	->	(io.srcA.asSInt() / io.srcB.asSInt()).asUInt(),
			ALUCtrl.DIVU  	->	(io.srcA / io.srcB),
			ALUCtrl.REM   	->	(io.srcA.asSInt() % io.srcB.asSInt()).asUInt(),
			ALUCtrl.REMU  	->	(io.srcA % io.srcB),
			ALUCtrl.MULW  	->	SignExt((io.srcA(31, 0).asSInt() * io.srcB(31, 0).asSInt()).asUInt(), XLEN),
			ALUCtrl.DIVW  	->	SignExt((io.srcA(31, 0).asSInt() / io.srcB(31, 0).asSInt()).asUInt(), XLEN),
			ALUCtrl.DIVUW 	->	ZeroExt((io.srcA(31, 0).asUInt() / io.srcB(31, 0).asUInt()).asUInt(), XLEN),
			ALUCtrl.REMW  	->	SignExt((io.srcA(31, 0).asSInt() % io.srcB(31, 0).asSInt()).asUInt(), XLEN),
			ALUCtrl.REMUW 	->	ZeroExt((io.srcA(31, 0).asUInt() % io.srcB(31, 0).asUInt()).asUInt(), XLEN)

        )
    )
}