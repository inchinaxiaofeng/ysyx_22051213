// package marcore.cache

// import chisel3._
// import chisel3.util._

// import marcore._
// import marcore.isa._

// class DCache extends BlackBox with HasBlackBoxResource with HasMarCoreConst {
//     val io = IO(new Bundle {
//         val wen = Input(Bool())
//         val ren = Input(Bool())
//         val fuOpType = Input(UInt(FUOpTypeBits.W))
//         val aluData = Input(UInt(XLEN.W))
//         val dCData = Input(UInt(XLEN.W))
//         val dCOut = Output(UInt(XLEN.W))
//     })

//     addResource("/DCache.v")
// }