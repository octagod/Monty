#include "monty.h"
/**
 * add_top_two - adds the top two elements of the stack.
 * @h_: stack head
 * @index: line_number
 * Return: no return
*/
void add_top_two(stack_t **h_, unsigned int index)
{
	stack_t *head;
	int length = 0, _a_x;

	head = *h_;
	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", index);
		fclose(bus.file);
		free(bus.content);
		freestack(*h_);
		exit(EXIT_FAILURE);
	}
	head = *h_;
	_a_x = head->n + head->next->n;
	head->next->n = _a_x;
	*h_ = head->next;
	free(head);
}
