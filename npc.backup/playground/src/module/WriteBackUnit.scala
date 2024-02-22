// package marcore.pipelineUnit

// import chisel3._
// import chisel3.util._

// import marcore._

// // import 

// // class WriteBackUnit extends MarCoreModule {
// //     val io = IO(new Bundle {
// //         val in = Flipped(Decoupled(new CommitIO))
// //         val wb = new WriteBackIO
// //     })
// //     io.wb.rfWen     := io.in.bits.decode.ctrl.rfWen && io.in.valid
// //     io.wb.rfDest    := io.in.bits.decode.ctrl.rfDest
// //     io.wb.rfData    := io.in.bits.commits(io.in.bits.decode.ctrl.fuType)

// //     io.in.ready     := true.B

// //     val falseWire = WireInit(false.B) // make BoringUtils.addSource happy
// //     BoringUtils.addSource(io.in.valid, "perfCntCondMinstret")
// //     BoringUtils.addSource(falseWire, "perfCntCondMultiCommit")
// // }

// class WriteBackUnit extends MarCoreModule {
//     val io = IO(new Bundle {
//         val in = new Bundle {
//             val mem2Reg = Input(Bool())
//             val aluData = Input(UInt(XLEN.W))
//             val wData   = Input(UInt(XLEN.W))
//         }
//         val out = new Bundle {
//             val wData  = Output(UInt(XLEN.W))
//         }
//     })

//     io.out.wData := Mux(io.in.mem2Reg, io.in.aluData, io.in.wData)
// }
