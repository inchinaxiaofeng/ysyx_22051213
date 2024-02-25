// package marcore.funcModule

// import chisel3._
// import chisel3.util._
// import chisel3.util.experimental.BoringUtils
// import java.util.Base64.Decoder

// import marcore._
// import marcore.isa._

// object MDUOpType extends HasMarCoreConst{ // [opcode[3], funct3]
//     def MUL     = "b00000".U
//     def MULH    = "b00001".U
//     def MULHSU  = "b00010".U
//     def MULHU   = "b00011".U
//     def DIV     = "b00100".U
//     def DIVU    = "b00101".U
//     def REM     = "b00110".U
//     def REMU    = "b00111".U

//     def MULW    = "b01000".U
//     def DIVW    = "b01100".U
//     def DIVUW   = "b01101".U
//     def REMW    = "b01110".U
//     def REMUW   = "b01111".U

//     def isDiv(op: UInt) = op(2)
//     def isDivSign(op: UInt) = isDiv(op) && !op(0)
//     def isW(op: UInt) = op(3)
// }

// class MDU extends MarCoreModule {
//     val io = IO(new Bundle {
//         val srcA    = Input(UInt(XLEN.W))
//         val srcB    = Input(UInt(XLEN.W))
//         val ctrl    = Input(UInt(FUOpTypeBits.W))
//         val outC    = Output(UInt(XLEN.W))
//     })
//     io.outC := io.srcA * io.srcB

//     // val tmp128 = Wire()

//     // io.outC := MuxLookup {

//     // }
// }

// // class MDUIO extends FunctionUnitIO {
// // }

// // // class MulDivIO(val len: Int) extends Bundle {
// // //     // val in = Flipped(DecoupledIO(Vec(2, Output(UInt(len.W)))))
// // //     // val sign = Input(Bool())
// // //     // val out = DecoupledIO(Output(UInt((len * 2).W)))
// // // }

// // class Multiplier(len: Int) extends MarCoreModule {
// //     // val io = IO(new MulDivIO(len))
// //     val io = IO(new Bundle {
// //         val srcA = Input(len.W)
// //         val srcB = Input(len.W)
// //         val outC = Output(len.W)
// //     })
// //     io.outC := io.srcA * io.srcB
// // }

// // class Divider(len: Int) extends Bundle {
// //     // val in = Flipped(DecoupledIO(Vec(2, )))
// //     val io = IO(new Bundle {
// //         val srcA = Input(len.W)
// //         val srcB = Input(len.W)
// //         val outC = Input(len.W)
// //     })
// //     io.outC := io.srcA / io.srcB
// // }

// // class MDU extends MarCoreModule {
// //     val io = IO(new MDUIO)

// //     val (valid, srcA, srcB, func) = (io.in.valid, io.in.srcA, io.in.srcB, io.in.func)
// //     def access (valid: Bool, srcA: UInt, srcB: UInt, func: UInt): UInt = {
// //         this.valid := valid
// //         this.srcA := srcA
// //         this.srcB := srcB
// //         this.func := func // Which is opcode here
// //         io.outC.bits
// //     }

// //     val isDiv = MDUOpType.isDiv(func)
// //     val isDivSign = MDUOpType.isDivSign(func)
// //     val isW = MDUOpType.isW(func)

// //     val mul = Module(new Multiplier(XLEN + 1))
// //     val div = Module(new Divider(XLEN))
// //     List(mul.io, div.io).map { case x =>
// //         x.sign := isDivSign
// //         x.out.ready := io.out.ready
// //     }

// //     val signext = SignExt(_: UInt, XLEN + 1)
// //     val zeroext = ZeroExt(_: UInt, XLEN + 1)
// //     val mulInputFuncTable = List(
// //         MDUOpType.MUL       -> (zeroext, zeroext)
// //         MDUOpType.MULH      -> (signext, signext)
// //         MDUOpType.MULHSU    -> (signext, zeroext)
// //         MDUOpType.MULHU     -> (zeroext, zeroext)
// //     )
// //     mul.io.in.bits(0) := MuxLookup (
// //         MDUOpType.MUL       -> signext
// //     )
// //     mul.io.in.bits(1) := MuxLookup (

// //     )

// //     val divInputFunc = (x: UInt) => Mux(isW, Mux(isDivSign, SignExt(x(31, 0), XLEN), ZeroExt(x(31, 0), XLEN)), x)
// //     div.io.in.bits(0) := divInputFunc(srcA)
// //     div.io.in.bits(1) := divInputFunc(srcB)

// //     mul.io.in.valid := io.in.valid && !isDiv
// //     div.io.in.valid := io.in.valid && isDiv

// //     val mulRes = Mux(func(1, 0) === MDUOpType.MUL(1, 0), )
// //     val divRes = ()
// //     val reg = Mux(isDiv, divRes, mulRes )

// //     val divInput

// //     io.out.bits := Mux(isW, SignExt(res(31, 0), XLEN), res) // done

// //     io.outC := Mux(isDiv, mulOut, divOut); // done

// // }