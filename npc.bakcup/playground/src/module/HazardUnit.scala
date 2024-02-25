//package module
//
//import chisel3._
//import chisel3.util._
//
//import defs._
//
//class HazardUnit extends MarCoreModule {
//	val io = IO(new Bundle {
//		val stallF	= Output(Bool())
//		val stallD	= Output(Bool())
//		val flushE	= Output(Bool())
//		val hu_idu	= new HU_IDU()
//		val hu_exu	= new HU_EXU()
//		val hu_lsu	= new HU_LSU()
//		val hu_wbu	= new HU_WBU()
//		// Debug
//		val hazardDebugIO = new HazardDebugIO()
//	})
//
//	val rs1E = io.hu_exu.regID.rs1
//	val rs2E = io.hu_exu.regID.rs2
//	val rs1D = io.hu_idu.rs1
//	val rs2D = io.hu_idu.rs2
//	val rdE = io.hu_exu.regID.rd
//	val rdM = io.hu_lsu.rd
//	val rdW = io.hu_wbu.rd
//	val csrIDD = io.hu_idu.csrID
//	val csrIDE = io.hu_exu.csrID
//	val csrIDM = io.hu_lsu.csrID
//	val csrIDW = io.hu_wbu.csrID
//	val regWriteE = io.hu_exu.regWrite
//	val regWriteM = io.hu_lsu.regWrite
//	val regWriteW = io.hu_wbu.regWrite
//	val csrWriteE = io.hu_exu.csrWrite
//	val csrWriteM = io.hu_lsu.csrWrite
//	val csrWriteW = io.hu_wbu.csrWrite
//	val memtoRegE = io.hu_exu.memtoReg
//	val memtoRegM = io.hu_lsu.memtoReg
//	val branchD = io.hu_idu.branch
//	val jumpD = io.hu_idu.jump
//
//	// ALU's Forwarding source data
//	when (
//		(rs1E =/= ZEROREG.U) && 
//		(rs1E === rdM) && 
//		(regWriteM === RegWrite.T) &&
//		(memtoRegM === MemtoReg.F)
//	) {
//		io.hu_exu.forwardCtrl.forwardA := ForwardE.ALUM
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardA :=
//			io.hu_exu.forwardCtrl.forwardA
//	}.elsewhen (
//		(rs1E =/= ZEROREG.U) && 
//		(rs1E === rdW) && 
//		(regWriteW === RegWrite.T)
//	) {
//		io.hu_exu.forwardCtrl.forwardA := ForwardE.RDW
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardA :=
//			io.hu_exu.forwardCtrl.forwardA
//	}.otherwise {
//		io.hu_exu.forwardCtrl.forwardA := ForwardE.RDE
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardA :=
//			io.hu_exu.forwardCtrl.forwardA
//	}
//
//	when (
//		(rs2E =/= ZEROREG.U) && 
//		(rs2E === rdM) && 
//		(regWriteM === RegWrite.T) &&
//		(memtoRegM === MemtoReg.F)
//	) {
//		io.hu_exu.forwardCtrl.forwardB := ForwardE.ALUM
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardB := 
//			io.hu_exu.forwardCtrl.forwardB
//	}.elsewhen (
//		(rs2E =/= ZEROREG.U) && 
//		(rs2E === rdW) && 
//		(regWriteW === RegWrite.T)
//	) {
//		io.hu_exu.forwardCtrl.forwardB := ForwardE.RDW
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardB :=
//			io.hu_exu.forwardCtrl.forwardB
//	}.otherwise {
//		io.hu_exu.forwardCtrl.forwardB := ForwardE.RDE
//		//Debug
//		io.hazardDebugIO.hu_exu_ctrl.forwardB :=
//			io.hu_exu.forwardCtrl.forwardB
//	}
//
//	// Forward
//	when (
//		(rs1D =/= ZEROREG.U) && 
//		(rs1D === rdM) && 
//		(regWriteM === RegWrite.T) &&
//		(memtoRegM === MemtoReg.F)
//	) {
//		io.hu_idu.forwardCtrl.forwardA := ForwardD.ALUM
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardA := ForwardD.ALUM
//	}.elsewhen (
//		(rs1D =/= ZEROREG.U) &&
//		(rs1D === rdW) &&
//		(regWriteW === RegWrite.T)
//	) {
//		io.hu_idu.forwardCtrl.forwardA := ForwardD.RDW
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardA := ForwardD.RDW
//	}.otherwise {
//		io.hu_idu.forwardCtrl.forwardA := ForwardD.RDD
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardA := ForwardD.RDD
//	}
//
//	when (
//		(rs2D =/= ZEROREG.U) &&
//		(rs2D === rdM) &&
//		(regWriteM === RegWrite.T) &&
//		(memtoRegM === MemtoReg.F)
//	) {
//		io.hu_idu.forwardCtrl.forwardB := ForwardD.ALUM
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardB := ForwardD.ALUM
//	}.elsewhen (
//		(rs2D =/= ZEROREG.U) &&
//		(rs2D === rdW) &&
//		(regWriteW === RegWrite.T)
//	) {
//		io.hu_idu.forwardCtrl.forwardB := ForwardD.RDW
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardB := ForwardD.RDW
//	}.otherwise {
//		io.hu_idu.forwardCtrl.forwardB := ForwardD.RDD
//		//Debug
//		io.hazardDebugIO.hu_idu_ctrl.forwardB := ForwardD.RDD
//	}
//
//	// Branch control
//	// 可能可以節省一個空泡的空間
//	val branchstall = ( 
//		( // 當branch所需的rs1和rs2需等待ex級計算
//			(branchD === Branch.T) 
//			&& 
//			(regWriteE === RegWrite.T) 
//			&& 
//			((rdE === rs1D) || (rdE === rs2D))
//		)
//		||
//		( // 當branch所需的rs1和rs2需等待ls級讀取
//			(branchD === Branch.T) 
//			&& 
//			(memtoRegM === MemtoReg.T)
//			&& 
//			((rdM === rs1D) || (rdM === rs2D))
//		)
//		||
//		( // 當jalr所需的rs1需要等待ex級計算
//			(io.hu_idu.pcPlusSrc === PCPlusSrc.REG)
//			&&
//			(jumpD === true.B)
//			&&
//			(regWriteE === RegWrite.T)
//			&&
//			(rs1D === rdE)
//		)
//		||
//		( // 當jalr所需的rs1需等待ls級讀取
//			(io.hu_idu.pcPlusSrc === PCPlusSrc.REG)
//			&&
//			(jumpD === true.B)
//			&&
//			(memtoRegM === MemtoReg.T)
//			&&
//			(rs1D === rdM)
//		)
//	)
//
//	// Stall control
//	val lwstall = ((rs1D === rdE) || (rs2D === rdE)) && (memtoRegE === MemtoReg.T)
//	io.stallF := lwstall || branchstall
//	io.stallD := lwstall || branchstall
//	io.flushE := lwstall || branchstall
//
//	// Debug
//	io.hazardDebugIO.stallF := io.stallF
//	io.hazardDebugIO.stallD := io.stallD
//	io.hazardDebugIO.flushE := io.flushE
//}