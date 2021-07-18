#include <stddef.h>


#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

#ifndef STRUCT_LISTNODE_ARRAY
#define STRUCT_LISTNODE_ARRAY
typedef struct s_listnode_array
{
    int size;
    listnode **array;
} listnode_array;
#endif


listnode* sort(listnode* first, listnode* second){
     
    if(first == NULL && second == NULL)
        return NULL;
    if (first == NULL){
        return second;
    }
    if (second == NULL)
        return first;

    listnode* newNode;
    
    if (first->val > second->val) {
        newNode = second;
        newNode->next = sort(first, second->next);
    } else {
        newNode = first;
        newNode->next = sort(first->next, second);
    }
    return newNode;
}


listnode* merge_k_sorted_lists(listnode_array* nodeArr)
{
    listnode *newNode;
   
    if(nodeArr->size < 2)
        return nodeArr->array[0];

    for(int i = 1 ; i < nodeArr->size; i++)
        nodeArr->array[0] = sort(nodeArr->array[0], nodeArr->array[i]);
    
    newNode = nodeArr->array[0];
    return newNode;
}