#include "monty.h"
/**
* freestack - frees a doubly linked list
* @head: head of the stack
*/
void freestack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
