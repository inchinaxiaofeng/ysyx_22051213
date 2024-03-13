package units

import chisel3._
import chisel3.util._

import bus.axi4._
import defs._
import utils._

class FrontendIO(implicit val p: MarCoreConfig) extends Bundle with HasMarCoreConst {
//	val imem = new SimpleBusUC(userBits = ICacheUserBundleWidth, addrBits = VAddrBits)
	val imem = new AXI4Lite
	val out = Vec(2, Decoupled(new DecodeIO))
	val flushVec = Output(UInt(4.W))
	val redirect = Flipped(new RedirectIO)
	val bpFlush = Output(Bool())
	val ipf = Input(Bool())
}

class Frontend_embedded(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
	val io = IO(new FrontendIO)
	val ifu = Module(new IFU_embedded)
	val idu = Module(new IDU)

	PipelineConnect(ifu.io.out, idu.io.in(0), idu.io.out(0).fire, ifu.io.flushVec(0))
	idu.io.in(1) := DontCare

	io.out <> idu.io.out
	io.redirect <> ifu.io.redirect
	io.flushVec <> ifu.io.flushVec
	io.bpFlush <> ifu.io.bpFlush
	io.ipf <> ifu.io.ipf
	io.imem <> ifu.io.imem

	Debug("---------------------- Frontend ----------------------\n")
	Debug("flush = %b, [ifu]<%x===%x%x>[idu]<%x%x==\n",
		ifu.io.flushVec.asUInt, ifu.io.out.valid, ifu.io.out.ready,
		idu.io.in(0).valid, idu.io.in(0).ready)
	Debug(ifu.io.out.valid, 
		"IFU: pc = 0x%x, instr = 0x%x\n",
		ifu.io.out.bits.pc, ifu.io.out.bits.instr)
	Debug(idu.io.in(0).valid, 
		"IDU1: pc = 0x%x, instr = 0x%x, pnpc = 0x%x\n",
		idu.io.in(0).bits.pc, idu.io.in(0).bits.instr, idu.io.in(0).bits.pnpc)
}

// class Frontend_inorder(implicit val p: MarCoreConfig) extends MarCoreModule {
// 	implicit val moduleName: String = this.name
// 	val io = IO(new FrontendIO)
// 	val ifu = Module(new IFU_inorder)
// //	val ibf = Module(new )
// 	
// }