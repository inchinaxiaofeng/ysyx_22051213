package bus.axi4

import chisel3._
import chisel3.util._

import defs._
import bus.axi4._

class AXI4Lite_Arbiter extends MarCoreModule {
	val InstFetch	= IO(Flipped(new AXI4Lite))
	val LoadStore	= IO(Flipped(new AXI4Lite))
	val Arbiter		= IO(new AXI4Lite)

	// Rule: LoadStore > InstFetch
	// This is the interface between the
	// "module part external" and
	// "SoC/Simulation external"

//	val s_idle :: s_imem_exec :: s_dmem_exec :: Nil = Enum(2)
//	val state = RegInit(s_idle)
//
//	switch (state) {
//		is (s_idle) {
//
//		}
//	}

	LoadStore.aw	<> Arbiter.aw
	LoadStore.w		<> Arbiter.w
	LoadStore.b		<> Arbiter.b

	InstFetch.b := DontCare
	InstFetch.aw := DontCare
	InstFetch.w := DontCare
	// Close B channel by setting false.B to b.valid signal.
//	InstFetch.b.valid := false.B; InstFetch.b.bits.apply();
	// Close AW and W channel by setting false.B to aw.ready and w.ready.
//	InstFetch.aw.ready := false.B; InstFetch.w.ready := false.B;

	when(InstFetch.ar.valid && LoadStore.ar.valid) {
		// Both LoadStore and InstFetch send read request, satisfy LoadStore first
		LoadStore.ar	<> Arbiter.ar
		LoadStore.r		<> Arbiter.r
		InstFetch.ar.ready	:= false.B
		InstFetch.r.valid	:= false.B
		InstFetch.r.bits.apply()
	}.elsewhen(InstFetch.ar.valid && !LoadStore.ar.valid) {
		// Only InstFetch
		InstFetch.ar	<> Arbiter.ar
		InstFetch.r		<> Arbiter.r
		LoadStore.ar.ready	:= false.B
		LoadStore.r.valid	:= false.B
		LoadStore.r.bits.apply()
	}.elsewhen(!InstFetch.ar.valid && LoadStore.ar.valid) {
		// Only LoadStore
		LoadStore.ar	<> Arbiter.ar
		LoadStore.r		<> Arbiter.r
		InstFetch.ar.ready	:= false.B
		InstFetch.r.valid	:= false.B
		InstFetch.r.bits.apply()
	}.otherwise {
		// No read request
		Arbiter.ar.valid	:= false.B
		Arbiter.r.ready		:= false.B
		Arbiter.ar.bits.apply()

		InstFetch.ar.ready	:= false.B
		InstFetch.r.valid	:= false.B
		InstFetch.r.bits.apply()

		LoadStore.ar.ready	:= false.B
		LoadStore.r.valid	:= false.B
		LoadStore.r.bits.apply()
	}
}