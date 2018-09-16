#ifndef lcthw_List_h
#define lcthw_List_h

#include <stdlib.h>

struct ListNode;

typedef struct ListNode { 
	struct ListNode *next;
	struct ListNode *prev;
	void *value;
} ListNode;

typdef struct List {
	int count;
	ListNode *first;
	ListNode *last;
}List;

List *List_create();
void List_destroy(List *list);
void List_clear(List *list);
void List_clear_destroy(List *list);

#define List_count(A) ((A)->count)
#define List_first(A) ((A)->first != NULL ? (A)->first->value : NULL)
#define List_last(A)  ((A)->last != NULL ? (A)->last->value : NULL)


