#if !defined(MYLIB_H)
#define MYLIB_H
#include "linked_node.c"

typedef struct l_list{
    node * head;
} list;
list l_init();
void l_delete_all(list lst);
void l_add(list * lst, int val);
//void l_delete(node * n);
int l_len(list * lst);
void l_print(list lst);

#endif
