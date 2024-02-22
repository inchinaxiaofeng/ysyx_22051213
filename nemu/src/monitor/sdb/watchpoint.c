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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
// static int pool_index = -1; // 用于给当前个数计数

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]); // ??? 很迷惑，为什么不直接使用链表呢
    wp_pool[i].cur_value = 0;
  }

  head = NULL;
  free_ = wp_pool;
}

WP *new_wp(char* condation, bool *success) { // DONE
  if (NULL == condation || NULL == success) {
    Log("Too few args. Should be: new_wp(const char* condition, bool *success).");
    return NULL;
  }
  if (NULL == free_->next) { // 池中无空闲资源
    Log("监视点资源池中无空闲资源");
    success = false;
    return NULL;
  }

  //set return val
  WP *result = free_; // 函数内的临时变量做返回值
  // ++pool_index;
  free_ = result->next;
  result->next = NULL;

  if (NULL == head) {
    head = result;
  } else {
    result->next = head;
    head = result;
  }
  
  // result->pos = expr(condation, success);
  word_t cur_value = expr(condation, success);
  if (false == success) {
    Log("Bad expr! Please check here!");
    return NULL;
  }
  strcpy(result->condation, condation);
  result->cur_value = cur_value;

  return result;
}

static void insert_free(WP *wp) { // 将当前持有资源返回池(free_)中
  wp->next = free_;
  free_ = wp;
}

void free_wp(WP *wp) {
  if (NULL == wp) {
    Log("NULL ptr error");
    return;
  }
  if (NULL == head) {
    printf("\033[0;31mNo Watchpoint be used currently.\n\033[0m");
    return;
  }

  if (head->NO == wp->NO) { // 释放head链表(数组)头节点
    head = wp->next;
    insert_free(wp);
    wp = NULL;
    // --pool_index;
    return;
  }
  
  WP *prv = head;
  while (prv->next) {
    if (prv->next->NO == wp->NO) {
      prv->next = wp->next;
      insert_free(wp);
      // --pool_index;
      return;
    }
    prv = prv->next;
  }

  printf("\033[0;31mWatchpoint(NO.%d) not be used.\n\033[0m", wp->NO);
  // Log("没有找到Watchpoint(NO.%d)", wp->NO);
}

void free_wp_NO(int NO) {
  if (NO < 0 || NO >= NR_WP) {
    printf("\033[0;31mWatchpoint(NO.%d) not exist.\n\033[0m", NO);
    return;
  }
  
  free_wp(&wp_pool[NO]);
  return;
}

void watchpoint_display(){
  printf("NO.\tCondation\tCur_value_DEC\tCur_value_HEX\n");
  WP* cur = head;
  while (cur) {
    printf("\e[1;36m%d\e[0m\t\e[0;32m%s\t%ld\t0x%lx\e[0m\n", cur->NO, cur->condation, cur->cur_value, cur->cur_value);
  cur = cur->next;
}
}

bool check_watchpoint() {
  bool watch = false; // 用于标注是否发生了变化
  bool success = true;
  WP* cur = head;
  word_t value;
  while (cur) {
    value = expr(cur->condation, &success);
    if (false == success) {
      Log("Bad expr! Please check here!");
      break;
    }
    if (value != cur->cur_value) {
      printf("\e[1;36m(NO.%d):\t\e[0;33mCond:\e[0;32m%s\t\e[0;33mCur_DEX:\e[0;32m%ld\t\e[0;33mCur_HEX:\e[0;32m0x%lx\t\e[0;33mNew_DEX:\e[0;32m%ld\t\e[0;33mNew_HEX:\e[0;32m%lx\e[0m\n",
              cur->NO, cur->condation, cur->cur_value, cur->cur_value, value, value);
      watch = true;
    }
    cur->cur_value = value;
    cur = cur->next;
  }
  return watch;
}