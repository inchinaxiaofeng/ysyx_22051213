import circt.stage._
import module._
import units._
import top._

object Elaborate extends App {
  def top = new SimTop()
  val useMFC = true // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  // println(generator)
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}

// object Elaborate extends App {
//   def top = new TopMain()
//   (new ChiselStage).execute(args, Seq(
//     chisel3.stage.ChiselGeneratorAnnotation(() => top))
//   )
// }
