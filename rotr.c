#include "monty.h"
/**
  *rotate_stack_bottom- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void rotate_stack_bottom(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *clone;

	clone = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (clone->next)
	{
		clone = clone->next;
	}
	clone->next = *head;
	clone->prev->next = NULL;
	clone->prev = NULL;
	(*head)->prev = clone;
	(*head) = clone;
}
