package units

import chisel3._
import chisel3.util._

import utils._
import defs._
import module.fu._
import bus.axi4._

class EXU(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
	val io = IO(new Bundle {
		val in = Flipped(Decoupled(new DecodeIO))
		val out = Decoupled(new CommitIO)
		val flush = Input(Bool())
//		val dmem = new SimpleBusUC(addrBits = VAddrBits)
		val dmem = new AXI4Lite
		val forward = new ForwardIO
//		val memMMU = Flipped(new MemMMUIO)
		val csr = new RegsDiff(num = 4)
	})
	
	val srcA = io.in.bits.data.srcA(XLEN-1, 0)
	val srcB = io.in.bits.data.srcB(XLEN-1, 0)

	val (fuType, fuCtrl) = (io.in.bits.ctrl.fuType, io.in.bits.ctrl.fuCtrl)

	val fuValids = Wire(Vec(FuType.num, Bool()))
	(0 until FuType.num).map (i => fuValids(i) := (fuType === i.U) && io.in.valid && !io.flush)

	/* ALU, Done */
	val alu = Module(new ALU)
	val aluOut = alu.access(valid = fuValids(FuType.alu), srcA = srcA, srcB = srcB, ctrl = fuCtrl)
	alu.io.cfIn := io.in.bits.cf
	alu.io.offset := io.in.bits.data.imm
	alu.io.out.ready := true.B

	def isBru(ctrl: UInt) = ctrl(4)

	/* LSU */
	val lsu = Module(new UnpipelinedLSU)
//	val lsuTlbPF = WireInit(false.B)
	val lsuOut = lsu.access(valid = fuValids(FuType.lsu), srcA = srcA, srcB = io.in.bits.data.imm, ctrl = fuCtrl/*, dtlbPF = lsuTlbPF*/)
	lsu.io.wdata := srcB
	lsu.io.instr := io.in.bits.cf.instr
	io.out.bits.isMMIO := false.B //lsu.io.isMMIO || (AddressSpace.isMMIO(io.in.bits.cf.pc) && io.out.valid)
	io.dmem <> lsu.io.dmem
	lsu.io.out.ready := true.B

	/* MDU, Done */
	val mdu = Module(new MDU)
	val mduOut = mdu.access(valid = fuValids(FuType.mdu), srcA = srcA, srcB = srcB, ctrl = fuCtrl)
	mdu.io.out.ready := true.B

	/* CSR, Done*/
	val csr = Module(new CSR)
	val csrOut = csr.access(valid = fuValids(FuType.csr), srcA = srcA, srcB = srcB, ctrl = fuCtrl)
	csr.io.cfIn := io.in.bits.cf
	csr.io.cfIn.exceptionVec(loadAddrMisaligned) := lsu.io.ioLoadAddrMisaligned
	csr.io.cfIn.exceptionVec(storeAddrMisaligned) := lsu.io.ioStoreAddrMisaligned
	csr.io.instrValid := io.in.valid && !io.flush
	csr.io.isBackendException := false.B
	io.out.bits.intrNO := csr.io.intrNO
	csr.io.isBackendException := false.B
	csr.io.out.ready := true.B

//	csr.io.imemMMU <> io.memMMU.imem
//	csr.io.dmemMMU <> io.memMMU.dmem

	/* MOU did't need yet */

	io.out.bits.decode := DontCare
	(io.out.bits.decode.ctrl, io.in.bits.ctrl) match { case(o, i) => 
		o.rfWen := i.rfWen && (/*!lsuTlbPF && */!lsu.io.ioLoadAddrMisaligned && !lsu.io.ioStoreAddrMisaligned || !fuValids(FuType.lsu)) && !(csr.io.wenFix && fuValids(FuType.csr))
		o.rfDest := i.rfDest
		o.fuType := i.fuType
	}
	io.out.bits.decode.cf.pc := io.in.bits.cf.pc
	io.out.bits.decode.cf.instr := io.in.bits.cf.instr
	io.out.bits.decode.cf.runahead_checkpoint_id := io.in.bits.cf.runahead_checkpoint_id
	io.out.bits.decode.cf.isBranch := io.in.bits.cf.isBranch
	io.out.bits.decode.cf.redirect :=
		Mux(csr.io.redirect.valid, csr.io.redirect, alu.io.redirect)

	io.out.valid := io.in.valid && MuxLookup(fuType, true.B, List(
		FuType.lsu	-> lsu.io.out.valid,
		FuType.mdu	-> mdu.io.out.valid
	))

	io.out.bits.commits(FuType.alu) := aluOut
	io.out.bits.commits(FuType.lsu) := lsuOut
	io.out.bits.commits(FuType.csr) := csrOut
	io.out.bits.commits(FuType.mdu) := mduOut
	io.out.bits.commits(FuType.mou) := 0.U

	io.in.ready := !io.in.valid || io.out.fire

	io.forward.valid := io.in.valid
	io.forward.wb.rfWen := io.in.bits.ctrl.rfWen
	io.forward.wb.rfDest := io.in.bits.ctrl.rfDest
	io.forward.wb.rfData := Mux(alu.io.out.fire, aluOut, lsuOut)
	io.forward.fuType := io.in.bits.ctrl.fuType

	val isBru = ALUCtrl.isBru(fuCtrl)
	/* perfCntCondMlsuInstr */

//	if (!p.FPGAPlatform) {
//		val cycleCnt = WireInit(0.U(64.W))
//		val instrCnt = WireInit(0.U(64.W))
//		val marcoretrap = WireInit(io.in.bits.ctrl.isMarCoreTrap && io.in.valid)
//
//		BoringUtils.addSink(cycleCnt, "simCycleCnt")
//		BoringUtils.addSink(instrCnt, "simInstrCnt")
//		BoringUtils.addSource(marcoretrap, "marcoretrap")
//
//		val difftest = DifftestModule(new DiffTrapEvent)
//		difftest.coreid		:= 0.U
//		difftest.hasTrap	:= marcoretrap
//		difftest.code		:= io.in.bits.data.srcA
//		difftest.pc			:= io.in.bits.cf.pc
//		difftest.cycleCnt	:= cycleCnt
//		difftest.instrCnt	:= instrCnt
//		difftest.hasWFI		:= false.B
//	}
	io.csr <> csr.io.csr
}
