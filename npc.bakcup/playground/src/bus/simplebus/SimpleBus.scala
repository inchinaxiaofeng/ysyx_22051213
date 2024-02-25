package bus.simplebus

import chisel3._
import chisel3.util._

import defs._
import bus.axi4._
import utils._
import module.fu._

sealed abstract class SimpleBusBundle extends Bundle with HasMarCoreParameter

object SimpleBusCmd {
	// req
								// hit		| miss
	def read		= "b0000".U	// read		| refill
	def write		= "b0001".U	// write	| refill
	def readBurst	= "b0010".U	// read		| refill
	def writeBurst	= "b0011".U	// write	| refill
	def writeLast	= "b0111".U	// write	| refill
	def probe		= "b1000".U	// read		| do nothing
	def prefetch	= "b0100".U	// read		| refill

	// resp
	def readLast	= "b0110".U
	def writeResp	= "b0101".U
	def probeHit	= "b1100".U
	def probeMiss	= "b1000".U

	def apply() = UInt(4.W)
}

class SimpleBusReqBundle(val userBits: Int = 0, val addrBits: Int = 32, val idBits: Int = 0) extends SimpleBusBundle {
	val addr = Output(UInt(addrBits.W))
	val size = Output(UInt(3.W))
	val cmd = Output(SimpleBusCmd())
	val wmask = Output(UInt((DataBits / 8).W))
	val wdata = Output(UInt(DataBits.W))
	val user = if (userBits > 0) Some(Output(UInt(userBits.W))) else None
	val id = if (userBits > 0) Some(Output(UInt(idBits.W))) else None

	override def toPrintable: Printable = {
		p"addr = 0x${Hexadecimal(addr)}, cmd = ${cmd}, size = ${size}, " +
		p"wmask = 0x${Hexadecimal(wmask)}, wdata = 0x${Hexadecimal(wdata)}"
	}

	def apply(addr: UInt, cmd: UInt, size: UInt, wdata: UInt, wmask: UInt, user: UInt = 0.U, id: UInt = 0.U) = {
		this.addr	:= addr
		this.cmd	:= cmd
		this.size	:= size
		this.wdata	:= wdata
		this.wmask	:= wmask
		this.user.map(_ := user)
		this.id.map(_ := id)
	}

	def isRead() = !cmd(0) && !cmd(3)
	def isWrite() = cmd(0)
	def isBurst() = cmd(1)
	def isReadBurst() = cmd === SimpleBusCmd.readBurst
	def isWriteSingle() = cmd === SimpleBusCmd.write
	def isWriteLast() = cmd === SimpleBusCmd.writeLast
	def isProbe() = cmd === SimpleBusCmd.probe
	def isPrefetch() = cmd === SimpleBusCmd.prefetch
}

class SimpleBusRespBundle(val userBits: Int = 0, val idBits: Int = 0) extends SimpleBusBundle {
	val cmd = Output(SimpleBusCmd())
	val rdata = Output(UInt(64.W))
	val user = if (userBits > 0) Some(Output(UInt(userBits.W))) else None
	val id = if (idBits > 0) Some(Output(UInt(idBits.W))) else None

	override def toPrintable: Printable = p"rdata = ${Hexadecimal(rdata)}, cmd = ${cmd}"

	def isReadLast = cmd === SimpleBusCmd.readLast
	def isProbeHit = cmd === SimpleBusCmd.probeHit
	def isProbeMiss = cmd === SimpleBusCmd.probeMiss
	def isWriteResp = cmd === SimpleBusCmd.writeResp
	def isPrefetch = cmd === SimpleBusCmd.prefetch
}

// Uncache
class SimpleBusUC(val userBits: Int = 0, val addrBits: Int = 32, val idBits: Int = 0) extends SimpleBusBundle {
	val req = Decoupled(new SimpleBusReqBundle(userBits, addrBits, idBits))
	val resp = Flipped(Decoupled(new SimpleBusRespBundle(userBits, idBits)))

	def isWrite = req.valid && req.bits.isWrite()
	def isRead = req.valid && req.bits.isRead()
	def toAXI4Lite = SimpleBus2AXI4Converter(this, new AXI4Lite, false)
	def toAXI4(isFromCache: Boolean = false) = SimpleBus2AXI4Converter(this, new AXI4, isFromCache)
//	def toMemPort = Simp

	def dump(name: String) = {
		when (req.fire) { printf(p"${GTimer()},[${name}] ${req.bits}\n") }
		when (resp.fire) { printf(p"${GTimer()},[${name}] ${resp.bits}\n") }
	}
}