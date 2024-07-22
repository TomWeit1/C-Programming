#include "linked_list_class.h"
#include <stdio.h>
#include <malloc.h>

list l_init(){
    list lst = {NULL};
    return lst;
};

void l_delete_all(list lst){
    lst.head = NULL;
};

void l_add(list * lst, int val){
    node * new_node = (node *) malloc(sizeof(node));
    new_node->value = val;
    if (l_len(lst) == 0){
        new_node->next = new_node;
        new_node->before = new_node;
        lst->head = new_node;
    }
    else{
        new_node->next = lst->head;
        new_node->before = lst->head->before;
        lst->head->before->next = new_node;
        lst->head->before = new_node;
    }
}

/*void l_delete(node * n){
    if (n->next == n->next->next){
        
    }
}*/

int l_len(list * lst){
    if (lst->head == NULL){
        return 0;
    }
    node * cur = lst->head;
    int len = 1;
    cur = cur->next;
    while (cur->value != lst->head->value){
        len += 1;
        cur = cur->next;
    }
    return len;
}

void l_print(list lst){
    node * cur = lst.head;
    do{
        printf("%d->", cur->value);
        cur = cur->next;
    }while(cur != lst.head);
    printf("\n");
};