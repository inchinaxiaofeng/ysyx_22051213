package top

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import bus.axi4.{AXI4, AXI4Lite, AXI4Lite_Arbiter}
import module._
import defs._
import top.Settings
import utils.difftest._

class SimTopIO extends Bundle {
	val gpr = new RegsDiff(num = 32)
//	val gpr = new GPRState
//	val csr = new CSRState
//	val load = Output(new LoadEvent)
//	val store = Output(new StoreEvent)
//	val instr = Output(new InstrCommit(numPhyRegs = 32))
}

class SimTop extends Module {
	lazy val config = MarCoreConfig(FPGAPlatform = false)
	val io = IO(new SimTopIO())
	val core = Module(new Core()(config))
	val arbiter = Module(new AXI4Lite_Arbiter())
	val TP_SRAM = Module(new TP_SRAM())

	core.io.imem <> arbiter.InstFetch
	core.io.dmem <> arbiter.LoadStore

	arbiter.Arbiter <> TP_SRAM.io

	if (Settings.get("DiffTestGPR")) {
		gpr := VecInit(Seq.fill(32)(0.U))
		BoringUtils.addSink(gpr, "GPR")
		for (i <- 0 until 32) io.gpr.regs(i) := gpr(i)
	} else {
		for (i <- 0 until 32) io.gpr.regs(i) := 0.U(64.W)
	}

	if(Settings.get("DiffTestCSR")){
		val csr = Wire(Vec(4, UInt(64.W)))
		csr := VecInit(Seq.fill(4)(0.U))
		BoringUtils.addSink(csr, "CSR")
		io.csr.mstatus	:= csr(0)
		io.csr.mtvec	:= csr(1)
		io.csr.mepc		:= csr(2)
		io.csr.mcause	:= csr(3)
	} else {
		io.csr.mstatus	:= 0.U
		io.csr.mtvec	:= 0.U
		io.csr.mepc		:= 0.U
		io.csr.mcause	:= 0.U
	}
}