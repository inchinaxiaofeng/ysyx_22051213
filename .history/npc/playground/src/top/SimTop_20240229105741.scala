package top

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import bus.axi4.{AXI4, AXI4Lite, AXI4Lite_Arbiter}
import module._
import defs._
import top.Settings

class SimTopIO extends Bundle {
	val commit = Output(Bool())
	val gpr = new RegsDiffIO(num = 32)
	val csr = new RegsDiffIO(num = 4)
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
		for (i <- 0 until 32) io.gpr.regs(i) := core.io.gpr.regs(i)
	} else {
		for (i <- 0 until 32) io.gpr.regs(i) := 0.U(64.W)
	}

	if(Settings.get("DiffTestCSR")){
		for (i <- 0 until 4) io.csr.regs(i) := core.io.csr.regs(i)
	} else {
		for (i <- 0 until 4) io.csr.regs(i) := 0.U(64.W)
	}

	core.io.difftest_commit.ready = true.B

	io.commit := core.io.difftest_commit.valid
	io.pc := core.io.difftest_commit.bits.decode.cf.pc
}