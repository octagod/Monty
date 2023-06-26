#include "monty.h"
/**
 * swap_ - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap_(stack_t **head, unsigned int counter)
{
	stack_t *head_;
	int length = 0, _ax;

	head_ = *head;
	while (head_)
	{
		head_ = head_->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	head_ = *head;
	_ax = head_->n;
	head_->n = head_->next->n;
	head_->next->n = _ax;
}
