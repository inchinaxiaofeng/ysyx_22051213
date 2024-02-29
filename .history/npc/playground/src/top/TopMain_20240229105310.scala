package top

import chisel3._
import circt.stage._
import chisel3.util._

import defs._
import units._
import utils._
import bus.axi4._

class Core(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
	class MarCoreIO extends Bundle {
//		val imem = new SimpleBusUC(userBits = ICacheUserBundleWidth, addrBits = VAddrBits)
//		val dmem = new SimpleBusUC(addrBits = VAddrBits)
//		val mmio = new SimpleBusUC
//		val frontend = Flipped(new SimpleBusUC)
		val imem = new AXI4Lite
		val dmem = new AXI4Lite
		val gpr = new RegsDiffIO(num = 32)
		val csr = new RegsDiffIO(num = 4)
		val difftest_commit = Decoupled(new CommitIO)
	}
	val io = IO(new MarCoreIO)

	// Frontend
	val frontend = (Settings.get("IsRV32"), Settings.get("EnableOutOfOrderExec")) match {
//		case (true, _)		=> Module(new Frontend_embedded)
		case (false, _)		=> Module(new Frontend_embedded)
	}
	frontend.io.imem <> io.imem

	// Backend
	if (EnableOutOfOrderExec) {
		// TODO
	} else {
		val backend = Module(new Backend_inorder)
		backend.io.dmem <> io.dmem

		PipelineVector2Connect(new DecodeIO, frontend.io.out(0), frontend.io.out(1), backend.io.in(0), backend.io.in(1), frontend.io.flushVec(1), 1)

		frontend.io.ipf := false.B // Fixme maybe

		// redirect
		frontend.io.redirect <> backend.io.redirect
		backend.io.flush := frontend.io.flushVec(3, 2)
		Debug("flush = %b, 0: frontend:(%d,%d), backend:(%d,%d); " +
			"1: frontend:(%d,%d), backend:(%d,%d)\n",
			frontend.io.flushVec.asUInt,
			frontend.io.out(0).valid, frontend.io.out(0).ready,
			backend.io.in(0).valid, backend.io.in(0).ready,
			frontend.io.out(1).valid, frontend.io.out(1).ready,
			backend.io.in(1).valid, backend.io.in(1).ready)

		io.gpr <> backend.io.gpr
		io.csr <> backend.io.csr
		io.commit := backend.io.commit
		Info("Commit %b\n", backend.io.commit)
	}
}

// class TopMain extends MarCoreModule {
// 	val gpr = IO(new GPRIO())
// 	val csrDebug = IO(new CSRDEBUG())
// 	val debug = IO(new DebugIO())
// 	val pipelineTrace = IO(new PipelineTrace())
// 	val jumpTrace = IO(new JumpTrace())
// 
// 	val _HU = Module(new HazardUnit())
// 	val _IFU = Module(new IFU())
// 	val _IDU = Module(new IDU())
// 	val _EXU = Module(new EXU())
// 	val _LSU = Module(new LSU())
// 	val _WBU = Module(new WBU())
// 	val _IF_ID = Module(new IF_ID())
// 	val _ID_EX = Module(new ID_EX())
// 	val _EX_LS = Module(new EX_LS())
// 	val _LS_WB = Module(new LS_WB())
// 
// 	val _Arbiter = Module(new AXI4_LiteArbiter())
// 	val _TP_SRAM = Module(new TP_SRAM())
// 
// 	/*
// 	完成其餘數據通路的設計，並完成PC模塊的鏈接
// 	後，先鏈接Pipeline模塊Input，然後鏈接Units模塊Input。
// 	*/
// 	// Data Path
// 	val rPC = RegInit("h80000000".U(XLEN.W))
// 	val rNPC = RegInit("h80000000".U(XLEN.W))
// 	val rNPCValid = RegInit(false.B)
// 
// 	val feedBackPCChangeF = _IFU.ioInternal.oFeedBackPCChange
// 	val pcPlus4F = _IFU.ioInternal.oPCPlus4
// 	val pcSrcD = _IDU.io.pcSrc
// 	val jumpNPCD = _IDU.io.npc.pc
// 	val mepcD	= _IDU.io.mepc
// 
// 	val npcData = MuxLookup (
// 		pcSrcD,
// 		pcPlus4F,
// 		Seq (
// 			NPCSrc.PCP4 -> pcPlus4F,
// 			NPCSrc.JUMP -> jumpNPCD,
// 			NPCSrc.MEPC -> mepcD
// 		)
// 	)
// 
// 	val npc = Mux(rNPCValid === true.B, rNPC, npcData)
// 	rNPC := Mux(rNPCValid === true.B, rNPC, npcData)
// 	rPC := Mux(!_HU.io.stallF && feedBackPCChangeF, npc, rPC)
// 	// Valid Judge
// 	when(pcSrcD =/= NPCSrc.PCP4 && feedBackPCChangeF === false.B){
// 		rNPCValid := true.B
// 	}.elsewhen(feedBackPCChangeF === true.B && rNPCValid === true.B){
// 		rNPCValid := false.B
// 	}.otherwise{}
// 
// 	// Pipeline Input
// 	_IF_ID.io.clr	:= _IDU.io.pcSrc
// 	_IF_ID.io.en	:= !_HU.io.stallD
// 	_IF_ID.io.in	<> _IFU.ioInternal.Pipeline_IF2ID_MsgBunlde
// 
// 	_ID_EX.io.clr	:= _HU.io.flushE
// 	_ID_EX.io.in	<> _IDU.io.id_ex_IO
// 
// 	_EX_LS.io.in	<> _EXU.io.ex_ls_IO
// 
// 	_LS_WB.io.in	<> _LSU.ioInternal.Pipeline_LS2WB_MsgBundle
// 
// 	// Unit Input
// 	_IFU.ioInternal.iPC	:= rPC
// 
// 	_IDU.io.if_id_IO     <> _IF_ID.io.out
// 	_IDU.io.hu_idu       <> _HU.io.hu_idu
// 	_IDU.io.forwardDataM := _LSU.ioInternal.oForwardData
// 	_IDU.io.wb           <> _WBU.io.wbIO
// 
// 	_EXU.io.id_ex_IO     <> _ID_EX.io.out
// 	_EXU.io.hu_exu       <> _HU.io.hu_exu
// 	_EXU.io.forwardDataM := _LSU.ioInternal.oForwardData
// 	_EXU.io.forwardDataW := _WBU.io.wbIO.data
// 
// 	_LSU.ioInternal.Pipeline_EX2LS_MsgBundle <> _EX_LS.io.out
// 	_LSU.ioInternal.hu_lsu <> _HU.io.hu_lsu
// 
// 	_WBU.io.ls_wb_IO <> _LS_WB.io.out
// 	_WBU.io.hu_wbu   <> _HU.io.hu_wbu
// 
// 	// SRAM
// 	_Arbiter.IFU	<> _IFU.ioExternal
// 	_Arbiter.LSU	<> _LSU.ioExternal.Read
// 	_TP_SRAM.io.AR	<> _Arbiter.Arbit.AR
// 	_TP_SRAM.io.R	<> _Arbiter.Arbit.R
// 	_TP_SRAM.io.AW	<> _LSU.ioExternal.AW
// 	_TP_SRAM.io.W	<> _LSU.ioExternal.W
// 	_TP_SRAM.io.B	<> _LSU.ioExternal.B
// 
// 	// Pipeline Trace
// 	val pc_rf       = RegNext(_WBU.io.commit)
// 	val instr_rf    = RegNext(_WBU.io.instr)
// 	val pcEnable_if_id	= RegNext(_IFU.ioInternal.oFeedBackPCChange)
// 	val pcEnable_id_ex	= RegNext(pcEnable_if_id)
// 	val pcEnable_ex_ls	= RegNext(pcEnable_id_ex)
// 	val pcEnable_ls_wb	= RegNext(pcEnable_ex_ls)
// 	val pcEnable_rf		= RegNext(pcEnable_ls_wb)
// 	pipelineTrace.if_id_pc    <> _IF_ID.io.out.pc
// 	pipelineTrace.if_id_instr <> _IF_ID.io.out.instr
// 	pipelineTrace.id_ex_pc    <> _ID_EX.io.out.pc
// 	pipelineTrace.id_ex_instr <> _ID_EX.io.out.instr
// 	pipelineTrace.ex_ls_pc    <> _EX_LS.io.out.commit
// 	pipelineTrace.ex_ls_instr <> _EX_LS.io.out.instr
// 	pipelineTrace.ls_wb_pc    <> _LS_WB.io.out.commit
// 	pipelineTrace.ls_wb_instr <> _LS_WB.io.out.instr
// 	pipelineTrace.rf_pc       <> pc_rf
// 	pipelineTrace.rf_instr    <> instr_rf
// 	pipelineTrace.if_id_pcEnable := pcEnable_if_id
// 	pipelineTrace.id_ex_pcEnable := pcEnable_id_ex
// 	pipelineTrace.ex_ls_pcEnable := pcEnable_ex_ls
// 	pipelineTrace.ls_wb_pcEnable := pcEnable_ls_wb
// 	pipelineTrace.rf_pcEnable    := pcEnable_rf
// 
// 	// Jump Trace
// 	jumpTrace.dynamic.pc        := npc
// 	jumpTrace.instr_jump        := _IDU.io.instr_jump
// 	jumpTrace.instr_branch      := _IDU.io.instr_branch
// 	jumpTrace.instr_pcPlusSrc   := _IDU.io.instr_pcPlusSrc
// 	jumpTrace.idu_pcSrc := _IDU.io.pcSrc
// 	jumpTrace.bruSrcA := _IDU.io.bruSrcA
// 	jumpTrace.bruSrcB := _IDU.io.bruSrcB
// 	jumpTrace.bruOutC := _IDU.io.bruOutC
// 	jumpTrace.bruCtrl := _IDU.io.bruCtrl
// 
// 	// Debug
// 	gpr <> _IDU.io.gpr
// 	csrDebug <> _IDU.io.csrDebug
// 
// 	_LS_WB.io.in.commit <> _EX_LS.io.out.commit
// 	_LS_WB.io.in.instr <> _EX_LS.io.out.instr
// 
// 	debug.instr <> _WBU.io.instr
// 	debug.commit <> _WBU.io.commit
// 	debug.dynamic.pc := npc
// 	debug.hazard <> _HU.io.hazardDebugIO
// 
// 	debug.probe.data := _EX_LS.io.out.aluOut
// 	debug.alu_data_E.data := _EXU.io.ex_ls_IO.aluOut
// 	debug.alu_data_W.data := _WBU.io.ls_wb_IO.exOut
// 	debug.forwardA.data := _HU.io.hu_exu.forwardCtrl.forwardA
// 	debug.forwardB.data := _HU.io.hu_exu.forwardCtrl.forwardB
// 	debug.forward_idu_A.data := _HU.io.hu_idu.forwardCtrl.forwardA
// 	debug.forward_idu_B.data := _HU.io.hu_idu.forwardCtrl.forwardB
// 	debug.alu_srcA <> _EXU.io.alu_srcA
// 	debug.alu_srcB <> _EXU.io.alu_srcB
// 	debug.rdD.data := _IDU.io.id_ex_IO.instrRegID.rd
// 	debug.rdE.data := _ID_EX.io.out.instrRegID.rd
// 	debug.rdM.data := _EX_LS.io.out.rd
// 	debug.rdW.data := _LS_WB.io.out.rd
// }