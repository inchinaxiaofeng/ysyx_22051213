package units

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import isa._
import module.fu._
import utils._

class Decoder(implicit val p: MarCoreConfig) extends MarCoreModule with HasInstrType {
	val io = IO(new Bundle {
		val in = Flipped(Decoupled(new CtrlFlowIO))
		val out = Decoupled(new DecodeIO)
		val isWFI = Output(Bool())
		val isBranch = Output(Bool())
	})

	val hasIntr = Wire(Bool()) // 中断信号
	val instr = io.in.bits.instr // 承接instr
	val decodeList = ListLookup(instr, Instructions.DecodeDefault, Instructions.DecodeTable)
	val instrType :: fuType :: fuCtrl :: Nil = 
		Instructions.DecodeDefault.zip(decodeList).map{ case (instr, dec) => Mux(
			hasIntr || io.in.bits.exceptionVec(instrPageFault) || io.out.bits.cf.exceptionVec(instrAccessFault),
			instr, dec
		)}
	val isRVC = if (HasCExtension) instr(1, 0) =/= "b11".U else false.B

	io.out.bits := DontCare

	io.out.bits.ctrl.fuType := fuType
	io.out.bits.ctrl.fuCtrl := fuCtrl

	val SrcTypeTable = List(
		InstrI	-> (SrcType.reg, SrcType.imm),
		InstrR	-> (SrcType.reg, SrcType.reg),
		InstrS	-> (SrcType.reg, SrcType.reg),
		InstrSA	-> (SrcType.reg, SrcType.reg),
		InstrB	-> (SrcType.reg, SrcType.reg),
		InstrU	-> (SrcType.pc,  SrcType.imm),
		InstrJ	-> (SrcType.pc,  SrcType.imm)
	)
	val srcAType = LookupTree(instrType, SrcTypeTable.map(p => (p._1, p._2._1)))
	val srcBType = LookupTree(instrType, SrcTypeTable.map(p => (p._1, p._2._2)))

	val (rs, rt, rd) = (instr(19, 15), instr(24, 20), instr(11, 7))
	val rs1		= instr(11, 7)
	val rs2		= instr(6, 2)

	val rfSrcA = rs // Mux(isRVC, rvc_srcA, rs)
	val rfSrcB = rt // Mux(isRVC, rvc_srcB, rt)
	val rfDest = rd // Mux(isRVC, rvc_dest, rd)
	// 向后传递，用于Forwarding
	io.out.bits.ctrl.rfSrcA	:= Mux(srcAType === SrcType.pc, 0.U, rfSrcA) 
	io.out.bits.ctrl.rfSrcB	:= Mux(srcBType === SrcType.reg, rfSrcB, 0.U)
	io.out.bits.ctrl.rfWen	:= isrfWen(instrType)
	io.out.bits.ctrl.rfDest := Mux(isrfWen(instrType), rfDest, 0.U) // 如果不需要写入，那么就使用0，以避免出现意外的Forwarding

	io.out.bits.data := DontCare // 避免优化
	val imm = LookupTree(instrType, List(
		InstrI	-> SignExt(instr(31, 20), XLEN),
		InstrS	-> SignExt(Cat(instr(31, 25), instr(11, 7)), XLEN),
		InstrSA	-> SignExt(Cat(instr(31, 25), instr(11, 7)), XLEN),
		InstrB	-> SignExt(Cat(instr(31), instr(7), instr(30, 25), instr(11, 8), 0.U(1.W)), XLEN),
		InstrU	-> SignExt(Cat(instr(31, 12), 0.U(12.W)), XLEN),
		InstrJ	-> SignExt(Cat(instr(31), instr(19, 12), instr(20), instr(30, 21), 0.U(1.W)), XLEN)
	))

	io.out.bits.data.imm := imm // Mux(isRVC, immrvc, imm)

	/* 
	当call时，RV依赖特定的寄存器依赖
	 */
	when (fuType === FuType.bru) {
		def isLink(reg: UInt) = (reg === 1.U || reg === 5.U)
		when (isLink(rfDest) && fuCtrl === ALUCtrl.jal) { io.out.bits.ctrl.fuCtrl := ALUCtrl.call }
		when (fuCtrl === ALUCtrl.jal) {
			when (isLink(rfSrcA)) { io.out.bits.ctrl.fuCtrl := ALUCtrl.ret } 
			when (isLink(rfDest)) { io.out.bits.ctrl.fuCtrl := ALUCtrl.call }
		}
	}
	// special for LUI
	io.out.bits.ctrl.srcAType := Mux(instr(6, 0) === "b0110111".U, SrcType.reg, srcAType)
	io.out.bits.ctrl.srcBType := srcBType

	val NoSpecList = Seq(
		FuType.csr
	)

	val BlockList = Seq(
		FuType.mou
	)

//	io.out.bits.ctrl.isMarCoreTrap := (instr(31, 0) === MarCoreTrap.TRAP) && io.in.valid // 自陷判定，后面有了
	io.out.bits.ctrl.noSpecExec := NoSpecList.map(j => io.out.bits.ctrl.fuType === j).reduce(_ || _) // 将列表中的每一个元素做比较，如果其中有任一个在列表中被找到，那么设置为true（reduce(_ || _)）
	io.out.bits.ctrl.isBlocked := (
		io.out.bits.ctrl.fuType === FuType.lsu && LSUCtrl.isAtom(io.out.bits.ctrl.fuCtrl) ||
		BlockList.map(j => io.out.bits.ctrl.fuType === j).reduce(_ || _)
	)

	// output signals
	io.out.valid := io.in.valid
	io.in.ready := !io.in.valid || io.out.fire && !hasIntr
	io.out.bits.cf <> io.in.bits

	val intrVec = WireInit(0.U(12.W)) // 中断的向量
	BoringUtils.addSink(intrVec, "intrVecIDU") // 向外打包一个信号
	io.out.bits.cf.intrVec.zip(intrVec.asBools).map{ case(x, y) => x := y } // asBools转化成bool序列
	hasIntr := intrVec.orR // 每一位或，即有一个为true，则为true

	// 我们不需要
	val vmEnable = WireInit(false.B)
	BoringUtils.addSink(vmEnable, "DTLBENABLE")

	io.out.bits.cf.exceptionVec.map(_ := false.B)
	io.out.bits.cf.exceptionVec(illegalInstr) := (instrType === InstrN && !hasIntr) && io.in.valid

	io.out.bits.ctrl.isMarCoreTrap := (instr === MarCoreTrap.TRAP) && io.in.valid
	io.isWFI := (instr === Priviledged.WFI) && io.in.valid // 冻结芯片
	io.isBranch := VecInit(RV32I_BRUInstr.table.map(i => i._2.tail(1) === fuCtrl).toIndexedSeq).asUInt.orR &&
		fuType === FuType.bru
}

class IDU(implicit val p: MarCoreConfig) extends MarCoreModule with HasInstrType {
	val io = IO(new Bundle {
		val in = Vec(2, Flipped(Decoupled(new CtrlFlowIO)))
		val out = Vec(2, Decoupled(new DecodeIO))
	})

	val decoder1 = Module(new Decoder)
	val decoder2 = Module(new Decoder)
	io.in(0) <> decoder1.io.in
	io.in(1) <> decoder2.io.in
	io.out(0) <> decoder1.io.out
	io.out(1) <> decoder2.io.out
	if (!EnableMultiIssue) {
		io.in(1).ready := false.B
		decoder2.io.in.valid := false.B
	}

	val checkpoint_id = RegInit(0.U(64.W))

	// debug runahead
	io.out(0).bits.cf.isBranch := decoder1.io.isBranch
	io.out(0).bits.cf.runahead_checkpoint_id := checkpoint_id
	
	if (!p.FPGAPlatform) {
		BoringUtils.addSource(WireInit(decoder1.io.isWFI | decoder2.io.isWFI), "isWFI")
	}
}