#include "monty.h"
/**
 * _add - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void _add(stack_t **head, int n)
{

	stack_t *node_, *a;

	a = *head;
	node_ = malloc(sizeof(stack_t));
	if (node_ == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = node_;
	node_->n = n;
	node_->next = *head;
	node_->prev = NULL;
	*head = node_;
}
