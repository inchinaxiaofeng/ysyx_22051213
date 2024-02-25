// package units

// import chisel3._
// import chisel3.util._

// import defs

// class PCU(/*resetAddr: UInt*/) extends MarCoreModule {
//     val io = IO(new Bundle {
//         val npcSrc = Flipped(new NPCSRCIO)
//         val iFetch = new IFetch_IO
//     })

//     val npc = Module(new NPC())
//     val pc = RegInit(/*resetAddr*/0x80000000.U(XLEN.W))

//     iCache.io.pc := pc
//     pc := npc.io.npc
//     npc.io.npcSrc <> io.npcSrc
//     npc.io.pc := pc

//     io.iFetch.oPC := pc
// }