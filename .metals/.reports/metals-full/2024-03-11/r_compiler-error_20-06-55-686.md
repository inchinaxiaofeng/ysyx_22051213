file://<WORKSPACE>/npc/playground/src/bus/axi4/AXI4_Arbiter.scala
### java.lang.IndexOutOfBoundsException: 0

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 3.3.1
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala3-library_3/3.3.1/scala3-library_3-3.3.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ]
Options:



action parameters:
offset: 1075
uri: file://<WORKSPACE>/npc/playground/src/bus/axi4/AXI4_Arbiter.scala
text:
```scala
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
				Info("[LoadStore <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
					InstFetch.ar.valid, InstFetch.ar.ready,
					LoadStore.ar.valid, LoadStore.ar.ready)
				LoadStore.ar <> Arbiter.ar
				LoadStore.r  <> Arbiter.r
				InstFetch.ar.ready := false.B
				InstFetch.r.valid := false.B
				InstFetch.r.apply()@@
				state := s_ls_exec
			}.elsewhen (InstFetch.ar.valid && !LoadStore.ar.valid) {
				Info("[InstFetch <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
					InstFetch.ar.valid, InstFetch.ar.ready,
					LoadStore.ar.valid, LoadStore.ar.ready)
				InstFetch.ar <> Arbiter.ar
				InstFetch.r  <> Arbiter.r
				state := s_if_exec
			}.elsewhen (!InstFetch.ar.valid && LoadStore.ar.valid) {
				Info("[LoadStore <===> SRAM] idle ifvr%x,%x lsvr%x,%x\n",
					InstFetch.ar.valid, InstFetch.ar.ready,
					LoadStore.ar.valid, LoadStore.ar.ready)
				LoadStore.ar <> Arbiter.ar
				LoadStore.r  <> Arbiter.r
				state := s_ls_exec
			}.otherwise { Info("[DONT CARE <=X=> SRAM] idle") }
		}

		is (s_if_exec) {
			Info("[InstFetch <===> SRAM] exec ifvr%x,%x lsvr%x,%x\n",
				InstFetch.ar.valid, InstFetch.ar.ready,
				LoadStore.ar.valid, LoadStore.ar.ready)
			InstFetch.ar <> Arbiter.ar
			InstFetch.r  <> Arbiter.r
			when (InstFetch.r.fire) { state := s_idle }
		}

		is (s_ls_exec) {
			Info("[LoadStore <===> SRAM] exec ifvr%x,%x lsvr%x,%x\n",
				InstFetch.ar.valid, InstFetch.ar.ready,
				LoadStore.ar.valid, LoadStore.ar.ready)
			LoadStore.ar <> Arbiter.ar
			LoadStore.r  <> Arbiter.r
			when (LoadStore.r.fire) { state := s_idle }
		}
	}
}
```



#### Error stacktrace:

```
scala.collection.LinearSeqOps.apply(LinearSeq.scala:131)
	scala.collection.LinearSeqOps.apply$(LinearSeq.scala:128)
	scala.collection.immutable.List.apply(List.scala:79)
	dotty.tools.dotc.util.Signatures$.countParams(Signatures.scala:501)
	dotty.tools.dotc.util.Signatures$.applyCallInfo(Signatures.scala:186)
	dotty.tools.dotc.util.Signatures$.computeSignatureHelp(Signatures.scala:94)
	dotty.tools.dotc.util.Signatures$.signatureHelp(Signatures.scala:63)
	scala.meta.internal.pc.MetalsSignatures$.signatures(MetalsSignatures.scala:17)
	scala.meta.internal.pc.SignatureHelpProvider$.signatureHelp(SignatureHelpProvider.scala:51)
	scala.meta.internal.pc.ScalaPresentationCompiler.signatureHelp$$anonfun$1(ScalaPresentationCompiler.scala:398)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: 0