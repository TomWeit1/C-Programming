#include "linked_list_class.h"
#include <stdio.h>

int main(){
    list lst;
    lst = l_init();
    list * p = &lst;
    l_add(p, 3);
    l_add(p, 4);
    l_add(p, 4);
    l_add(p, 4);
    l_add(p, 4);
    l_print(lst);
};