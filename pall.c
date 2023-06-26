#include "monty.h"
/**
 * print_stack - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void print_stack(stack_t **head, unsigned int counter)
{
	stack_t *head_;
	(void)counter;

	head_ = *head;
	if (head_ == NULL)
		return;
	while (head_)
	{
		printf("%d\n", head_->n);
		head_ = head_->next;
	}
}
