# quest09

# ex00
**Description**

Reverse a singly linked list.

**Example:**
```
Input: 1->2->3->4->5->NULL 
Output: 5->4->3->2->1->NULL 
```

**Function prototype (c)**
```
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* reverse_linked_list(listnode* param_1)
{

}
```
#
# ex01

**Description**

Given a linked list, remove the n-th node from the end of list and return its head.

**Example:**
```
Given linked list:
1->2->3->4->5, and _n_ = 2.
After removing the second node from the end, the linked list becomes 1->2->3->5. 
```
**Note:**
```
Given _n_ will always be valid.
```
**Function prototype (c)**
```
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2)
{

}
```
#
# ex02

**Description**

Given a sorted linked list, delete all duplicates such that each element appear only once.

**Example 00:**
```
Input: 1->1->2 
Output: 1->2 
```

**Example 01:**
```
Input: 1->1->2->3->3 
Output: 1->2->3 
```
**Function prototype (c)**
```
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* remove_duplicates_from_sorted_list(listnode* param_1)
{

}
```

#
# ex03

**Description**

Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

**Example:**
```
Input: [1->4->5, 1->3->4, 2->6] 
Output: 1->1->2->3->4->4->5->6 
```
**Function prototype (c)**
```
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


listnode* merge_k_sorted_lists(listnode_array* param_1)
{

}
```
