package units

import chisel3._
import chisel3.util._

import defs._
import module._
import module.fu._

class IDU extends MarCoreModule {
    val io = IO(new Bundle {
        val if_id_IO = Flipped(new IF_ID_IO())
        val id_ex_IO = new ID_EX_IO()
        val hu_idu = Flipped(new HU_IDU())
        val forwardDataM = Input(UInt(XLEN.W))
        val wb = Flipped(new WriteBackIO())
        val npc = new PC()
		val mepc = Output(UInt(XLEN.W))
        val pcSrc = Output(Bool())
        // Difftest
        val gpr = Output(new GPRIO())
		val csrDebug = Output(new CSRDEBUG())
        // Jump Trace
        val instr_jump      = Output(UInt(Jump.WIDTH.W))
        val instr_branch    = Output(UInt(1.W))
        val instr_pcPlusSrc = Output(UInt(PCPlusSrc.WIDTH.W))
        val bruSrcA         = Output(UInt(XLEN.W))
        val bruSrcB         = Output(UInt(XLEN.W))
        val bruOutC         = Output(UInt(1.W))
        val bruCtrl         = Output(UInt(BranchCtrl.WIDTH.W))
    })

    val id = Module(new InstrDecode())
    val rf = Module(new RegisterFile())
    val csrf = Module(new CSRFile())
    val bru = Module(new BRU())

    rf.io.instrRegID.rs1 := id.io.instrIO.instrRegID.rs1
    rf.io.instrRegID.rs2 := id.io.instrIO.instrRegID.rs2
    rf.io.instrRegID.rd := io.wb.rd
    rf.io.wdata := io.wb.data
    rf.io.wen := io.wb.regWrite

    csrf.io.csrDst	:= io.wb.csrID
	csrf.io.csrSrc	:= id.io.instrIO.csrID
    csrf.io.wen		:= io.wb.csrWrite
	csrf.io.ecall	:= id.io.ctrlFlowIO.ctrl2IDU.ecall
	csrf.io.wdata	:= io.wb.data
	csrf.io.imstatus:= "ha0001800".U
	io.mepc			:= csrf.io.mepc

    val muxRegData = Wire(new RegData())

    muxRegData.rd1 := MuxLookup (
        io.hu_idu.forwardCtrl.forwardA,
        0.U(XLEN.W),
        Seq (
            ForwardD.RDD    -> rf.io.regData.rd1,
            ForwardD.ALUM   -> io.forwardDataM,
            ForwardD.RDW    -> io.wb.data
        )
    )

    muxRegData.rd2 :=  MuxLookup (
        io.hu_idu.forwardCtrl.forwardB,
        0.U(XLEN.W),
        Seq (
            ForwardD.RDD    -> rf.io.regData.rd2,
            ForwardD.ALUM   -> io.forwardDataM,
            ForwardD.RDW    -> io.wb.data
        )
    )

    id.io.instrIO.instrIn.instr := io.if_id_IO.instr.instr

    bru.io.srcA := muxRegData.rd1
    bru.io.srcB := muxRegData.rd2
    bru.io.ctrl := id.io.ctrlFlowIO.ctrl2IDU.branchCtrl

    val pcPlusSrcData = MuxLookup (
        id.io.ctrlFlowIO.ctrl2IDU.pcPlusSrc,
        0.U(XLEN.W),
        Seq (
            PCPlusSrc.PC    -> io.if_id_IO.pc.pc,
            PCPlusSrc.REG   -> muxRegData.rd1
        )
    )

    val branch = (id.io.ctrlFlowIO.ctrl2IDU.branch === Branch.T) && (bru.io.outC.asBool)

    when (
        (id.io.ctrlFlowIO.ctrl2IDU.jump === Jump.JUMP)
        ||
        (branch === true.B)
    ) {
        io.pcSrc := NPCSrc.JUMP        
    }.elsewhen (
        id.io.ctrlFlowIO.ctrl2IDU.jump === Jump.MEPC
    ) {
        io.pcSrc := NPCSrc.MEPC
    }.otherwise {
        io.pcSrc := NPCSrc.PCP4
    }

    io.npc.pc := pcPlusSrcData + id.io.instrIO.instrRegImm.imm

    io.id_ex_IO.ctrl2EXU    <> id.io.ctrlFlowIO.ctrl2EXU
    io.id_ex_IO.ctrl2LSU    <> id.io.ctrlFlowIO.ctrl2LSU
    io.id_ex_IO.ctrl2WBU    <> id.io.ctrlFlowIO.ctrl2WBU
    io.id_ex_IO.instrRegID  <> id.io.instrIO.instrRegID
    io.id_ex_IO.instrRegImm <> id.io.instrIO.instrRegImm
    io.id_ex_IO.regData     <> muxRegData
    io.id_ex_IO.pc          <> io.if_id_IO.pc

	io.id_ex_IO.csrData		:= csrf.io.csrData
	io.id_ex_IO.csrID		:= id.io.instrIO.csrID

    io.hu_idu.jump      := id.io.ctrlFlowIO.ctrl2IDU.jump
    io.hu_idu.branch    := id.io.ctrlFlowIO.ctrl2IDU.branch
    io.hu_idu.rs1       := id.io.instrIO.instrRegID.rs1
    io.hu_idu.rs2       := id.io.instrIO.instrRegID.rs2
	io.hu_idu.csrID		:= id.io.instrIO.csrID
    io.hu_idu.pcPlusSrc := id.io.ctrlFlowIO.ctrl2IDU.pcPlusSrc

    // Difftest
    io.gpr <> rf.gpr
	io.csrDebug <> csrf.csrDebug
    // Pipeline Trace
    io.id_ex_IO.instr <> io.if_id_IO.instr
    // Jump Trace
    io.instr_jump       := id.io.ctrlFlowIO.ctrl2IDU.jump
    io.instr_branch     := id.io.ctrlFlowIO.ctrl2IDU.branch
    io.instr_pcPlusSrc  := id.io.ctrlFlowIO.ctrl2IDU.pcPlusSrc
    io.bruSrcA          := muxRegData.rd1
    io.bruSrcB          := muxRegData.rd2
    io.bruOutC          := bru.io.outC
    io.bruCtrl          := id.io.ctrlFlowIO.ctrl2IDU.branchCtrl
}