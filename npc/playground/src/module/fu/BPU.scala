package module.fu

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import utils._
import top.Settings
import defs._

// 表示地址的数据结构，并定义了一些方法辅助操作和获取地址字段的值。
class TableAddr(val idxBits: Int) extends MarCoreBundle {
	// 填充字段位宽
	val padLen = if (Settings.get("IsRV32") || !Settings.get("EnableOutOfOrderExec")) 2 else 3
	// 标签字段位宽
	def tagBits = VAddrBits - padLen - idxBits

	val tag = UInt(tagBits.W)	// 标签
	val idx = UInt(idxBits.W)	// 索引
	val pad = UInt(padLen.W)	// 填充

	def fromUInt(x: UInt) = x.asTypeOf(UInt(VAddrBits.W)).asTypeOf(this)
	def getTag(x: UInt) = fromUInt(x).tag
	def getIdx(x: UInt) = fromUInt(x).idx
}

object BTBtype {
	def B = "b00".U // branch
	def J = "b01".U // jump
	def I = "b10".U // indirect
	def R = "b11".U // return

	def apply() = UInt(2.W)
}

class BPUUpdateReq extends MarCoreBundle {
	val valid = Output(Bool())
	val pc = Output(UInt(VAddrBits.W))
	val isMissPredict = Output(Bool())
	val actualTarget = Output(UInt(VAddrBits.W))
	val actualTaken = Output(Bool())
	val fuCtrl = Output(FuCtrl())
	val btbType = Output(BTBtype())
	val isRVC = Output(Bool()) // for ras, save PC+2 to stack if is RVC
}

class BPU_embedded extends MarCoreModule {
	val io = IO(new Bundle {
		val in = new Bundle { val pc = Flipped(Valid(UInt(VAddrBits.W))) }
		val out = new RedirectIO
		val flush = Input(Bool())
	})

//	val flush = BoolStopWatch(io.flush, io.in.pc.valid, startHighPriority = true)
//
//	// BTB
//	val NRbtb = 512
//	val btbAddr = new TableAddr(log2Up(NRbtb))
//	def btbEntry() = new Bundle {
//		val tag = UInt(btbAddr.tagBits.W)
//		val _type = UInt(2.W)
//		val target = UInt(VAddrBits.W)
//	}
//
////	val btb = Module(new SRAM)
//
//	// PHT
//	val pht = Mem(NRbtb, UInt(2.W))
//	val phtTaken = RegEnable(pht.read(btbAddr.getIdx(io.in.pc.bits))(1), io.in.pc.valid)
//
//	// RAS
//	val NRras = 16
//	val ras = Mem(NRras, UInt(VAddrBits.W))
//	val sp = Counter(NRras)
//	val rasTarget = RegEnable(ras.read(sp.value), io.in.pc.valid)
//
//	// update
//	val req = WireInit(0.U.asTypeOf(new BPUUpdateReq))
//	val btbWrite = WireInit(0.U.asTypeOf(btbEntry()))

	io.out.target := io.in.pc.bits + 4.U
	io.out.valid := false.B
	io.out.rtype := 0.U
}