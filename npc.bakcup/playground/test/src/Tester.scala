// package module
// 
// import chisel3._
// import chisel3.util._
// 
// import defs._
// 
// class Tester extends MarCoreModule {
//     val io = IO(new EXIO(XLEN))
// 
//     io.outC := MuxLookup (
//         io.ctrl,
//         0.U(XLEN.W),
//         Seq (
//             BranchCtrl.BLT  -> (io.srcA.asSInt() - io.srcB.asSInt()).asUInt,
//             BranchCtrl.BLTU -> (io.srcA.asUInt() - io.srcB.asUInt()).asUInt
//         )
//     )
// }