// package module.pipeline
// 
// import chisel3._
// import chisel3.util._
// 
// import defs._
// 
// class LS_WB extends MarCoreModule {
//     val io = IO(new Bundle {
//         val out = new LS_WB_IO()
//         val in = Flipped(new LS_WB_IO())
//     })
//     val reg = RegNext(io.in)
//     
//     io.out := reg
// }