file://<WORKSPACE>/npc/playground/src/top/SimTop.scala
### java.lang.IndexOutOfBoundsException: 0

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 3.3.1
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala3-library_3/3.3.1/scala3-library_3-3.3.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ]
Options:



action parameters:
offset: 886
uri: file://<WORKSPACE>/npc/playground/src/top/SimTop.scala
text:
```scala
package top

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import bus.axi4.{AXI4, AXI4Lite, AXI4Lite_Arbiter}
import module._
import defs._
import top.Settings
import utils.difftest._

class SimTopIO extends Bundle {
	val gpr = new GPRState
	val csr = new CSRState
	val load = Output(new LoadEvent)
	val store = Output(new StoreEvent)
	val instr = Output(new InstrCommit(numPhyRegs = 32))
}

class SimTop extends Module {
	lazy val config = MarCoreConfig(FPGAPlatform = false)
	val io = IO(new SimTopIO())
	val core = Module(new Core()(config))
	val arbiter = Module(new AXI4Lite_Arbiter())
	val TP_SRAM = Module(new TP_SRAM())

	core.io.imem <> arbiter.InstFetch
	core.io.dmem <> arbiter.LoadStore

	arbiter.Arbiter <> TP_SRAM.io

	val gpr = Wire(Vec(32, UInt(64.W)))	
	if (Settings.get("DiffTestGPR")) {
		BoringUtils.addSink(gpr, "GPR")
		for (@@)
	}

	val csr = Wire(Vec(4, UInt(64.W)))
	if(Settings.get("DiffTestCSR")){
		BoringUtils.addSink(csr, "CSR")
		io.csr.mstatus	:= csr(0)
		io.csr.mtvec	:= csr(1)
		io.csr.mepc		:= csr(2)
		io.csr.mcause	:= csr(3)
	} else {
		io.csr := 0.U
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