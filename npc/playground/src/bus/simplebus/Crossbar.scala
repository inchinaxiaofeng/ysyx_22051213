package bus.simplebus

import chisel3._
import chisel3.util._

import utils._

class SimpleBusCrossbarNto1(n: Int, userBits: Int = 0) extends Module {
	val io = IO(new Bundle {
		val in = Flipped(Vec(n, new SimpleBusUC(userBits)))
		val out = new SimpleBusUC(userBits)
	})

	val s_idle :: s_readResp :: s_writeResp :: Nil = Enum(3)
	val state = RegInit(s_idle)

	val lockWriteFun = ((x: SimpleBusReqBundle) => x.isWrite() && x.isBurst())
	val inputArb = Module(new LockingArbiter(chiselTypeOf(io.in(0).req.bits), n, 8, Some(lockWriteFun)))
	(inputArb.io.in zip io.in.map(_.req)).map{ case (arb, in) => arb <> in }
	val thisReq = inputArb.io.out
	assert(!(thisReq.valid && !thisReq.bits.isRead() && !thisReq.bits.isWrite()))
	val inflightSrc = RegInit(0.U(log2Up(n).W))

	io.out.req.bits := thisReq.bits
	// bind correct valid and ready signals
	io.out.req.valid := thisReq.valid && (state === s_idle)
	thisReq.ready := io.out.req.ready && (state === s_idle)

	io.in.map(_.resp.bits := io.out.resp.bits)
	io.in.map(_.resp.valid := false.B)
	(io.in(inflightSrc).resp, io.out.resp) match { case (l, r) => {
		l.valid := r.valid
		r.ready := l.ready
	}}

	switch (state) {
		is (s_idle) {
			when (thisReq.fire) {
				inflightSrc := inputArb.io.chosen
				when (thisReq.bits.isRead()) { state := s_readResp }
				.elsewhen (thisReq.bits.isWriteLast() || thisReq.bits.isWriteSingle()) { state := s_writeResp }
			}
		}
		is (s_readResp) { when (io.out.resp.fire && io.out.resp.bits.isReadLast) { state := s_idle } }
		is (s_writeResp) { when (io.out.resp.fire) { state := s_idle } }
	}
}