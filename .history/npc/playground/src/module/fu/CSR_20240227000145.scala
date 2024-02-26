package module.fu

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import top.Settings
import utils._
import java.rmi.server.UID

object CSRCtrl {
	def jmp  = "b000".U
	def wrt  = "b001".U
	def set  = "b010".U
	def clr  = "b011".U
	def wrti = "b101".U
	def seti = "b110".U
	def clri = "b111".U
}

trait HasCSRConst {
	// Supervisor Protection and Translation
	val Satp		= 0x180		// Supervisor Address Translation and Protection

	// Machine Trap Setup
	val Mstatus		= 0x300
	val Mtvec		= 0x305

	// Machine Trap Handing
	val Mepc		= 0x341
	val Mcause		= 0x342

	// Machine Counter Setup (not implemented)
	// Debug/Trace Register (shared with Debug Mode) (not implemented)
	// Debug Mode Register (not implemented)

	def privEcall	= 0x000.U
	def privEbreak	= 0x001.U
	def privMret	= 0x302.U
	def privSret	= 0x102.U
	def privUret	= 0x002.U

	def ModeM		= 0x3.U
	def ModeH		= 0x2.U
	def ModeS		= 0x1.U
	def ModeU		= 0x0.U

	def IRQ_UEIP	= 0
	def IRQ_SEIP	= 1
	def IRQ_MEIP	= 3

	def IRQ_UTIP	= 4
	def IRQ_STIP	= 5
	def IRQ_MTIP	= 7

	def IRQ_USIP	= 8
	def IRQ_SSIP	= 9
	def IRQ_MSIP	= 11

	val IntPriority = Seq(
		IRQ_MEIP, IRQ_MSIP, IRQ_MTIP,
		IRQ_SEIP, IRQ_SSIP, IRQ_STIP,
		IRQ_UEIP, IRQ_USIP, IRQ_UTIP
	)
}

trait HasExceptionNO {
	def instrAddrMisaligned	= 0
	def instrAccessFault	= 1
	def illegalInstr		= 2
	def breakPoint			= 3
	def loadAddrMisaligned	= 4
	def loadAccessFault		= 5
	def storeAddrMisaligned	= 6
	def storeAccessFault	= 7
	def ecallU				= 8
	def ecallS				= 9
	def ecallM				= 11
	def instrPageFault		= 12
	def loadPageFault		= 13
	def storePageFault		= 15

	val ExcPriority = Seq (
		breakPoint,
		instrPageFault,
		instrAccessFault,
		illegalInstr,
		instrAddrMisaligned,
		ecallU, ecallS, ecallM,
		storeAddrMisaligned,
		storeAccessFault,
		storePageFault,
		loadAddrMisaligned,
		loadAccessFault,
		loadPageFault
	)
}

class CSRIO extends FuCtrlIO {
	val cfIn = Flipped(new CtrlFlowIO)
	val redirect = new RedirectIO
	// for exception check
	val instrValid = Input(Bool())
	val isBackendException = Input(Bool())
	// for differential testing
	val intrNO = Output(UInt(XLEN.W))
//	val imemMMU = Flipped(new MMUIO)
//	val dmemMMU = Flipped(new MMUIO)
	val wenFix = Output(Bool())
}

class CSR (implicit val p: MarCoreConfig) extends MarCoreModule with HasCSRConst {
	val io = IO(new CSRIO)

	val (valid, srcA, srcB, ctrl) = (io.in.valid, io.in.bits.srcA, io.in.bits.srcB, io.in.bits.ctrl)
	def access(valid: Bool, srcA: UInt, srcB: UInt, ctrl: UInt): UInt = {
		this.valid := valid
		this.srcA := srcA
		this.srcB := srcB
		this.ctrl := ctrl
		io.out.bits
	}

	// CSR define
	class Priv extends Bundle {
		val m = Output(Bool())
		val h = Output(Bool())
		val s = Output(Bool())
		val u = Output(Bool())
	}

	val csrNotImplemented = RegInit(UInt(XLEN.W), 0.U)

	class MstatusStruct extends Bundle {
		val sd = Output(UInt(1.W))

		val pad1 = if (XLEN == 64) Output(UInt(27.W)) else null
		val sxl  = if (XLEN == 64) Output(UInt(2.W))  else null
		val uxl  = if (XLEN == 64) Output(UInt(2.W))  else null
		val pad0 = if (XLEN == 64) Output(UInt(9.W))  else null

		val tsr		= Output(UInt(1.W))
		val tw		= Output(UInt(1.W))
		val tvm		= Output(UInt(1.W))
		val mxr		= Output(UInt(1.W))
		val sum		= Output(UInt(1.W))
		val mprv	= Output(UInt(1.W))
		val xs		= Output(UInt(2.W))
		val fs		= Output(UInt(2.W))
		val mpp		= Output(UInt(2.W))
		val hpp		= Output(UInt(2.W))
		val spp		= Output(UInt(1.W))
		val pie		= new Priv
		val ie		= new Priv
	}

	class SatpStruct extends Bundle {
		val mode	= UInt(4.W)
		val asid	= UInt(16.W)
		val ppn		= UInt(44.W)
	}

	class Interrupt extends Bundle { val e = new Priv
		val t = new Priv
		val s = new Priv
	}

	// Machine-Level CSRs
	val mtvec	= RegInit(UInt(XLEN.W), 0.U)
	val mcause	= RegInit(UInt(XLEN.W), 0.U)
//	val mtval	= RegInit(UInt(XLEN.W), 0.U)
	val mepc	= RegInit(UInt(XLEN.W), 0.U)
	val mstatus	= RegInit(UInt(XLEN.W), "ha00001800".U)
	/* mstatus Value table */
	/* 
	| sd   |
	| pad1 |
	| sxl  | hardlinked to 10, use 00 to pass xv6 test
	| uxl  | hardlinked to 10
	| pad0 |
	| tsr  |
	| tw   |
	| tvm  |
	| mxr  |
	| sum  |
	| mprv |
	| xs   | 00 |
	| fs   | 00 |
	| mpp  | 00 |
	| hpp  | 00 |
	| spp  | 0 |
	| pie  | 0000 |
	| ie   | 0000 |
	*/
	val mstatusStruct = mstatus.asTypeOf(new MstatusStruct)
	def mstatusUpdateSideEffect(mstatus: UInt): UInt = {
		val mstatusOld = WireInit(mstatus.asTypeOf(new MstatusStruct))
		val mstatusNew = Cat(mstatusOld.fs === "b11".U, mstatus(XLEN-2, 0))
		mstatusNew
	}

	// Superviser-Level CSRs
	val satp = RegInit(UInt(XLEN.W), 0.U)

	if (Settings.get("HasDTLB")) {
		BoringUtils.addSource(satp, "CSRSATP")
	}

	// CSR Priviledge Mode
	val priviledgeMode = RegInit(UInt(2.W), ModeM)


	// CSR reg map
	val mapping = Map (
		// Supervisor Protection and Translation
		MaskedRegMap(Satp, satp),

		// Machine Trap Setup
		MaskedRegMap(Mstatus, mstatus, "hffffffffffffffff".U(64.W), mstatusUpdateSideEffect),
		MaskedRegMap(Mtvec, mtvec),

		// Machine Trap Handing
		MaskedRegMap(Mepc, mepc),
		MaskedRegMap(Mcause, mcause)
	)

	val addr = srcB(11, 0)
	val rdata = Wire(UInt(XLEN.W))
	val csri = ZeroExt(io.cfIn.instr(19, 15), XLEN) // unsigned imm for csri. [TODO]
	val wdata = LookupTree(ctrl, List(
		CSRCtrl.wrt	-> srcA,
		CSRCtrl.set	-> (rdata | srcA),
		CSRCtrl.clr	-> (rdata & ~srcA),
		CSRCtrl.wrti	-> csri, //TODO: csri --> srcB
		CSRCtrl.seti	-> (rdata | csri),
		CSRCtrl.clri	-> (rdata & ~csri)
	))

	// SATP wen check
	val satpLegalMode = (wdata.asTypeOf(new SatpStruct).mode === 0.U) || (wdata.asTypeOf(new SatpStruct).mode === 8.U)

	// General CSR wen check
	val wen = (valid && ctrl =/= CSRCtrl.jmp) && (addr =/= Satp.U || satpLegalMode) && !io.isBackendException
	val isIllegalMode = priviledgeMode < addr(9, 8)
	val justRead = (ctrl === CSRCtrl.set || ctrl === CSRCtrl.seti) && srcA === 0.U // csrrs and csrrsi are exceptions when their srcA is zero
	val isIllegalWrite = wen && (addr(11, 10) === "b11".U) && !justRead // Write a read-only CSR register
	val isIllegalAccess = isIllegalMode || isIllegalWrite

	MaskedRegMap.generate(mapping, addr, rdata, wen && !isIllegalAccess, wdata)
	val isIllegalAddr = MaskedRegMap.isIllegalAddr(mapping, addr)
	val resetSatp = addr === Satp.U && wen // write to satp will cause the pipeline be flushed
	io.out.bits := rdata

	// CSR inst decode
	val ret = Wire(Bool())
	val isEbreak = addr === privEbreak && ctrl === CSRCtrl.jmp && !io.isBackendException
	val isEcall = addr === privEcall && ctrl === CSRCtrl.jmp && !io.isBackendException
	val isMret = addr === privMret && ctrl === CSRCtrl.jmp && !io.isBackendException
	val isSret = addr === privSret && ctrl === CSRCtrl.jmp && !io.isBackendException
	val isUret = addr === privUret && ctrl === CSRCtrl.jmp && !io.isBackendException

	// Exception and Intr
	// interrupts
	val intrNO = IntPriority.foldRight(0.U)((i: Int, sum: UInt) => Mux(io.cfIn.intrVec(i), i.U, sum))
	val raiseIntr = io.cfIn.intrVec.asUInt.orR
    // exceptions
    val csrExpectionVec = Wire(Vec(16, Bool()))
	csrExpectionVec.map(_ := false.B)
	csrExpectionVec(breakPoint) := io.in.valid && isEbreak
    csrExpectionVec(ecallM) := priviledgeMode === ModeM && io.in.valid && isEcall
	csrExpectionVec(ecallS) := priviledgeMode === ModeS && io.in.valid && isEcall
	csrExpectionVec(ecallU) := priviledgeMode === ModeU && io.in.valid && isEcall
	csrExpectionVec(illegalInstr) := (isIllegalAddr || isIllegalAccess) && wen && !io.isBackendException // Trigger an illegal instr exception when unimplemented csr is being read/written or not having enough privilege
//	csrExpectionVec(loadPageFault) :=
	val iduExceptionVec = io.cfIn.exceptionVec
	val raiseExceptionVec = csrExpectionVec.asUInt | iduExceptionVec.asUInt
	val raiseException = raiseExceptionVec.orR
	val exceptionNO = ExcPriority.foldRight(0.U)((i: Int, sum: UInt) => Mux(raiseExceptionVec(i), i.U, sum))
	io.wenFix := raiseException

	val causeNO = (raiseIntr << (XLEN-1)) | Mux(raiseIntr, intrNO, exceptionNO)
	io.intrNO := Mux(raiseIntr, causeNO, 0.U)

	val raiseExceptionIntr = (raiseException || raiseIntr) && io.instrValid
	val retTarget = Wire(UInt(VAddrBits.W))
	val trapTarget = Wire(UInt(VAddrBits.W))
	io.redirect.valid := (valid && ctrl === CSRCtrl.jmp) || raiseExceptionIntr || resetSatp
	io.redirect.rtype := 0.U
	io.redirect.target := Mux(resetSatp, io.cfIn.pc + 4.U, Mux(raiseExceptionIntr, trapTarget, retTarget))

	// Branch control
	ret := isMret || isSret || isUret
//	trapTarget := Mux(delegS, stvec, mtvec)(VAddrBits-1, 0)
	trapTarget := mtvec(VAddrBits-1, 0)
	retTarget := DontCare

	when (valid && isMret) {
		val mstatusOld = WireInit(mstatus.asTypeOf(new MstatusStruct))
		val mstatusNew = WireInit(mstatus.asTypeOf(new MstatusStruct))
		mstatusNew.ie.m := mstatusOld.pie.m
		priviledgeMode := mstatusOld.mpp
		mstatusNew.pie.m := true.B
		mstatusNew.mpp := ModeU
		mstatus := mstatusNew.asUInt
//		lr := false.B
		retTarget := mepc(VAddrBits-1, 0)
	}

	when (raiseExceptionIntr) {
		val mstatusOld = WireInit(mstatus.asTypeOf(new MstatusStruct))
		val mstatusNew = WireInit(mstatus.asTypeOf(new MstatusStruct))

		mstatus := mstatusNew.asUInt
	}
	io.in.ready := true.B
	io.out.valid := valid

	if (!Settings.get("IsChiselTest")) {
		val Mstatus	= WireInit(0.U(XLEN.W))
		val Mtvec	= WireInit(0.U(XLEN.W))
		val Mepc	= WireInit(0.U(XLEN.W))
		val Mcause	= WireInit(0.U(XLEN.W))
//		val csr = Wire(Vec(4, UInt(XLEN.W)))
		Mstatus	:= mstatus
		Mtvec	:= mtvec
		Mepc	:= mepc
		Mcause	:= mcause
		BoringUtils.addSource(mstatus, "MSTATUS")
		BoringUtils.addSource(mtvec, "MTVEC")
		BoringUtils.addSource(mepc, "MEPC")
		BoringUtils.addSource(mcause, "MCAUSE")
//		BoringUtils.addSource(csr, "CSR", uniqueName = true)
	}
}