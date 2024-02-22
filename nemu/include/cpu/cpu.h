/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
/*
模拟CPU模块：
  在cpu_exec中封装了取值执行的CPU底层原理
  cpu_exec中同时也封装了一些debug、trace、difftest、
  在set_nemu_state中封装了用于调整了nemu_state的方法，与基础设计配合使用
  invalid_inst则是封装了错误执行时的行为

  两个宏只是封装了两个特殊情况的调用。

  【核心在取值执行】
*/
#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>

void cpu_init(); // 初始化一些cpu的东西（可能用于执行调试等）
void cpu_exec(uint64_t n); // 模拟cpu的执行，同时也封装了调试、CPU_state的功能，可以用来在ref中执行

void set_nemu_state(int state, vaddr_t pc, int halt_ret); // 设置state的函数
void invalid_inst(vaddr_t thispc); // 当遇到非法指令实现的时候调用。

#define NEMUTRAP(thispc, code) set_nemu_state(NEMU_END, thispc, code) // Trap指令的一个封装库
#define INV(thispc) invalid_inst(thispc) // 对非法指令的一个封装

#endif
