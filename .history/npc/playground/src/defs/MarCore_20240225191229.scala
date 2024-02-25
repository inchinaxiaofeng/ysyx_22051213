package defs

import chisel3._
import chisel3.experimental.IO
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import top.Settings
import module.fu._
import module.ooo.HasBackendConst

trait HasMonotonousLog {
	val blackFG		= ""
	val redFG		= ""
	val greenFG		= ""
	val yellowFG	= ""
	val blueFG		= ""
	val magentaFG	= ""
	val cyanFG		= ""
	val whiteFG		= ""

	val blackBG		= ""
	val redBG		= ""
	val greenBG		= ""
	val yellowBG	= ""
	val blueBG		= ""
	val magentaBG	= ""
	val cyanBG		= ""
	val whiteBG		= ""

	val resetColor	= "" // reset all set
	val bold		= ""
	val italic		= ""
	val underline	= ""
	val blink		= ""
	val reverse		= ""

}

trait HasColorfulLog {
	val blackFG		= "\u001b[30m"
	val redFG		= "\u001b[31m"
	val greenFG		= "\u001b[32m"
	val yellowFG	= "\u001b[33m"
	val blueFG		= "\u001b[34m"
	val magentaFG	= "\u001b[35m"
	val cyanFG		= "\u001b[36m"
	val whiteFG		= "\u001b[37m"

	val blackBG		= "\u001b[40m"
	val redBG		= "\u001b[41m"
	val greenBG		= "\u001b[42m"
	val yellowBG	= "\u001b[43m"
	val blueBG		= "\u001b[44m"
	val magentaBG	= "\u001b[45m"
	val cyanBG		= "\u001b[46m"
	val whiteBG		= "\u001b[47m"

	val resetColor	= "\u001b[0m" // reset all set
	val bold		= "\u001b[1m"
	val italic		= "\u001b[3m"
	val underline	= "\u001b[4m"
	val blink		= "\u001b[5m"
	val reverse		= "\u001b[7m"
}

trait HasMarCoreParameter {
	// General parameter for MarCore
	val ZEROREG		= 0
	val NR_GPR		= 32
	val NR_CSR		= 4096
	val RegIDWidth	= 5
	val CSRIDWidth	= 12
	val BYTELEN		= 8
//**********************************************
	val XLEN = if (Settings.get("IsRV32")) 32 else 64
	val HasMExtension = true
	val HasCExtension = Settings.get("EnableRVC")
	val HasDiv = true
	val VAddrBits	= 64 // if (Settings.get("IsRV32")) 32 else 39 // VAddrBits is Virtual Memory addr bits
	val PAddrBits	= 32 // PAddrBits is Physical Memory address bits
	val AddrBits	= 64
	val DataBits	= XLEN
	val EnableMultiIssue = Settings.get("EnableMultiIssue")
	val EnableOutOfOrderExec = Settings.get("EnableOutOfOrderExec")
}

// NEW
trait HasMarCoreConst extends HasMarCoreParameter {
	val ICacheUserBundleWidth = VAddrBits*2 + 9
	val IndependentBru = if (Settings.get("EnableOutOfOrderExec")) true else false
}

abstract class MarCoreModule extends Module with HasMarCoreParameter with HasMarCoreConst with HasExceptionNO with HasRISCInstrParameter with HasBackendConst if(Settings.get("IsElaborating")) with HasMonotonousLog else with HasColorfulLog
abstract class MarCoreBundle extends Bundle with HasMarCoreParameter with HasMarCoreConst with HasExceptionNO with HasRISCInstrParameter with HasBackendConst with HasColorfulLog with __HasFU

case class MarCoreConfig (
	FPGAPlatform: Boolean = true,
	EnableDebug: Boolean = Settings.get("EnableDebug"),
	EnhancedLog: Boolean = true
)

trait __HasFU {
	def FUOpTypeBits = 5
	def FUTypeBits = 2
}

trait HasCtrlParameter {
}

trait HasRISCInstrParameter {
	val InstrBits = 32

	val OpcodeBits = 7

	val DoubleBits  = 64
	val WordBits    = 32
	val HalfBits    = 16
	val ByteBits    = 8

	val CSRHi = 31
	val CSRLo = 20

	val RS1Hi = 19
	val RS1Lo = 15
	val RS2Hi = 24
	val RS2Lo = 20
	val RDHi = 11
	val RDLo = 7
}

object ForwardE {
	def WIDTH = 2

	def RDE = "b00".U
	def ALUM = "b01".U
	def RDW = "b10".U}

object ForwardD {
	def WIDTH = 2

	def RDD = "b00".U
	def ALUM = "b01".U
	def RDW = "b10".U}

// object ALUCtrl {
// 	def WIDTH = 6
// 
// 	def ADD     = "b000000".U
// 	def SUB     = "b000001".U
// 	def SLL     = "b000010".U
// 	def SLT     = "b000011".U
// 	def SLTU    = "b000100".U
// 	def XOR     = "b000101".U
// 	def SRL     = "b000110".U
// 	def SRA     = "b000111".U
// 	def OR      = "b001000".U
// 	def AND     = "b001001".U
// 	def NAND	= "b100001".U
// 
// 	def ADDW    = "b001010".U
// 	def SUBW    = "b001011".U
// 	def SLLW    = "b001100".U
// 	def SLTW    = "b001101".U
// 	def SLTUW   = "b001110".U
// 	def XORW    = "b001111".U
// 	def SRLW    = "b010000".U
// 	def SRAW    = "b010001".U
// 	def ORW     = "b010010".U
// 	def ANDW    = "b010011".U
// 
// 	def MUL     = "b010100".U
// 	def MULH    = "b010101".U
// 	def MULHSU  = "b010110".U
// 	def MULHU   = "b010111".U
// 	def DIV     = "b011000".U
// 	def DIVU    = "b011001".U
// 	def REM     = "b011010".U
// 	def REMU    = "b011011".U
// 
// 	def MULW    = "b011100".U
// 	def DIVW    = "b011101".U
// 	def DIVUW   = "b011110".U
// 	def REMW    = "b011111".U
// 	def REMUW   = "b100000".U
// 
// 	def NOCARE = "b000000".U}

object MemRW {
	def WIDTH = 2

	def NONE = "b00".U
	def READ = "b01".U
	def WRITE = "b10".U

	def NOCARE = "b00".U}

object MemWidth {
	def WIDTH = 3

	def BYTE = "b000".U
	def HALF = "b001".U
	def WORD = "b010".U
	def DOUBLE = "b011".U
	def BYTEU = "b100".U
	def HALFU = "b101".U
	def WORDU = "b110".U

	def NOCARE = "b000".U}

object ByteMask {
	def NONE	= "b00000000".U
	def BYTE	= "b00000001".U
	def HALF	= "b00000011".U
	def WORD	= "b00001111".U
	def DOUBLE	= "b11111111".U
}

object BranchCtrl {
	def WIDTH = 4

	def BEQ     = "b0000".U
	def BNE     = "b0001".U
	def BLT     = "b0100".U
	def BGE     = "b0101".U
	def BLTU    = "b0110".U
	def BGEU    = "b0111".U
	def JAL   = "b1000".U

	def NOCARE = "b0000".U}

object ALUSrcA {
	def WIDTH = 2

	def REG	= "b00".U
	def PC	= "b01".U
	def P0	= "b10".U
	def CSR	= "b11".U

	def NOCARE = "b00".U}

object ALUSrcB {
	def WIDTH = 3

	def REG	= "b000".U
	def IMM	= "b001".U
	def P0	= "b010".U
	def P4	= "b011".U
	def PB	= "b100".U
	def CSR	= "b101".U

	def NOCARE = "b000".U}

object RegWrite {
	def F = "b0".U
	def T = "b1".U

	def NOCARE = "b0".U}

object CSRWrite {
	def F = "b0".U
	def T = "b1".U

	def NOCARE = "b0".U}

object MemtoReg {
	def F = "b0".U
	def T = "b1".U

	def NOCARE = "b0".U}

object Branch {
	def F = "b0".U
	def T = "b1".U

	def NOCARE = "b0".U}

object Jump {
	def WIDTH = 2

	def NONE	= "b00".U
	def JUMP	= "b01".U
	def MEPC   	= "b10".U

	def NOCARE = "b0".U}

object PCPlusSrc {
	def WIDTH = 1
	def PC = "b0".U
	def REG = "b1".U

	def NOCARE = "b0".U}

object NPCSrc {
	def WIDTH = 2

	def PCP4 = "b00".U
	def JUMP = "b01".U
	def MEPC = "b10".U}
