// package module

// import chisel3._
// import chisel3.util._
// import chisel3.util.experimental.BoringUtils

// import defs

// class NPC extends MarCoreModule {
//     val io = IO(new Bundle {
//         val npcSrc = Flipped(new NPCSRCIO)
//         val pc = Input(UInt(InstrBits.W))
//         val npc = Output(UInt(InstrBits.W))
//     })

//     io.npc := MuxLookup (
//         io.npcSrc.npcSrc ,
//         4.U ,
//         Seq (
//             NPCOpType.PCP4  -> (io.pc    + 4.U).asUInt ,
//             NPCOpType.PCPI  -> (io.pc    + io.npcSrc.imm).asUInt ,
//             NPCOpType.RPI   -> Mux(io.npcSrc.isBra, io.npcSrc.rfRData1  + io.npcSrc.imm, 4.U).asUInt ,
//         )
//     )
// }