package bus.axi4

import chisel3._
import chisel3.util._

import defs._
import bus.axi4._
import utils._

class AXI4Lite_Arbiter extends MarCoreModule {
	implicit val moduleName:String = this.name
	val InstFetch	= IO(Flipped(new AXI4Lite))
	val LoadStore	= IO(Flipped(new AXI4Lite))
	val Arbiter		= IO(new AXI4Lite)

	// Rule: LoadStore > InstFetch
	// This is the interface between the
	// "module part external" and
	// "SoC/Simulation external"

	InstFetch := DontCare
	LoadStore := DontCare
	Arbiter := DontCare

	LoadStore.aw	<> Arbiter.aw
	LoadStore.w		<> Arbiter.w
	LoadStore.b		<> Arbiter.b

	val s_idle :: s_if_exec :: s_ls_exec :: Nil = Enum(3)
	val state = RegInit(s_idle)

	switch (state) {
		is (s_idle) {
			when (InstFetch.ar.valid && LoadStore.ar.valid) {
				Info("[LoadStore <===> SRAM] idle\n")
				LoadStore.ar <> Arbiter.ar
				LoadStore.r  <> Arbiter.r
				state := s_ls_exec
			}.elsewhen (InstFetch.ar.valid && !LoadStore.ar.valid) {
				Info("[InstFetch <===> SRAM] idle\n")
				InstFetch.ar <> Arbiter.ar
				InstFetch.r  <> Arbiter.r
				state := s_if_exec
			}.elsewhen (!InstFetch.ar.valid && LoadStore.ar.valid) {
				Info("[LoadStore <===> SRAM] idle\n")
				LoadStore.ar <> Arbiter.ar
				LoadStore.r  <> Arbiter.r
				state := s_ls_exec
			}
		}

		is (s_if_exec) {
			Info("[InstFetch <===> SRAM] exec\n")
			InstFetch.ar <> Arbiter.ar
			InstFetch.r  <> Arbiter.r
			when (InstFetch.r.fire) { state := s_idle }
		}

		is (s_ls_exec) {
			Info("[LoadStore <===> SRAM] exec\n")
			LoadStore.ar <> Arbiter.ar
			LoadStore.r  <> Arbiter.r
			when (LoadStore.b.fire) { state := s_idle }
		}
	}

//	when(InstFetch.ar.valid && LoadStore.ar.valid) {
//		Info("[LoadStore <===> SRAM]\n")
//		// Both LoadStore and InstFetch send read request, satisfy LoadStore first
//		LoadStore.ar	<> Arbiter.ar
//		LoadStore.r		<> Arbiter.r
//	}.elsewhen(InstFetch.ar.valid && !LoadStore.ar.valid) {
//		Info("[InstFetch <===> SRAM]\n")
//		// Only InstFetch
//		InstFetch.ar	<> Arbiter.ar
//		InstFetch.r		<> Arbiter.r
//	}.elsewhen(!InstFetch.ar.valid && LoadStore.ar.valid) {
//		Info("[LoadStore <===> SRAM]\n")
//		// Only LoadStore
//		LoadStore.ar	<> Arbiter.ar
//		LoadStore.r		<> Arbiter.r
//	}.otherwise {/* Info("[DONT CARE <===> SRAM]\n") */}
}