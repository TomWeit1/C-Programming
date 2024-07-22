typedef struct linked_node node;

struct linked_node{
    node * next;
    node * before;
    int value;
};