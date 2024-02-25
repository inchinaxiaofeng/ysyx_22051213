package module.fu

import chisel3._
import chisel3.util._
// import chisel3.util.experimental.BoringUtils

import defs._

class BRU extends MarCoreModule {
    val io = IO(new EXIO(1))

    io.outC := MuxLookup (
        io.ctrl,
        false.B,
        Seq (
            BranchCtrl.BEQ  -> (io.srcA.asSInt() === io.srcB.asSInt()).asBool(),
            BranchCtrl.BNE  -> (io.srcA.asSInt() =/= io.srcB.asSInt()).asBool(),
            BranchCtrl.BLT  -> (io.srcA.asSInt()  <  io.srcB.asSInt()).asBool(),
            BranchCtrl.BGE  -> (io.srcA.asSInt()  >= io.srcB.asSInt()).asBool(),
            BranchCtrl.BLTU -> (io.srcA.asUInt()  <  io.srcB.asUInt()).asBool(),
            BranchCtrl.BGEU -> (io.srcA.asUInt()  >= io.srcB.asUInt()).asBool()
        )
    )
}