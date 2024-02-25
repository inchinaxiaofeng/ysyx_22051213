// package module.pipeline
// 
// import chisel3._
// import chisel3.util._
// 
// import defs._
// 
// class IF_ID extends MarCoreModule {
//     val io = IO(new Bundle {
//         val out = new IF_ID_IO()
//         val in = Flipped(new IF_ID_IO())
//         val clr = Input(Bool())
//         val en = Input(Bool()) // use as stall
//     })
// 
//     val reg = Reg(UInt(chiselTypeOf(io.in).getWidth.W))//.asTypeOf(new IF_ID_IO())
//     when ((io.en === true.B) && (io.clr === 0.U)) {
//         reg := io.in.asUInt()
//     }.elsewhen ((io.en === true.B) && (io.clr === 1.U)) {
//         reg := 0.U(chiselTypeOf(io.in).getWidth.W).asUInt()//.asTypeOf(new IF_ID_IO())
//     }.otherwise {
// 
//     }
// 
//     io.out := reg.asTypeOf(new IF_ID_IO())
// }