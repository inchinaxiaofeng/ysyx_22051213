package top

object DefaultSettings {
	def apply() = Map(
		"ResetVector"				-> 0x80000000L,

		"EnableMultiIssue"			-> false,
		"EnableOutOfOrderExec"		-> false,
		"HasDTLB"					-> false,
		"IsRV32"					-> false,

		"FPGAPlatform"				-> false,
		"EnableDebug"				-> true,
		"EnableTrace"				-> true,
		"EnableRVC"					-> false,

		"IsElaborating"				-> true // If not set true when Elaborating, firtool will fail and exit with code 134.
	)
}

object OOOSettings {
	def apply() = Map(
		"EnableMultiIssue"			-> true,
		"EnableOutOfOrderExec"		-> true
	)
}

object Settings {
	var settings: Map[String, AnyVal] = DefaultSettings()
	def get(field: String) = {
		settings(field).asInstanceOf[Boolean]
	}
	def getLong(field: String) = {
		settings(field).asInstanceOf[Long]
	}
	def getInt(field: String) = {
		settings(field).asInstanceOf[Int]
	}
}