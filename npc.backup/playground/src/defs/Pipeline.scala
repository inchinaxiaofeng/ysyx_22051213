package defs

import chisel3._
import chisel3.util._

import defs._

class IF_ID_IO extends MarCoreBundle {
	val instr = new Instr()
	val pc = new PC()
}

class ID_EX_IO extends MarCoreBundle {
	val pc = new PC()
	val instrRegID = new InstrRegID()
	val instrRegImm = new InstrRegImm()
	val regData = new RegData()
	val ctrl2EXU = new Ctrl2EXU()
	val ctrl2WBU = new Ctrl2WBU()
	val ctrl2LSU = new Ctrl2LSU()

	val csrID	= Output(UInt(CSRIDWidth.W))
	val csrData	= Output(UInt(XLEN.W))

	// For Difftest
	val instr = new Instr() // Pipeline Trace
}

class EX_LS_IO extends MarCoreBundle {
	val aluOut	= Output(UInt(XLEN.W))
	val writeData = Output(UInt(XLEN.W))
	val rd		= Output(UInt(RegIDWidth.W))
	val csrID	= Output(UInt(CSRIDWidth.W))
	val ctrl2WBU = new Ctrl2WBU()
	val ctrl2LSU = new Ctrl2LSU()

	// For Difftest
	val commit = new PC()
	val instr = new Instr() // Pipeline Trace
}

class LS_WB_IO extends MarCoreBundle {
	val readData = Output(UInt(XLEN.W))
	val exOut = Output(UInt(XLEN.W))
	val rd		= Output(UInt(RegIDWidth.W))
	val csrID 	= Output(UInt(CSRIDWidth.W))
	val ctrl2WBU = new Ctrl2WBU()

	// Difftest
	val commit = new PC()
	val instr = new Instr() // Pipeline Trace
}