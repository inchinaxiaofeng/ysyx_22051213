import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import defs._
import utest._
import module._
import module.fu._
import defs._
import units._
import top._

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
  val tests = Tests {
//    test("InstrDecode") {
//      testCircuit(new InstrDecode()) {
//        dut =>
//            dut.io.instrIO.instrIn.instr.poke("xffc1_0113".U)
            // dut.clock.step(1)
//            dut.io.instrIO.instrRegID.rd.expect("b00001".U)
//            dut.io.instrIO.instrRegImm.imm.expect("xFFFF_FFFF_FFFF_FFFC".U)
            // dut.io.instrIO.instrRegID.rs1.expect("")
            // dut.io.instrIO.instrRegID.rs2.expect("")
            // dut.io.instrIO.instrRegImm.imm.expect("")
            // dut.io.ctrlFlowIO.ctrl2EXU.aluSrcA.expect("")

//      }
//    }
//    test("ALU") {
//      testCircuit(new ALU()) {
//        dut =>
//          dut.io.ctrl.poke(ALUCtrl.ADD)
//          dut.io.srcA.poke("x0000_0000_8000_9000".U)
//          dut.io.srcB.poke("xFFFF_FFFF_FFFF_FFF0".U)
//          dut.io.outC.expect("x80008ff0".U)
//      }
//    }
//    test("EXU") {
//      testCircuit(new EXU()) {
//        dut => 
//          dut.io.id_ex_IO.instrRegImm.imm.poke("xFFFF_FFFF_FFFF_FFF0".U)
//          dut.io.id_ex_IO.regData.rd1.poke("x0000_0000_8000_9000".U)
//          dut.io.id_ex_IO.regData.rd2.poke("x2".U)
//          dut.io.id_ex_IO.instrRegID.rs1.poke("x2".U)
//          dut.io.id_ex_IO.instrRegID.rd.poke("x2".U)
//          dut.io.id_ex_IO.ctrl2EXU.aluCtrl.poke(ALUCtrl.ADD)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcB.poke(ALUSrcB.IMM)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcA.poke(ALUSrcA.REG)
//          dut.io.hu_exu.forwardCtrl.forwardA.poke(ForwardE.RDE)
//          dut.io.hu_exu.forwardCtrl.forwardB.poke(ForwardE.RDE)
//          // println(dut.io.ex_ls_IO.aluOut.asUInt)
//          dut.io.ex_ls_IO.aluOut.expect("x0000_0000_8000_8ff0".U)
//          dut.io.id_ex_IO.ctrl2EXU.aluCtrl.poke(ALUCtrl.ADD)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcB.poke(ALUSrcB.REG)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcA.poke(ALUSrcA.REG)
//          dut.io.ex_ls_IO.aluOut.expect("x3".U)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcB.poke(ALUSrcB.P4)
//          dut.io.id_ex_IO.ctrl2EXU.aluSrcA.poke(ALUSrcA.P0)
//          dut.io.ex_ls_IO.aluOut.expect("x4".U)
//      }
//    }
    test("ALU") {
      testCircuit(new ALU()) {
        dut => 
          dut.io.srcA.poke("x0000000000000000".U)
          dut.io.srcB.poke("x0000000000000001".U)
          dut.io.ctrl.poke(ALUCtrl.SLTU)
          println(dut.io.outC.peek())
      }
    }

    test("IDU") {
      testCircuit(new IDU()) {
        dut =>
          dut.io.if_id_IO.instr.instr.poke("xfccf6ee3".U)
          println("ALUCtrl: " + dut.io.id_ex_IO.ctrl2EXU.aluCtrl.peek())          
          println("PCSrc:" + dut.io.pcSrc.peek())
          println("NPC:" + dut.io.npc.peek())
          println("BruSrcA: " + dut.io.bruSrcA.peek())
          println("BruSrcB: " + dut.io.bruSrcB.peek())
          println("BruOutC: " + dut.io.bruOutC.peek())
          println("Instr_Branch " + dut.io.instr_branch.peek())
          println("Instr_PCPlusSrc " + dut.io.instr_pcPlusSrc.peek())
      }
    }

    test("BRU") {
      testCircuit(new BRU()) {
        dut =>
          dut.io.srcA.poke("xf".U)
          dut.io.srcB.poke("xffffffff8046a000".U)
          dut.io.ctrl.poke(BranchCtrl.BLTU)
          println("OutC: " + dut.io.outC.peek())
      }
    }

    test("Tester") {
      testCircuit(new Tester()) {
        dut =>
          dut.io.srcA.poke("xf".U)
          dut.io.srcB.poke("xffffffff8046a000".U)
          dut.io.ctrl.poke(BranchCtrl.BLTU)
//          println("srcA: " + dut.io.srcA.asSInt.peek())
          println("OutC: " + dut.io.outC.peek())
      }
    }
//
//    test("TopMain") {
//      testCircuit(new TopMain()) {
//        dut =>
//          dut.io.iFetch_iInstr.instr.poke("b00000000000100000000000010010011".U) // addi x[1] = 0 + 1 
//          dut.io.iFetch_iInstr.instr.poke("b00000000000100000000000100100011".U) // sb 
//          dut.io.iLoadStore_oWriteData.expect("x1".U)
//          
//      }
//    }
  }
}
