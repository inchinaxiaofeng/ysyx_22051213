// package module.fu
// 
// import chisel3._
// import chisel3.util._
// import chisel3.util.experimental.BoringUtils
// 
// import utils._
// 
// // memory order unit
// object MOUOpType {
// 	def fence		= "b00".U
// 	def fencei		= "b01".U
// 	def sfence_vma	= "b10".U
// }
// 
// class MOUIO extends FunctionUnitIO {
// 	val cfIn = Flipped(new CtrlFlowIO)
// 	val redirect = new RedirectIO
// }
// 
// class MOU extends MarCoreModule {
// 	val io = IO(new MOUIO)
// 
// 	val (valid, srcA, srcB, ctrl) = (io.in.valid, io.in.bits.srcA, io.in.bits.srcB, io.in.bits.ctrl)
// 	def access(valid: Bool, srcA: UInt, srcB: UInt, ctrl: UInt): UInt = {
// 		this.valid	:= valid
// 		this.srcA	:= srcA
// 		this.srcB	:= srcB
// 		this.ctrl	:= ctrl
// 		io.out.bits
// 	}
// 
// 	io.redirect.target := io.cfIn.pc + 4.U
// 	io.redirect.valid := valid
// 	io.redirect.rtype := 0.U
// 	val flushICache = valid && (ctrl === MOUOpType.fencei)
// 	BoringUtils.addSource(WireInit(flushICache), "MOUFlushICache")
// 	
// 	val flushTLB = valid && (ctrl === MOUOpType.sfence_vma)
// 	BoringUtils.addSource(WireInit(flushTLB), "MOUFlushTLB")
// 
// 	io.out.bits := 0.U
// 	io.in.ready := true.B
// 	io.out.valid := valid
// }
// 