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
	if (Settings.get("DiffTestGPR")) { val gpr = Output(GPRState()) }
}

class SimTop extends Module {
	lazy val config = MarCoreConfig(FPGAPlatform = false)
	val core = Module(new Core()(config))
	val arbiter = Module(new AXI4Lite_Arbiter())
	val TP_SRAM = Module(new TP_SRAM())

	core.io.imem <> arbiter.InstFetch
	core.io.dmem <> arbiter.LoadStore

	arbiter.Arbiter <> TP_SRAM.io
}