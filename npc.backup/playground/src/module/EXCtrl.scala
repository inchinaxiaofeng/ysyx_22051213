// package marcore.unit

// import chisel3._
// import chisel3.util._

// import marcore._
// import marcore.isa._

// class EXCtrl extends MarCoreModule {
//     val io = IO(new Bundle {
//         val fu = Flipped(new FUIO)
//         val ctrlOut= new EXCtrlIO
//     })

//     io.ctrlOut.wDataSrc := MuxLookup (
//         io.fu.fuType,
//         "b0".U,
//         Seq(
//             FUType.ALU  -> "b0".U,
//             FUType.MDU  -> "b1".U
//         )
//     )

//     io.ctrlOut.wen := MuxLookup (
//         io.fu.fuType,
//         "b0".U,
//         Seq(
//             FUType.SAV  -> "b0".U,
//             FUType.LOD  -> "b1".U
//         )
//     )

//     io.ctrlOut.ren := MuxLookup (
//         io.fu.fuType,
//         "b0".U,
//         Seq(
//             FUType.LOD  -> "b0".U,
//             FUType.SAV  -> "b1".U
//         )
//     )
// }