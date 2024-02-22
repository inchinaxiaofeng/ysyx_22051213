// DESCRIPTION: The head file of Simple Debuger
// STATE: Developing

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

typedef struct watchpoint {
    int NO;
    char condation[32];
    struct watchpoint *next;
    word_t cur_value;
} WP;
void init_wp_pool();
WP *new_wp(char *condation, bool *success);
void free_wp_NO(int NO);
void watchpoint_display();
bool check_watchpoint();

void sdb_mainloop();
void sdb_set_batch_mode();

#endif