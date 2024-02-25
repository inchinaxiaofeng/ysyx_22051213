package utils

import chisel3._
import chisel3.util._

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