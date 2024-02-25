import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import defs._
import utest._
import module._
import module.fu._
import defs._
import units._
import top._
import bus.axi4._

/**
  * This is a trivial example of how to run this Specification
  * From within sbt use:
  * {{{
  * testOnly gcd.GcdDecoupledTester
  * }}}
  * From a terminal shell use:
  * {{{
  * sbt 'testOnly gcd.GcdDecoupledTester'
  * }}}
  */
object InstrDecodeSpec extends ChiselUtestTester {
	lazy val config = MarCoreConfig(FPGAPlatform = true)
	val tests = Tests {
//		test("FU TEST: ALU") {
//			testCircuit(new ALU()) {
//				dut =>
////					dut.io.cfIn.instr.poke("x00e6d663".U)
////					dut.io.offset.poke("x10000000".U)
////					dut.io.cfIn.pc.poke("x80000058".U)
////					dut.io.in.valid.poke(true.B)
////					dut.io.in.bits.srcA.poke("x0000000000000024".U)
////					dut.io.in.bits.srcB.poke("x0000000000000015".U)
////					dut.io.in.bits.ctrl.poke(ALUCtrl.bge) 
////					println(dut.io.out.peek())
////					println(dut.io.redirect.peek())
//					dut.io.in.valid.poke(true.B)
//					dut.io.in.bits.srcA.poke("x1".U)
//					dut.io.in.bits.srcB.poke("x2".U)
//					dut.io.in.bits.ctrl.poke(ALUCtrl.add)
//					println(dut.io.out.peek())
//			}
//		}
//
//		test("FU TEST: MDU") {
//			testCircuit(new MDU()) {
//				dut =>
//					dut.io.in.valid.poke(true.B)
//					dut.io.in.bits.srcA.poke("x9999999999999999".U)
//					dut.io.in.bits.srcB.poke("x0000000000000002".U)
//					dut.io.in.bits.ctrl.poke(MDUCtrl.rem)
//					println(dut.io.out.peek())
//			}
//		}
//
//		test("FU TEST: CSR") {
//			testCircuit(new CSR()(config)) {
//				dut =>
//					dut.io.cfIn.pc.poke("x8000000a".U)
//					dut.io.cfIn.pnpc.poke("x80000010".U)
//					dut.io.cfIn.isBranch.poke(false.B)
//					dut.io.cfIn.isRVC.poke(false.B)
//					dut.io.in.valid.poke(true.B)
//					dut.io.instrValid.poke(true.B)
//
//					dut.io.cfIn.instr.poke("x30031073".U) // csrw mstatus, t1
//					dut.io.in.bits.srcA.poke("x0000000A".U)
//					dut.io.in.bits.srcB.poke("x300".U)
//					dut.io.in.bits.ctrl.poke(CSRCtrl.wrt)
//					dut.clock.step(1) println("csrw mstatus, t1: ")
//					println("FuCtrl out:\t" + dut.io.out.peek())
//					println("intrNO:\t\t" + dut.io.intrNO.peek())
//					println("wenFix:\t\t" + dut.io.wenFix.peek())
//					println("redirect:\t" + dut.io.redirect.peek())
//
//					dut.io.cfIn.instr.poke("x30002373".U) // csrr t1,mstatus
//					dut.io.in.bits.srcA.poke("x0".U) dut.io.in.bits.srcB.poke("x300".U) dut.io.in.bits.ctrl.poke(CSRCtrl.wrt) dut.clock.step(1)
//					println("csrr t1, mstatus: ")
//					println("FuCtrl out:\t" + dut.io.out.peek())
//					println("intrNO:\t\t" + dut.io.intrNO.peek())
//					println("wenFix:\t\t" + dut.io.wenFix.peek())
//					println("redirect:\t" + dut.io.redirect.peek())
//			}
//		}
//
//		test("FU TEST: UnpipelinedLSU") {
//			testCircuit(new UnpipelinedLSU()) {
//				dut =>
//					dut.io.wdata.poke("x000000ff".U)
//					dut.io.instr.poke("x00113423".U)
//					dut.io.in.valid.poke(true.B)
//					dut.io.in.bits.srcA.poke("x5".U)
//					dut.io.in.bits.srcB.poke("x6".U)
//					dut.io.in.bits.ctrl.poke(LSUCtrl.sd)
//					println(dut.io.dmem.req.bits.peek())
//			}
//		}
//
//		test("UNITS TEST: IDU") {
//			testCircuit(new IDU()(config)) {
//				dut =>
//					dut.io.in(0).valid.poke(true.B)
//					dut.io.in(0).bits.instr.poke("x00000413".U) // li s0,0
//					dut.io.in(0).bits.pc.poke("x80000000".U)
//					dut.io.out(0).valid.expect(true.B)
//					dut.io.out(0).bits.ctrl.fuCtrl.expect(ALUCtrl.add)
//					println(dut.io.out(0).bits.ctrl.peek())
//			}
//		}
//
//		test("UNITS TEST: WBU") {
//			testCircuit(new WBU()(config)) {
//				dut =>
//			}
//		}
//
//		test("UNITS TEST: EXU") {
//			testCircuit(new EXU()(config)) {
//				dut =>
//					dut.io.in.valid.poke(true.B)
//					dut.io.in.bits.cf.instr.poke("x5cc58593".U)
//					dut.io.in.bits.data.srcA.poke("x9".U)
//					dut.io.in.bits.data.srcB.poke("x5".U)
//					dut.io.in.bits.data.imm.poke("x0".U)
//					dut.io.in.bits.ctrl.fuType.poke(FuType.alu)
//					dut.io.in.bits.ctrl.fuCtrl.poke(ALUCtrl.add)
//					dut.io.in.bits.ctrl.rfWen.poke(true.B)
//					dut.io.in.bits.ctrl.rfDest.poke("x1".U)
//					println(dut.io.out.bits.commits.peek())
//			}
//		}
//
//		test("Frontend_embedded") {
//			testCircuit(new Frontend_embedded()(config)) {
//				dut =>
//					dut.io.imem.resp.valid.poke(true.B)
//					dut.io.imem.resp.bits.cmd.poke(SimpleBusCmd.readBurst)
//					dut.io.redirect.valid.poke(false.B)
//					dut.io.imem.resp.bits.rdata.poke("x00000413".U) // li s0, 0
//					dut.clock.step(1)
//					dut.io.out(0).valid.expect(true.B)
//					dut.io.out(0).bits.ctrl.fuCtrl.expect(ALUCtrl.add)
//					println(dut.io.out(0).bits.ctrl.peek())
//			}
//		}
//
//		test("Backend_inorder") {
//			testCircuit(new Backend_inorder()(config)) {
//				dut =>
//					dut.io.in(0).valid.poke(true.B)
//					dut.io.in(0).bits.data.imm.poke("x4".U)
//					dut.io.in(0).bits.ctrl.srcAType.poke(SrcType.reg)
//					dut.io.in(0).bits.ctrl.srcBType.poke(SrcType.imm)
//					dut.io.in(0).bits.ctrl.fuType.poke(FuType.alu)
//					dut.io.in(0).bits.ctrl.fuCtrl.poke(ALUCtrl.add)
//					dut.io.in(0).bits.ctrl.rfSrcA.poke("x0".U)
//					dut.io.in(0).bits.ctrl.rfDest.poke("x1".U)
//					dut.io.in(0).bits.ctrl.rfWen.poke(true.B)
//					dut.io.in(0).bits.cf.pc.poke("x80000000".U)
//					dut.clock.step(3)
//			}
//		}

		test("Core") { testCircuit(new Core()(config)) { dut =>
//			dut.clock.step()
//			dut.io.imem.r.valid.poke(true.B)
//			dut.io.imem.ar.ready.poke(true.B)
//			dut.io.imem.r.bits.resp.poke(AXI4Parameters.RESP_OKAY)
//
//			val pc = dut.io.imem.ar.bits.addr
//			val pcValid = dut.io.imem.ar.valid
//			println("PC:"+pc.peek())
//			val instr = pc match {
//				case UInt(x80000000L) => "x00000413".U
//				case UInt(x80000004L) => "x0046a117".U
//				case UInt(x80000008L) => "xffc10113".U
//				case UInt(x8000000cL) => "x24c010ef".U
//				case _ => "x00000000"
//			}
//			val instr = MuxLookup(pc, 0.U, Seq(
//				"x80000000".U -> "x00000413".U,
//				"x80000004".U -> "x0046a117".U,
//				"x80000008".U -> "xffc10113".U,
//				"x8000000c".U -> "x24c010ef".U
//			))
//			dut.io.imem.r.bits.data.poke(instr)
//			dut.clock.step()
//
//			when(instr === 0.U && pcValid === true.B) {
//				dut.clock.step(5)
//				dut.io.imem.r.valid.poke(false.B)
//				dut.io.imem.ar.ready.poke(false.B)
//			}
		}}

//		test("SimTop") { 
//			testCircuit(new SimTop) { 
//				dut =>
//			}
//		}
	}
}