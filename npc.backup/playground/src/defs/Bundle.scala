package defs

import chisel3._
import chisel3.util._

import axi.axi4_lite._
import defs._

// ArbiterIO: Same name with chisel3.util.ArbiterIO
class Arbiter_IO extends MarCoreBundle {
    val AR  = new AXI4_LiteAR(32)
	val R   = new AXI4_LiteR(64)
}

class SRAMIO extends MarCoreBundle {
    val AR  = Flipped(new AXI4_LiteAR(32))
	val R   = Flipped(new AXI4_LiteR(64))
	val AW  = Flipped(new AXI4_LiteAW(32))
	val W	= Flipped(new AXI4_LiteW(64))
	val B	= Flipped(new AXI4_LiteB())
}

class CtrlFlowIO extends MarCoreBundle {
    val ctrl2EXU = new Ctrl2EXU()
    val ctrl2WBU = new Ctrl2WBU()
    val ctrl2LSU = new Ctrl2LSU()
    val ctrl2IDU = new Ctrl2IDU()
}

class InstrIO extends MarCoreBundle {
    val instrIn		= Flipped(new Instr())
    val instrRegID	= new InstrRegID()
    val instrRegImm	= new InstrRegImm()
	val csrID		= Output(UInt(CSRIDWidth.W))
}

// EX
class EXIO(outputWidth: Int) extends MarCoreBundle {
    val srcA = Input(UInt(XLEN.W))
    val srcB = Input(UInt(XLEN.W))
    val ctrl = Input(UInt(ALUCtrl.WIDTH.W))
    val outC = Output(UInt(outputWidth.W))
}
// Register

class RFIO extends MarCoreBundle {
    val instrRegID	= Flipped(new InstrRegID())
    val wdata		= Input(UInt(XLEN.W))
    val wen			= Input(Bool())
    val regData		= new RegData()
}

class CSRIO extends MarCoreBundle {
	val csrDst	= Input(UInt(CSRIDWidth.W))
	val csrSrc	= Input(UInt(CSRIDWidth.W))
	val wdata	= Input(UInt(XLEN.W))
    val imstatus= Input(UInt(XLEN.W))
	val wen		= Input(Bool())
	val ecall	= Input(Bool())
	val csrData	= Output(UInt(XLEN.W))
	val mepc	= Output(UInt(XLEN.W))
    val mstatus = Output(UInt(XLEN.W))
}

// Ctrl 
class Ctrl2EXU extends MarCoreBundle {
    val aluSrcA = Output(UInt(ALUSrcA.WIDTH.W))
    val aluSrcB = Output(UInt(ALUSrcB.WIDTH.W))
    val aluCtrl = Output(UInt(ALUCtrl.WIDTH.W))}
class Ctrl2WBU extends MarCoreBundle {
    val regWrite = Output(Bool())
    val csrWrite = Output(Bool())
    val memtoReg = Output(Bool())}
class Ctrl2LSU extends MarCoreBundle {
    val memRW = Output(UInt(MemRW.WIDTH.W))
    val memWidth = Output(UInt(MemWidth.WIDTH.W))}
class Ctrl2IDU extends MarCoreBundle {
    val branchCtrl = Output(UInt(BranchCtrl.WIDTH.W))
    val branch = Output(Bool())
    val jump = Output(UInt(Jump.WIDTH.W))
    val ecall = Output(Bool())
    val pcPlusSrc = Output(Bool())}

// Instr
class Instr extends MarCoreBundle {
    val instr = Output(UInt(InstrBits.W))}

class InstrRegID extends MarCoreBundle {
    val rs1 = Output(UInt(RegIDWidth.W))
    val rs2 = Output(UInt(RegIDWidth.W))
    val rd  = Output(UInt(RegIDWidth.W))}

class InstrRegImm extends MarCoreBundle {
    val imm = Output(UInt(XLEN.W))}
// PC
class PC extends MarCoreBundle {
    val pc = Output(UInt(XLEN.W))}

class RegData extends MarCoreBundle {
    val rd1 = Output(UInt(XLEN.W))
    val rd2 = Output(UInt(XLEN.W))}

// Data Forwarding
class ForwardIO(width: Int) extends MarCoreBundle {
    val forwardA = Output(UInt(width.W))
    val forwardB = Output(UInt(width.W))}

class WriteBackIO extends MarCoreBundle {
    val data		= Output(UInt(XLEN.W))
    val rd			= Output(UInt(RegIDWidth.W))
	val csrID		= Output(UInt(CSRIDWidth.W))
    val regWrite 	= Output(Bool())
	val csrWrite	= Output(Bool())}

class GPRIO extends MarCoreBundle {
    val zero = Output(UInt(XLEN.W))
    val ra   = Output(UInt(XLEN.W))
    val sp   = Output(UInt(XLEN.W))
    val gp   = Output(UInt(XLEN.W))
    val tp   = Output(UInt(XLEN.W))
    val t0   = Output(UInt(XLEN.W))
    val t1   = Output(UInt(XLEN.W))
    val t2   = Output(UInt(XLEN.W))
    val s0   = Output(UInt(XLEN.W))
    val s1   = Output(UInt(XLEN.W))
    val a0   = Output(UInt(XLEN.W))
    val a1   = Output(UInt(XLEN.W))
    val a2   = Output(UInt(XLEN.W))
    val a3   = Output(UInt(XLEN.W))
    val a4   = Output(UInt(XLEN.W))
    val a5   = Output(UInt(XLEN.W))
    val a6   = Output(UInt(XLEN.W))
    val a7   = Output(UInt(XLEN.W))
    val s2   = Output(UInt(XLEN.W))
    val s3   = Output(UInt(XLEN.W))
    val s4   = Output(UInt(XLEN.W))
    val s5   = Output(UInt(XLEN.W))
    val s6   = Output(UInt(XLEN.W))
    val s7   = Output(UInt(XLEN.W))
    val s8   = Output(UInt(XLEN.W))
    val s9   = Output(UInt(XLEN.W))
    val s10  = Output(UInt(XLEN.W))
    val s11  = Output(UInt(XLEN.W))
    val t3   = Output(UInt(XLEN.W))
    val t4   = Output(UInt(XLEN.W))
    val t5   = Output(UInt(XLEN.W))
    val t6   = Output(UInt(XLEN.W))
}

class CSRDEBUG extends MarCoreBundle {
    val mstatus	= Output(UInt(XLEN.W))
	val mtvec	= Output(UInt(XLEN.W))
	val mepc	= Output(UInt(XLEN.W))
	val mcause	= Output(UInt(XLEN.W))
}

class HazardDebugIO extends MarCoreBundle {
    val stallF = Output(Bool())
    val stallD = Output(Bool())
    val flushE = Output(Bool())
    val hu_exu_ctrl = new ForwardIO(ForwardE.WIDTH)
    val hu_idu_ctrl = new ForwardIO(ForwardD.WIDTH)
}

class DebugIO extends MarCoreBundle {
    val instr = new Instr()
    val commit = new PC()
    val dynamic = new PC()
    
    val hazard = new HazardDebugIO()

    val probe = new ProbeIO(XLEN)
    val alu_data_E = new ProbeIO(XLEN)
    val alu_data_W = new ProbeIO(XLEN)
    val forwardA = new ProbeIO(ForwardE.WIDTH)
    val forwardB = new ProbeIO(ForwardE.WIDTH)
    val forward_idu_A = new ProbeIO(ForwardD.WIDTH)
    val forward_idu_B = new ProbeIO(ForwardD.WIDTH)
    val alu_srcA = new ProbeIO(XLEN)
    val alu_srcB = new ProbeIO(XLEN)
    val rdD = new ProbeIO(RegIDWidth)
    val rdE = new ProbeIO(RegIDWidth)
    val rdM = new ProbeIO(RegIDWidth)
    val rdW = new ProbeIO(RegIDWidth)
}

class JumpTrace extends MarCoreBundle {
    val dynamic         = new PC()
    val instr_jump      = Output(UInt(1.W))
    val instr_branch    = Output(UInt(1.W))
    val instr_pcPlusSrc = Output(UInt(PCPlusSrc.WIDTH.W))
    val idu_pcSrc       = Output(UInt(1.W))
    // Branch
    val bruSrcA = Output(UInt(XLEN.W))
    val bruSrcB = Output(UInt(XLEN.W))
    val bruOutC = Output(UInt(1.W))
    val bruCtrl = Output(UInt(BranchCtrl.WIDTH.W))
}

class PipelineTrace extends MarCoreBundle {
    val if_id_pc = new PC(); val if_id_instr = new Instr(); val if_id_pcEnable = Output(Bool());
    val id_ex_pc = new PC(); val id_ex_instr = new Instr(); val id_ex_pcEnable = Output(Bool());
    val ex_ls_pc = new PC(); val ex_ls_instr = new Instr(); val ex_ls_pcEnable = Output(Bool());
    val ls_wb_pc = new PC(); val ls_wb_instr = new Instr(); val ls_wb_pcEnable = Output(Bool());
    val rf_pc    = new PC(); val rf_instr    = new Instr(); val rf_pcEnable    = Output(Bool());
}

class ProbeIO (width: Int) extends MarCoreBundle {
    val data = Output(UInt(width.W))
}

class NPCIO extends MarCoreBundle {
    val iFetch_iInstr   = Flipped(new Instr())
    val iFetch_oPC      = Output(UInt(XLEN.W))

    val iLoadStore_oWriteData   = Output(UInt(XLEN.W))
    val iLoadStore_oAddr        = Output(UInt(XLEN.W))
    val iLoadStore_oWidth       = Output(UInt(MemWidth.WIDTH.W))
    val iLoadStore_oRW          = Output(UInt(MemRW.WIDTH.W))
    val iLoadStore_iReadData    = Input(UInt(XLEN.W))
}

