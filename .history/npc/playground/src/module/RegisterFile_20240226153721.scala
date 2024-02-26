package module

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import defs._
import top.Settings

trait HasRegFileParameter {
	val NRReg = 32
}

class RegFile extends HasRegFileParameter with HasMarCoreParameter {
	val rf = Mem(NRReg, UInt(XLEN.W))
	def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U, rf(addr))
	def write(addr: UInt, data: UInt) = { rf(addr) := data(XLEN-1, 0)}

//	if (!Settings.get("IsChiselTest")) {
		val gpr = Wire(Vec(NRReg, UInt(XLEN.W)))
		for (i <- 0 until NRReg) gpr(i) := rf(i)
		BoringUtils.addSource(gpr, "GPR")
//	}
}

class ScoreBoard extends HasRegFileParameter {
	val busy = RegInit(0.U(NRReg.W))
	def isBusy(idx: UInt): Bool = busy(idx)
	def mask(idx: UInt) = (1.U(NRReg.W) << idx)(NRReg-1, 0)
	def update(setMask: UInt, clearMask: UInt) = {
		// When clearMask(i) and setMask(i) are both set, setMask(i) wins.
		// This can correctly record the busy bit when reg(i) is written
		// and issued at the same cycle.
		// Note that rf(0) is always free.
		busy := Cat(((busy & ~clearMask) | setMask)(NRReg-1, 1), 0.U(1.W))
	}
}

//class RegisterFile extends Module with HasMarCoreParameter {
//	val io = IO(new RFIO())
//	val gpr = IO(new GPRIO())
//
//	val regs = Reg(Vec(NR_GPR, UInt(XLEN.W)))
//
//	when (io.wen && (io.instrRegID.rd =/= 0.U)) {
//		regs(io.instrRegID.rd)  := io.wdata
//	}
//
//	gpr.zero := regs(0);
//	gpr.ra   := regs(1);
//	gpr.sp   := regs(2);
//	gpr.gp   := regs(3);
//	gpr.tp   := regs(4);
//	gpr.t0   := regs(5);
//	gpr.t1   := regs(6);
//	gpr.t2   := regs(7);
//	gpr.s0   := regs(8);
//	gpr.s1   := regs(9);
//	gpr.a0   := regs(10);
//	gpr.a1   := regs(11);
//	gpr.a2   := regs(12);
//	gpr.a3   := regs(13);
//	gpr.a4   := regs(14);
//	gpr.a5   := regs(15);
//	gpr.a6   := regs(16);
//	gpr.a7   := regs(17);
//	gpr.s2   := regs(18);
//	gpr.s3   := regs(19);
//	gpr.s4   := regs(20);
//	gpr.s5   := regs(21);
//	gpr.s6   := regs(22);
//	gpr.s7   := regs(23);
//	gpr.s8   := regs(24);
//	gpr.s9   := regs(25);
//	gpr.s10  := regs(26);
//	gpr.s11  := regs(27);
//	gpr.t3   := regs(28);
//	gpr.t4   := regs(29);
//	gpr.t5   := regs(30);
//	gpr.t6   := regs(31);
//
//	io.regData.rd1 := Mux(io.instrRegID.rs1 === 0.U, 0.U, regs(io.instrRegID.rs1))
//	io.regData.rd2 := Mux(io.instrRegID.rs2 === 0.U, 0.U, regs(io.instrRegID.rs2))
//}