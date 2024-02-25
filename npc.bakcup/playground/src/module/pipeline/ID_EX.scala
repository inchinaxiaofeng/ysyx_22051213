// package module.pipeline
// 
// import chisel3._
// import chisel3.util._
// 
// import defs._
// 
// class ID_EX extends MarCoreModule {
//     val io = IO(new Bundle {
//         val out = new ID_EX_IO()
//         val clr = Input(Bool())
//         val in = Flipped(new ID_EX_IO())
//     })
// 
//     val reg = Reg(UInt(chiselTypeOf(io.in).getWidth.W))//.asTypeOf(new ID_EX_IO())
// 
//     // reg := Mux(
//     //     io.clr === 0.U,
//     //     io.in,
//     //     0.U(chiselTypeOf(io.in).getWidth.W).asTypeOf(new ID_EX_IO())
//     // )
// 
//     when (io.clr === 0.U) {
//         reg := io.in.asUInt
//     }.elsewhen (io.clr === 1.U) {
//         reg := 0.U(chiselTypeOf(io.in).getWidth.W).asUInt//.asTypeOf(new ID_EX_IO())
//     }
//     // reg := io.in
// 
//     io.out := reg.asTypeOf(new ID_EX_IO())
// }