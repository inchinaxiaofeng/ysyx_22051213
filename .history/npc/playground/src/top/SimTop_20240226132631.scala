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
	if(Settings.get("DiffTestGPR")){val gpr = Output(new GPRState)}
	if(Settings.get("DiffTestCSR")){val csr = O(new CSRState)}
	if(Settings.get("TraceLoadStore")){val load = Output(new LoadEvent)}
	if(Settings.get("TraceLoadStore")){val store = Output(new StoreEvent)}
	if(Settings.get("TraceInstrCommit")){val instr = Output(new InstrCommit(numPhyRegs = 32))}
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
}