package module.fu

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import utils._
import bus.axi4._
import top.Settings

class UnpipeLSUIO extends FuCtrlIO {
	val wdata = Input(UInt(XLEN.W))
	val instr = Input(UInt(32.W)) // Atom insts need aq rl funct3 bit from instr
//	val dmem = new SimpleBusUC(addrBits = VAddrBits)
	val dmem = new AXI4Lite
//	val isMMIO = Output(Bool())
	val ioLoadAddrMisaligned = Output(Bool()) // TODO: refactor it for new backend
	val ioStoreAddrMisaligned = Output(Bool()) // TODO: refactor it for new backend
}

// 一个LSU的模块
class UnpipelinedLSU extends MarCoreModule with HasLSUConst {
	implicit val moduleName: String = this.name
	val io = IO(new UnpipeLSUIO)
	val (valid, srcA, srcB, ctrl) = (io.in.valid, io.in.bits.srcA, io.in.bits.srcB, io.in.bits.ctrl)
	def access(valid: Bool, srcA: UInt, srcB: UInt, ctrl: UInt/*, dtlbPF: Bool*/): UInt = {
		this.valid := valid
		this.srcA := srcA
		this.srcB := srcB
		this.ctrl := ctrl
		//dtlbPF := io.dtlbPF
		io.out.bits
	}
	val lsExecUnit = Module(new LSExecUnit)
	lsExecUnit.io.instr := DontCare
//	io.dtlbPF := lsExecUnit.io.dtlbPF

	// 暂时不需要任何关于原子操作的代码
	val storeReq	= valid & LSUCtrl.isStore(ctrl)
	val loadReq		= valid & LSUCtrl.isLoad(ctrl)
	if (Settings.get("HasDTLB")) {
//		BoringUtils.addSource(WireInit(amoReq), "ISAMO")
	}

	val funct3 = io.instr(14, 12)

	// LSU control FSM state
	val s_idle :: s_exec :: s_load /*:: s_lr :: s_sc :: s_amo_l :: s_amo_a :: s_amo_s*/ :: Nil = Enum(3)

	// LSU control FSM
	val state = RegInit(s_idle)

	val addr = if (IndependentAddrCalcState) {
		RegNext(srcA + srcB, state === s_idle)
	} else {
		DontCare
	}

	lsExecUnit.io.in.valid		:= false.B
	lsExecUnit.io.out.ready		:= DontCare
	lsExecUnit.io.in.bits.srcA	:= DontCare
	lsExecUnit.io.in.bits.srcB	:= DontCare
	lsExecUnit.io.in.bits.ctrl	:= DontCare
	lsExecUnit.io.wdata			:= DontCare
	io.out.valid				:= false.B
	io.in.ready					:= false.B

	switch (state) {
		is (s_idle) { // calculate address
			lsExecUnit.io.in.valid		:= false.B
			lsExecUnit.io.out.ready		:= DontCare
			lsExecUnit.io.in.bits.srcA	:= DontCare
			lsExecUnit.io.in.bits.srcB	:= DontCare
			lsExecUnit.io.in.bits.ctrl	:= DontCare
			lsExecUnit.io.wdata			:= DontCare
			io.in.ready					:= false.B// || scInvalid
			io.out.valid				:= false.B// || scInvalid
			when (valid) { state := s_exec }
			if (!IndependentAddrCalcState) {
				lsExecUnit.io.in.valid		:= io.in.valid // && !atomReq
				lsExecUnit.io.out.ready 	:= io.out.ready
				lsExecUnit.io.in.bits.srcA	:= srcA + srcB
				lsExecUnit.io.in.bits.srcB	:= DontCare
				lsExecUnit.io.in.bits.ctrl	:= ctrl
				lsExecUnit.io.wdata			:= io.wdata
				io.in.ready					:= lsExecUnit.io.out.fire// || scInvalid
				io.out.valid				:= lsExecUnit.io.out.valid// || scInvalid
				state						:= s_idle
			}
		}

		is (s_exec) {
			lsExecUnit.io.in.valid		:= true.B
			lsExecUnit.io.out.ready		:= io.out.ready
			lsExecUnit.io.in.bits.srcA	:= addr
			lsExecUnit.io.in.bits.srcB	:= DontCare
			lsExecUnit.io.in.bits.ctrl	:= ctrl
			lsExecUnit.io.wdata			:= io.wdata
			io.in.ready					:= lsExecUnit.io.out.fire
			io.out.valid				:= lsExecUnit.io.out.valid
			when (io.out.fire) { state := s_idle }
		}

		is (s_load) {
			lsExecUnit.io.in.valid		:= true.B
			lsExecUnit.io.out.ready		:= io.out.ready
			lsExecUnit.io.in.bits.srcA	:= srcA
			lsExecUnit.io.in.bits.srcB	:= srcB
			lsExecUnit.io.in.bits.ctrl	:= ctrl
			lsExecUnit.io.wdata			:= DontCare
			io.in.ready					:= lsExecUnit.io.out.fire
			io.out.valid				:= lsExecUnit.io.out.valid
			when (lsExecUnit.io.out.fire) { state := s_idle } // load finished
		}
	}
	when (/*dtlbPF || */io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned) {
		state := s_idle
		io.out.valid := true.B
		io.in.ready := true.B
	}

//	Debug(io.out.fire, "[LSU-AGU] state %x inv %x inr $x\n", state, io.in.valid, io.in.ready)
	// Controled by FSM
	io.in.ready := lsExecUnit.io.in.ready
	lsExecUnit.io.wdata := io.wdata
	io.out.valid := lsExecUnit.io.out.valid

	// Set LR/SC bits
//	setLr := io.out.fire && (lrReq || scReq)
//	setLrVal := lrReq
//	setLrAddr := srcA

	io.dmem <> lsExecUnit.io.dmem
	io.out.bits := /*Mux(scReq, scInvalid, Mux(state === s_amo_s, atomRegReg, */lsExecUnit.io.out.bits/*))*/

	val lsuMMIO = WireInit(false.B)
//	BoringUtils.addSink(lsuMMIO, "lsuMMIO")

	val mmioReg = RegInit(false.B)
	when (!mmioReg) { mmioReg := lsuMMIO }
	when (io.out.valid) { mmioReg := false.B }
//	io.isMMIO := mmioReg && io.out.valid

	io.ioLoadAddrMisaligned := lsExecUnit.io.ioLoadAddrMisaligned
	io.ioStoreAddrMisaligned := lsExecUnit.io.ioStoreAddrMisaligned
}
// 具体操作LS行为的模型
class LSExecUnit extends MarCoreModule {
	implicit val moduleName: String = this.name
	val io = IO(new UnpipeLSUIO)

	val (valid, addr, ctrl) = (io.in.valid, io.in.bits.srcA, io.in.bits.ctrl)
	def access(valid: Bool, addr: UInt, ctrl: UInt): UInt = {
		this.valid := valid
		this.addr := addr
		this.ctrl := ctrl
		io.out.bits		
	}

	def genWmask(addr: UInt, sizeEncode: UInt): UInt = {
		LookupTree(sizeEncode, List(
			"b00".U	-> 0x1.U, // 0000_0001 << addr(2:0)
			"b01".U	-> 0x3.U, // 0000_0011
			"b10".U	-> 0xf.U, // 0000_1111
			"b11".U	-> 0xff.U // 1111_1111
		)) << addr(2, 0)
	}
	
	def genWdata(data: UInt, sizeEncode: UInt): UInt = {
		LookupTree(sizeEncode, List(
			"b00".U	-> Fill(8, data(7, 0)),
			"b01".U	-> Fill(4, data(15, 0)),
			"b10".U	-> Fill(2, data(31, 0)),
			"b11".U	-> data
		))
	}

	def genWmask32(addr: UInt, sizeEncode: UInt): UInt = {
		LookupTree(sizeEncode, List(
			"b00".U	-> 0x1.U, // 0001 << addr(1:0)
			"b01".U	-> 0x3.U, // 0011
			"b10".U	-> 0xf.U  // 1111
		)) << addr(1, 0)
	}
	
	def genWdata32(data: UInt, sizeEncode: UInt): UInt = {
		LookupTree(sizeEncode, List(
			"b00".U	-> Fill(4, data(7, 0)),
			"b01".U	-> Fill(2, data(15, 0)),
			"b10".U	-> data
		))
	}

	val dmem = io.dmem
	val addrLatch = RegNext(addr)
	val isStore = valid && LSUCtrl.isStore(ctrl)
	val partialLoad = !isStore && (ctrl =/= LSUCtrl.ld)

// =========== new try ==================

	val s_idle :: s_exec_read :: s_wait_write :: s_exec_write :: Nil = Enum(3)
	val state = RegInit(s_idle)

	switch (state) {
		is (s_idle) {
			when(dmem.ar.valid & dmem.ar.ready)
		}
	}


// =========== end try ==================

	val s_idle :: s_wait_resp :: Nil = Enum(2)
	val state = RegInit(s_idle)

	switch (state) {
		is (s_idle) {
//			when (dmem.req.fire && dtlbEnable ) { state := s_wait_tlb  }
			when ((dmem.aw.ready&&dmem.w.ready) ||
				(dmem.ar.ready&&dmem.r.ready)) {
				state := s_wait_resp
			}
		}
		is (s_wait_resp) { 
			when (dmem.b.bits.resp === AXI4Parameters.RESP_OKAY ||
				dmem.r.bits.resp === AXI4Parameters.RESP_OKAY) {
				state := s_idle
			}
		}
	}

	Debug(dmem.aw.ready&&dmem.w.ready || dmem.ar.ready&&dmem.r.ready,
		"[LSU] addr %x, size %x, wdata_raw %x, isStore %x\n",
		addr, ctrl(1, 0), io.wdata, isStore)
	Debug(dmem.aw.ready&&dmem.w.ready || dmem.ar.ready&&dmem.r.ready,
		"[LSU] state %d addr %x Waddr %x rvalid r %d Rdata %x\n",
//		"[LSU] state %d addr %x dmemReqFire %d dmemRespFire %d dmemRdata %x\n",
		state, dmem.ar.bits.addr, dmem.aw.bits.addr, dmem.req.fire, dmem.resp.fire, dmem.r.bits.data)
//	Debug(dtlbFinish && dtlbEnable, "[LSU] dtlbFinish:%d dtlbEnable:%d dtlbPF:%d state:%d addr:%x dmemReqFire:%d dmemRespFire:%d dmemRdata:%x\n", dtlbFinish, dtlbEnable, dtlbPF, state, dmem.req.bits.addr, dmem.resp.fire, dmem.resp.bits.rdata)

	val size = ctrl(1, 0)
	val reqAddr  = if (XLEN == 32) SignExt(addr, VAddrBits)   else addr(VAddrBits-1, 0)
	val reqWdata = if (XLEN == 32) genWdata32(io.wdata, size) else genWdata(io.wdata, size)
	val reqWmask = if (XLEN == 32) genWmask32(addr, size)     else genWmask(addr, size)
	val wValid = valid && (state === s_idle) && isStore && !io.ioLoadAddrMisaligned && !io.ioStoreAddrMisaligned
	val rValid = valid && (state === s_idle) && !isStore && !io.ioLoadAddrMisaligned && !io.ioStoreAddrMisaligned

	dmem.aw.bits.apply(addr = reqAddr);	dmem.w.bits.apply(data = reqWdata, strb = reqWmask)
	dmem.aw.valid := wValid;			dmem.w.valid := wValid;
	dmem.b.ready := true.B
	dmem.ar.bits.apply(addr = reqAddr)
	dmem.ar.valid := rValid
	dmem.r.ready := true.B
	
	io.out.valid := Mux(
		/*dtlbPF && */state =/= s_idle || io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned,
		true.B, Mux(
			partialLoad,
			state === s_partialLoad,
			(dmem.r.fire || dmem.b.fire) && (state === s_wait_resp)
		)
	)
	io.in.ready := (state === s_idle)/* || dtlbPF*/

	Debug(io.out.fire, "[LSU-EXECUNIT] state %x rResp %x wResp %x lm %x sm %x\n", state, dmem.r.fire, dmem.b.fire, io.ioLoadAddrMisaligned, io.ioStoreAddrMisaligned)

	val rdata = dmem.r.bits.data
	val rdataLatch = RegNext(rdata)
	val rdataSel64 = LookupTree(addrLatch(2, 0), List(
		"b000".U	-> rdataLatch(63, 0),
		"b001".U	-> rdataLatch(63, 8),
		"b010".U	-> rdataLatch(63, 16),
		"b011".U	-> rdataLatch(63, 24),
		"b100".U	-> rdataLatch(63, 32),
		"b101".U	-> rdataLatch(63, 40),
		"b110".U	-> rdataLatch(63, 48),
		"b111".U	-> rdataLatch(63, 56)
	))
	val rdataSel32 = LookupTree(addrLatch(1, 0), List(
		"b00".U	-> rdataLatch(31, 0),
		"b01".U	-> rdataLatch(31, 8),
		"b10".U	-> rdataLatch(31, 16),
		"b11".U	-> rdataLatch(31, 24)
	))
	val rdataSel = if (XLEN == 32) rdataSel32 else rdataSel64
	val rdataPartialLoad = LookupTree(ctrl, List(
		LSUCtrl.lb	-> SignExt(rdataSel(7, 0) , XLEN),
		LSUCtrl.lh	-> SignExt(rdataSel(15, 0), XLEN),
		LSUCtrl.lw	-> SignExt(rdataSel(31, 0), XLEN),
		LSUCtrl.lbu	-> SignExt(rdataSel(7, 0) , XLEN),
		LSUCtrl.lhu	-> SignExt(rdataSel(15, 0), XLEN),
		LSUCtrl.lwu	-> SignExt(rdataSel(31, 0), XLEN)
	))
	val addrAligned = LookupTree(ctrl(1, 0), List(
		"b00".U	-> true.B,					// b
		"b01".U	-> (addr(0) === 0.U),		// h
		"b10".U	-> (addr(1, 0) === 0.U),	// w
		"b11".U	-> (addr(2, 0) === 0.U)		// d
	))
	
	io.out.bits := Mux(partialLoad, rdataPartialLoad, rdata(XLEN-1, 0))

//	io.isMMIO := DontCare

//	val isAMO = WireInit(false.B)
//	BoringUtils.addSink(isAMO, "ISAMO2")
//	BoringUtils.addSource(addr, "LSUADDR")

	io.ioLoadAddrMisaligned  := valid && !isStore /*&& !isAMO*/ && !addrAligned
	io.ioStoreAddrMisaligned := valid && (isStore/* || isAMO*/) && !addrAligned

	Debug(io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned, "[EXCEPTION] misaligned addr detected\n")

//	BoringUtils.addSource(WireInit(dmem.isRead && dmem.req.fire), "perfCntCondMloadInstr")
//	BoringUtils.addSource(BoolStopWatch(dmem.isRead, dmem.resp.fire), "perfCntCondMloadStall")
//	BoringUtils.addSource(BoolStopWatch(dmem.isWrite, dmem.resp.fire), "perfCntCondMstoreStall")
//	BoringUtils.addSource(io.isMMIO, "perfCntCondMmmioInstr")
}