package defs

import chisel3._
import chisel3.util._

import defs._

import module._

//-------------------- new ---------------------------

class ForwardIO extends MarCoreBundle {
	val valid = Output(Bool())
	val wb = new WriteBackIO
	val fuType = Output(FuType())
}

class MMUIO extends MarCoreBundle {
	val priviledgeMode = Input(UInt(2.W))
	val status_sum = Input(Bool())
	val status_mxr = Input(Bool())

	val loadPF = Output(Bool())
	val storePF = Output(Bool())
	val addr = Output(UInt(VAddrBits.W))

	def isPF() = loadPF || storePF
}

class MemMMUIO extends MarCoreBundle {
	val imem = new MMUIO
	val dmem = new MMUIO
}

class FuCtrlIO extends MarCoreBundle {
	val in = Flipped(Decoupled(new Bundle {
		val srcA = Output(UInt(XLEN.W))
		val srcB = Output(UInt(XLEN.W))
		val ctrl = Output(FuCtrl())
	}))
	val out = Decoupled(Output(UInt(XLEN.W)))
}

class RedirectIO extends MarCoreBundle {
	val target = Output(UInt(VAddrBits.W))
	val rtype = Output(UInt(1.W)) // 1: branch mispredict: only need to flush frontend. 0: others: flush the whole pipeline
	val valid = Output(Bool())
}

class MispredictRecIO extends MarCoreBundle {
    val redirect = new RedirectIO
    val valid = Output(Bool())
    val checkpoint = Output(UInt(brTagWidth.W))
    val prfidx = Output(UInt(prfAddrWidth.W))
}

class CtrlFlowIO extends MarCoreBundle {
	val instr = Output(UInt(64.W))
	val pc = Output(UInt(VAddrBits.W))
	val pnpc = Output(UInt(VAddrBits.W)) // Predicted Next Program Counter
	val redirect = new RedirectIO
	val exceptionVec = Output(Vec(16, Bool()))
	val intrVec = Output(Vec(12, Bool()))
	val brIdx = Output(UInt(4.W))
	val isRVC = Output(Bool())
	val crossPageIPFFix = Output(Bool())
	val runahead_checkpoint_id = Output(UInt(64.W))
	val isBranch = Output(Bool())
}

class CtrlSignalIO extends MarCoreBundle {
	val srcAType = Output(SrcType())
	val srcBType = Output(SrcType())
	val fuType = Output(FuType())
	val fuCtrl = Output(FuCtrl())
	val rfSrcA = Output(UInt(5.W))
	val rfSrcB = Output(UInt(5.W))
	val rfWen = Output(Bool())
	val rfDest = Output(UInt(5.W))
	val isMarCoreTrap = Output(Bool())
	val isSrcAForward = Output(Bool())
	val isSrcBForward = Output(Bool())
	val noSpecExec = Output(Bool())
	val isBlocked = Output(Bool())
}

class DataSrcIO extends MarCoreBundle {
	val srcA = Output(UInt(XLEN.W))
	val srcB = Output(UInt(XLEN.W))
	val imm  = Output(UInt(XLEN.W))
}

class DecodeIO extends MarCoreBundle {
	val cf = new CtrlFlowIO
	val ctrl = new CtrlSignalIO
	val data = new DataSrcIO
}

class WriteBackIO extends MarCoreBundle {
	val rfWen = Output(Bool())
	val rfDest = Output(UInt(5.W))
	val rfData = Output(UInt(XLEN.W))
}

class CommitIO extends MarCoreBundle {
	val decode = new DecodeIO
	val isMMIO = Output(Bool())
	val intrNO = Output(UInt(XLEN.W))
	val commits = Output(Vec(FuType.num, UInt(XLEN.W)))
}

class RegsDiff(val num: Int = 0.U) extends MarCoreBundle {
	val regs = Output(Vec(num, UInt(XLEN.W)))
}

//------------------------ end -----------------------

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
//class ForwardIO(width: Int) extends MarCoreBundle {
//    val forwardA = Output(UInt(width.W))
//    val forwardB = Output(UInt(width.W))}

//class WriteBackIO extends MarCoreBundle {
//    val data		= Output(UInt(XLEN.W))
//    val rd			= Output(UInt(RegIDWidth.W))
//	val csrID		= Output(UInt(CSRIDWidth.W))
//    val regWrite 	= Output(Bool())
//	val csrWrite	= Output(Bool())}

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

//class HazardDebugIO extends MarCoreBundle {
//    val stallF = Output(Bool())
//    val stallD = Output(Bool())
//    val flushE = Output(Bool())
//    val hu_exu_ctrl = new ForwardIO(ForwardE.WIDTH)
//    val hu_idu_ctrl = new ForwardIO(ForwardD.WIDTH)
//}

//class DebugIO extends MarCoreBundle {
//    val instr = new Instr()
//    val commit = new PC()
//    val dynamic = new PC()
//    
//    val hazard = new HazardDebugIO()
//
//    val probe = new ProbeIO(XLEN)
//    val alu_data_E = new ProbeIO(XLEN)
//    val alu_data_W = new ProbeIO(XLEN)
//    val forwardA = new ProbeIO(ForwardE.WIDTH)
//    val forwardB = new ProbeIO(ForwardE.WIDTH)
//    val forward_idu_A = new ProbeIO(ForwardD.WIDTH)
//    val forward_idu_B = new ProbeIO(ForwardD.WIDTH)
//    val alu_srcA = new ProbeIO(XLEN)
//    val alu_srcB = new ProbeIO(XLEN)
//    val rdD = new ProbeIO(RegIDWidth)
//    val rdE = new ProbeIO(RegIDWidth)
//    val rdM = new ProbeIO(RegIDWidth)
//    val rdW = new ProbeIO(RegIDWidth)
//}

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

