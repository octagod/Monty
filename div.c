#include "monty.h"
/**
 * _divide - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _divide(stack_t **head, unsigned int counter)
{
	stack_t *head_;
	int length = 0, a;

	head_ = *head;
	while (head_)
	{
		head_ = head_->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	head_ = *head;
	if (head_->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	a = head_->next->n / head_->n;
	head_->next->n = a;
	*head = head_->next;
	free(head_);
}
