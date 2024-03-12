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
	val dmem = new AXI4Lite
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
		io.out.bits
	}
	val lsExecUnit = Module(new LSExecUnit)
	lsExecUnit.io.instr := DontCare

	// 暂时不需要任何关于原子操作的代码
	val storeReq	= valid & LSUCtrl.isStore(ctrl)
	val loadReq		= valid & LSUCtrl.isLoad(ctrl)

	val funct3 = io.instr(14, 12)

	// LSU control FSM state
	val s_idle :: s_exec :: s_load :: Nil = Enum(3)

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
	when (io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned) {
		state := s_idle
		io.out.valid := true.B
		io.in.ready := true.B
	}

	Debug(io.out.fire, "[LSU-AGU] state %x inv %x inr %x\n",
		state, io.in.valid, io.in.ready)

	// Controled by FSM
	io.in.ready := lsExecUnit.io.in.ready
	lsExecUnit.io.wdata := io.wdata
	io.out.valid := lsExecUnit.io.out.valid

	io.dmem <> lsExecUnit.io.dmem
	io.out.bits := lsExecUnit.io.out.bits

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

	val sl_idle :: sl_wait_resp :: sl_partialLoad :: Nil = Enum(3)
	val ss_idle :: ss_wait_resp :: Nil = Enum(2)
	val state_load = RegInit(sl_idle)
	val state_store = RegInit(ss_idle)

	switch (state_load) {
		is (sl_idle) {
			when (dmem.ar.fire && !isStore) {
				state_load := sl_wait_resp
			}
		}

		is (sl_wait_resp) {
			when (dmem.r.fire) {
// 暂时不添加partialLoad
				state_load := Mux(partialLoad, sl_partialLoad, sl_idle)
			}
		}

		is (sl_partialLoad) { state_load := sl_idle }
	}

	switch (state_store) {
		is (ss_idle) {
			when (dmem.aw.fire && dmem.w.fire && isStore) {
				state_store := ss_wait_resp
			}
		}

		is (ss_wait_resp) {
			when (dmem.b.fire) { state_store := ss_idle }
		}
	}
// Fixme: FSM Load 卡在了 1号状态
	Info("[State] statels (%x,%x)" +
		" arv %x arr %x bv %b br %b\n",
		state_load, state_store, dmem.ar.valid, dmem.ar.ready,
		dmem.b.valid, dmem.b.ready)

	Debug(dmem.aw.ready&&dmem.w.ready || dmem.ar.ready&&dmem.r.ready,
		"[LSU] addr %x, size %x, wdata_raw %x, isStore %x\n",
		addr, ctrl(1, 0), io.wdata, isStore)
	Debug(dmem.aw.ready&&dmem.w.ready || dmem.ar.ready&&dmem.r.ready,
		"[LSU] statels (%x,%x) Raddr %x Waddr %x rFire %x bFire %d Rdata %x\n",
		state_load, state_store, dmem.ar.bits.addr, dmem.aw.bits.addr,
		dmem.r.fire, dmem.b.fire, dmem.r.bits.data)

	val size = ctrl(1, 0)
	val reqAddr  = if (XLEN == 32) SignExt(addr, VAddrBits)   else addr(VAddrBits-1, 0)
	val reqWdata = if (XLEN == 32) genWdata32(io.wdata, size) else genWdata(io.wdata, size)
	val reqWmask = if (XLEN == 32) genWmask32(addr, size)     else genWmask(addr, size)
	val wValid = valid && (state_store === ss_idle) && isStore && !io.ioLoadAddrMisaligned && !io.ioStoreAddrMisaligned
	val rValid = valid && (state_load === sl_idle) && !isStore && !io.ioLoadAddrMisaligned && !io.ioStoreAddrMisaligned

	dmem.aw.bits.apply(addr = reqAddr); dmem.aw.valid := wValid;
	dmem.w.bits.apply(data = reqWdata, strb = reqWmask); dmem.w.valid := wValid;
	dmem.b.ready := state_store === ss_wait_resp
	dmem.ar.bits.apply(addr = reqAddr); dmem.ar.valid := rValid
	dmem.r.ready := state_load === sl_wait_resp
// Fixme 发生了跳转到 PartialLoad 后，状态机不能正确执行
	io.out.valid := Mux(
		io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned,
		true.B, Mux(partialLoad,
			state_load === sl_partialLoad,
			(dmem.r.fire || dmem.b.fire) &&
			(state_load === sl_wait_resp || state_store === ss_wait_resp)
		)
	)
	io.in.ready := state_load === sl_idle && state_store === ss_idle

	Debug(io.out.fire, 
		"[LSU-EXECUNIT] statels (%x,%x) rResp %x wResp %x lm %x sm %x\n", 
		state_load, state_store, dmem.r.fire, dmem.b.fire,
		io.ioLoadAddrMisaligned, io.ioStoreAddrMisaligned)

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

	io.ioLoadAddrMisaligned  := valid && !isStore && !addrAligned
	io.ioStoreAddrMisaligned := valid && isStore && !addrAligned

	Debug(io.ioLoadAddrMisaligned || io.ioStoreAddrMisaligned,
		"[EXCEPTION] misaligned addr detected\n")

//	BoringUtils.addSource(WireInit(dmem.isRead && dmem.req.fire), "perfCntCondMloadInstr")
//	BoringUtils.addSource(BoolStopWatch(dmem.isRead, dmem.resp.fire), "perfCntCondMloadStall")
//	BoringUtils.addSource(BoolStopWatch(dmem.isWrite, dmem.resp.fire), "perfCntCondMstoreStall")
//	BoringUtils.addSource(io.isMMIO, "perfCntCondMmmioInstr")
}