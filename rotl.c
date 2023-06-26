#include "monty.h"
/**
  *rotate_stack_top- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void rotate_stack_top(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temporary = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}
	temporary->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temporary;
	(*head) = aux;
}
