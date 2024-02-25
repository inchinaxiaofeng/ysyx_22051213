package top

object DefaultSettings {
    def apply() = Map(
        "ResestVector"      -> 0x80000000L,

        "IsRV32"            -> false,

        "EnableDebug"       -> true,
        "EnableTrace"       -> true
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