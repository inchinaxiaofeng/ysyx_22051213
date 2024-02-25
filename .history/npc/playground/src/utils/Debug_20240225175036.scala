package utils

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils
import utils.LogLevel.LogLevel

import defs._

object LogLevel extends Enumeration {
	type LogLevel = Value

	val ALL		= Value(0, "ALL  ")
	val DEBUG	= Value("DEBUG")
	val INFO	= Value("INFO ")
	val WARN	= Value("WARN ")
	val ERROR	= Value("ERROR")
	val OFF		= Value("OFF  ")
}

object LogUtil {
	def displayLog: Bool = {
//		val enableDisplay = WireInit(false.B)
//		BoringUtils.addSink(enableDisplay, "DISPLAY_ENABLE")
//		enableDisplay
		false.B
	}

	def apply(debugLevel: LogLevel)
			(prefix: Boolean, cond: Bool, pable: Printable)
			(implicit name: String): Any = {
		val commonInfo = p"[${GTimer()}] $name: "
		when (cond && displayLog) {
			if (prefix) printf(commonInfo)
			printf(pable)
		}
	}
}

sealed abstract class LogHelper(val logLevel: LogLevel) {
	def apply(cond: Bool, fmt: String, data: Bits*)(implicit name: String): Any =
		apply(cond, Printable.pack(fmt, data:_*))
	def apply(cond: Bool, pable: Printable)(implicit name: String): Any = apply(true, cond, pable)
	def apply(fmt: String, data: Bits*)(implicit name: String): Any =
		apply(true.B, Printable.pack(fmt, data:_*))
	def apply(pable: Printable)(implicit name: String): Any = apply(true.B, pable)
	def apply(prefix: Boolean, fmt: String, data: Bits*)(implicit name: String): Any = apply(prefix, true.B, Printable.pack(fmt, data:_*))
	def apply(prefix: Boolean, pable: Printable)(implicit name: String): Any = apply(prefix, true.B, pable)
	def apply(prefix: Boolean, cond: Bool, fmt: String, data: Bits*)(implicit name: String): Any =
		apply(prefix, cond, Printable.pack(fmt, data:_*))
	def apply(prefix: Boolean, cond: Bool, pable: Printable)(implicit name: String): Any =
		LogUtil(logLevel)(prefix, cond, pable)

	// NOOP/MarCore style debug
	def apply(flag: Boolean = MarCoreConfig().EnableDebug, cond: Bool = true.B)(body: => Unit): Any = {
		if(MarCoreConfig().EnhancedLog){
			if(flag) { when (cond && LogUtil.displayLog) { body } }
		} else {
			if(flag) { when (cond) { body } }
		}
	}
}

object Debug extends LogHelper(LogLevel.DEBUG)
object Info  extends LogHelper(LogLevel.INFO )
object Warn  extends LogHelper(LogLevel.WARN )
object Error extends LogHelper(LogLevel.ERROR)

object ShowType {
	def apply[T: Manifest](t: T) = println(manifest[T])
}