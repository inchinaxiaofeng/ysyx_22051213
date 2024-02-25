// package marcore.cache

// import chisel3._
// import chisel3.util._
// import javax.swing.InputMap

// import marcore._

// class ICache extends BlackBox with HasBlackBoxResource with HasMarCoreConst {
//     val io = IO(new Bundle {
//         val pc = Input(UInt(PCBits.W))
//         val instr = Output(UInt(InstrBits.W))
//     })

//     addResource("/ICache.v")
// }