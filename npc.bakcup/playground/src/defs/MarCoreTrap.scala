package defs

import chisel3._
import chisel3.util._

import defs._
import module.fu.ALUCtrl

object MarCoreTrap extends HasInstrType {
	def StateGoodTrap	= 0.U
	def StateBadTrap	= 1.U
	def StateInvOpcode	= 2.U
	def StateRunning	= 3.U

	def TRAP = BitPat("b????????????_?????_000_?????_1101011")
	val table = Array(TRAP -> List(InstrI, FuType.alu, ALUCtrl.add))
}