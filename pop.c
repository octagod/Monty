#include "monty.h"
/**
 * pop_ - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pop_(stack_t **head, unsigned int counter)
{
	stack_t *head_;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	head_ = *head;
	*head = head_->next;
	free(head_);
}
