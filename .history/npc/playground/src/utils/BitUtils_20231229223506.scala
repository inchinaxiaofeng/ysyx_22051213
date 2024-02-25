package utils

import chisel3._
import chisel3.util._

object MaskData { // 用于选择性的更新oldData和newData的位，并返回新的结果。这种操作通常用于处理和更新寄存器的数据
    def apply(oldData: UInt, newData: UInt, fullmask: UInt) = {
        require(oldData.getWidth == newData.getWidth) // 类似于assert检查
        require(oldData.getWidth == fullmask.getWidth)
        (newData & fullmask) | (oldData & ~fullmask)
    }
}

object SignExt {
    def apply(a: UInt, len: Int): UInt = {
        val aLen = a.getWidth
        val signBit = a(aLen-1)
        if (aLen >= len) a(len-1,0) 
        else Cat(Fill(len - aLen, signBit), a)
    }
}

object ZeroExt {
    def apply(a: UInt, len: Int): UInt = {
        val aLen = a.getWidth
        if (aLen >= len) a(len-1, 0) 
        else Cat(0.U((len - aLen).W), a)
    }
}