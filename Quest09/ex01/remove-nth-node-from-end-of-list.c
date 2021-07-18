#include <stddef.h>


#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* remove_nth_node_from_end_of_list(listnode* head, int n)
{
    listnode *returnedHead = malloc(sizeof(listnode));

    returnedHead->next = head;
    int length = 0;
    listnode *current = head;

    while(current){
        length++;
        current = current->next;
    }

    length -= n;
    current = returnedHead;

    while(length != 0){
        length--;
        current = current->next;
    }
    
    current->next = current->next->next;
    return returnedHead->next;
}

