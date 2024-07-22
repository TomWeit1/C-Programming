#include "linked_list_class.h"
#include <stdio.h>

int main(){
    list lst;
    lst = l_init();
    list * p = &lst;
    printf("%d\n", l_len(p));
    l_add(p, 3);
    printf("%d\n", l_len(p));
    l_add(p, 4);
    printf("%d\n", l_len(p));
    l_print(lst);
};