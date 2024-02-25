// package units
// 
// import chisel3._
// import chisel3.util._
// 
// import axi.axi4_lite._
// import defs._
// 
// class iLoadStoreInternal extends MarCoreBundle {
// 	// ON-PIPELINE VALUES
// 	val Pipeline_EX2LS_MsgBundle = Flipped(new EX_LS_IO())
// 	val Pipeline_LS2WB_MsgBundle = new LS_WB_IO()
// 	val hu_lsu = Flipped(new HU_LSU())
// 	val oForwardData = Output(UInt(XLEN.W))
// 	val oFeedBackStall = Output(Bool())
// }
// 
// class iLoadStoreExternal
// extends MarCoreBundle {
// 	val Read = new Arbiter_IO()
// 	val AW  = new AXI4_LiteAW(32)
// 	val W	= new AXI4_LiteW(64)
// 	val B	= new AXI4_LiteB()
// }
// 
// class LSU extends MarCoreModule {
// 	val ioInternal = IO(new iLoadStoreInternal)
// 	val ioExternal = IO(new iLoadStoreExternal)
// 
// 	// external
// 	// read
// 	val Rresp	= ioExternal.Read.R.s2mRresp
// 	val Rdata	= ioExternal.Read.R.s2mRdata
// 	val Rvalid	= ioExternal.Read.R.s2mRvalid
// 	val ARready	= ioExternal.Read.AR.s2mARready
// 	// write
// 	val Bresp	= ioExternal.B.s2mBresp
// 	val Bvalid	= ioExternal.B.s2mBvalid
// 	val AWready	= ioExternal.AW.s2mAWready
// 	val Wready	= ioExternal.W.s2mWready
// 
// 	val addr		= ioInternal.Pipeline_EX2LS_MsgBundle.aluOut
// 	val writeData	= ioInternal.Pipeline_EX2LS_MsgBundle.writeData
// 	val width		= ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2LSU.memWidth
// 	val rw			= ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2LSU.memRW
// 	val strb = MuxLookup (
// 		width,
// 		ByteMask.NONE,
// 		Seq (
// 			MemWidth.BYTE	-> ByteMask.BYTE,
// 			MemWidth.HALF	-> ByteMask.HALF,
// 			MemWidth.WORD	-> ByteMask.WORD,
// 			MemWidth.DOUBLE	-> ByteMask.DOUBLE,
// 			MemWidth.BYTEU	-> ByteMask.BYTE,
// 			MemWidth.HALFU	-> ByteMask.HALF,
// 			MemWidth.WORDU	-> ByteMask.WORD
// 		)
// 	)
// 
// 	ioExternal.Read.AR.m2sARvalid := Mux(rw === MemRW.READ, true.B, false.B)
// 	ioExternal.W.m2sWvalid := Mux(rw === MemRW.WRITE, true.B, false.B)
// 	ioExternal.AW.m2sAWvalid := Mux(rw === MemRW.WRITE, true.B, false.B)
// 
// 	// Just Push The data and addr to SRAM
// 	// write
// 	ioExternal.AW.m2sAWaddr := addr(31, 0)
// 	ioExternal.W.m2sWstrb := strb
// 	ioExternal.W.m2sWdata := writeData
// 	ioExternal.B.m2sBready := Bvalid
// 	// read
// 	ioExternal.Read.AR.m2sARaddr := addr(31, 0)
// 	ioExternal.Read.R.m2sRready := Rvalid
// 
// 	// If FeedBackStall is true, then all the Pipeline Core should stall!
// 	val FeedBackStall = Mux(
// 		Bresp === false.B && Bvalid === true.B,
// 		true.B, false.B
// 	)
// 	ioInternal.oFeedBackStall := FeedBackStall
// 
// 	ioInternal.Pipeline_LS2WB_MsgBundle.readData := Rdata
// 	ioInternal.Pipeline_LS2WB_MsgBundle.ctrl2WBU :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2WBU
// 	ioInternal.Pipeline_LS2WB_MsgBundle.rd :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.rd
// 	ioInternal.Pipeline_LS2WB_MsgBundle.csrID :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.csrID
// 	ioInternal.Pipeline_LS2WB_MsgBundle.exOut :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.aluOut
// 	ioInternal.hu_lsu.memtoReg :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2WBU.memtoReg
// 	ioInternal.hu_lsu.regWrite :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2WBU.regWrite
// 	ioInternal.hu_lsu.csrWrite :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.ctrl2WBU.csrWrite
// 	ioInternal.hu_lsu.rd :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.rd
// 	ioInternal.hu_lsu.csrID :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.csrID
// 	ioInternal.oForwardData :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.aluOut
// 
// 	// For Difftest
// 	ioInternal.Pipeline_LS2WB_MsgBundle.commit :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.commit
// 	ioInternal.Pipeline_LS2WB_MsgBundle.instr :=
// 		ioInternal.Pipeline_EX2LS_MsgBundle.instr
// }