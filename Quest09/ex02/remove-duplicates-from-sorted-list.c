#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* remove_duplicates_from_sorted_list(listnode* head)
{
    listnode *current = head;
    while(current && current->next){
        if(current->val == current->next->val)
            current->next = current->next->next;
        else
            current = current->next;
    }
    return head;
}