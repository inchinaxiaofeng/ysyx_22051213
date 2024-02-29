file://<WORKSPACE>/npc/playground/src/units/WBU.scala
### java.lang.IndexOutOfBoundsException: 0

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 3.3.1
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala3-library_3/3.3.1/scala3-library_3-3.3.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ]
Options:



action parameters:
offset: 360
uri: file://<WORKSPACE>/npc/playground/src/units/WBU.scala
text:
```scala
package units

import chisel3._
import chisel3.util._

import defs._
import utils._

class WBU(implicit val p: MarCoreConfig) extends MarCoreModule {
	implicit val moduleName: String = this.name
    val io = IO(new Bundle {
		val in = Flipped(Decoupled(new CommitIO))
		val wb = new WriteBackIO
		val redirect = new RedirectIO
		val commit = new DiffCommitIO)(@@)
	})

	io.wb.rfWen := io.in.bits.decode.ctrl.rfWen && io.in.valid
	io.wb.rfDest := io.in.bits.decode.ctrl.rfDest
	io.wb.rfData := io.in.bits.commits(io.in.bits.decode.ctrl.fuType)

	io.in.ready := true.B

	io.redirect.target := io.in.bits.decode.cf.redirect.target
	io.redirect.rtype := io.in.bits.decode.cf.redirect.rtype
//	Info("%x\n", io.in.bits.decode.cf.redirect.target)
	io.redirect.valid := io.in.bits.decode.cf.redirect.valid && io.in.valid

	Debug(io.in.valid, 
		blink + magentaFG + "[COMMIT]" + resetColor + " pc = 0x%x inst %x wen %x wdst %x wdata %x mmio %x intrNO %x\n",
		io.in.bits.decode.cf.pc, io.in.bits.decode.cf.instr, 
		io.wb.rfWen, io.wb.rfDest, io.wb.rfData, 
		io.in.bits.isMMIO, io.in.bits.intrNO
	)

	io.commit := io.in.valid
//	val falseWire = WireInit(false.B) // make BoringUtils.addSource happy
//	BoringUtils.addSource(io.in.valid, "perfCntCondMinstret")
//	BoringUtils.addSource(falseWire, "perfCntCondMultiCommit")
}

//class WBU extends MarCoreModule {
//	val io = IO(new Bundle {
//		val ls_wb_IO = Flipped(new LS_WB_IO())
//		val wbIO = new WriteBackIO()
//		val hu_wbu = Flipped(new HU_WBU())
//		val commit = new PC()
//		val instr = new Instr()
//	})
//	
//	io.wbIO.rd := io.ls_wb_IO.rd
//	io.wbIO.csrID := io.ls_wb_IO.csrID
//	io.wbIO.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
//	io.wbIO.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite
//	io.wbIO.data := MuxLookup (
//		io.ls_wb_IO.ctrl2WBU.memtoReg,
//		0.U(XLEN.W),
//		Seq (
//			MemtoReg.F  -> io.ls_wb_IO.exOut,
//			MemtoReg.T  -> io.ls_wb_IO.readData
//		)
//	)
//
//	io.hu_wbu.rd := io.ls_wb_IO.rd
//	io.hu_wbu.csrID := io.ls_wb_IO.csrID
//	io.hu_wbu.regWrite := io.ls_wb_IO.ctrl2WBU.regWrite
//	io.hu_wbu.csrWrite := io.ls_wb_IO.ctrl2WBU.csrWrite
//
//	// Difftest
//	io.commit <> io.ls_wb_IO.commit
//	// Pipeline Trace
//	io.instr <> io.ls_wb_IO.instr
//}
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