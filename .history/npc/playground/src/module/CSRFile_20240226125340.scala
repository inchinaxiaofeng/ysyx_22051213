//package module
//
//import chisel3._
//import chisel3.util._
//import chisel3.util.experimental.BoringUtils
//
//import defs._
//import java.rmi.server.UID
//
//class CSRFile extends Module with HasMarCoreParameter {
//	val io	= IO(new CSRIO())
//	val csrDebug	= IO(new CSRDEBUG())
//
//	val mstatus = Reg(UInt(XLEN.W)); def MSTATUS_ID = "h300".U
//	val mtvec	= Reg(UInt(XLEN.W)); def MTVEC_ID	= "h305".U
//	val mepc	= Reg(UInt(XLEN.W)); def MEPC_ID	= "h341".U
//	val mcause	= Reg(UInt(XLEN.W)); def MCAUSE_ID	= "h342".U
//
////	val csrs = Reg(Vec(NR_CSR, UInt(XLEN.W)))
//
//	when(io.ecall) {
//		mstatus := io.imstatus
//	}.elsewhen (io.wen) {
//		when(io.csrDst === MSTATUS_ID) {
//			mstatus := io.wdata
//		}.elsewhen(io.csrDst === MTVEC_ID) {
//			mtvec := io.wdata
//		}.elsewhen(io.csrDst === MEPC_ID) {
//			mepc := io.wdata
//		}.elsewhen(io.csrDst === MCAUSE_ID) {
//			mcause := io.wdata
//		}
////		csrs(io.csrDst)	:= io.wdata
//	}
//
////	io.csrData := csrs(io.csrSrc)
//	io.mepc := mepc
//	io.mstatus := mstatus
//	io.csrData := MuxLookup(
//		io.csrSrc,
//		0.U,
//		Seq (
//			MSTATUS_ID	-> mstatus,
//			MTVEC_ID	-> mtvec,
//			MEPC_ID		-> mepc,
//			MCAUSE_ID	-> mcause
//		)
//	)
//
//	csrDebug.mstatus	:= mstatus
//	csrDebug.mtvec		:= mtvec
//	csrDebug.mepc		:= mepc
//	csrDebug.mcause		:= mcause
//
//	val csr = Wire(Vec(4, UInt(XLEN.W)))
//	csr(0)	:= mstatus
//	csr(1)	:= mtvec
//	csr(2)	:= mepc
//	csr(3)	:= mcause
//	BoringUtils.addSource(csr, "CSR")
//}