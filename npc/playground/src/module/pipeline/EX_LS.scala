package module.pipeline

import chisel3._
import chisel3.util._

import defs._

class EX_LS extends MarCoreModule {
    val io = IO(new Bundle {
        val out = new EX_LS_IO()
        val in = Flipped(new EX_LS_IO())
    })
    
    val reg = RegNext(io.in)

    io.out := reg
}