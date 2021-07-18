#include <stddef.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

listnode* reverse_linked_list(listnode* node)
{
    listnode *perv, *current;
    while(node){
        perv = node;
        current = node->next;
        node = node->next;

        perv->next = NULL;
        while(node){
            node = node->next;
            current->next = perv;
            perv = current;
            current = node;
        }
    }
    node = perv;
    return node;
}