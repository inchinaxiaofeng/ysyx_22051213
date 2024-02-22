package module.ooo

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import utils._

trait HasBackendConst {
	val robSize = 16
	val robWidth = 2
	val robInstCapacity = robSize * robWidth
	val checkpointSize = 4 // register map checkpoint size
	val brTagWidth = log2Up(checkpointSize)
	val prfAddrWidth = log2Up(robSize) + log2Up(robWidth) // physical rf addr width
	
	val DispatchWidth = 2
	val CommitWidth = 2
	val RetireWidth = 2
	
	val enableCheckpoint = true
}