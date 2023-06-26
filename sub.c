#include "monty.h"
/**
  *substract_- substration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void substract_(stack_t **head, unsigned int counter)
{
	stack_t *_ax;
	int sub, nodes__;

	_ax = *head;
	for (nodes__ = 0; _ax != NULL; nodes__++)
		_ax = _ax->next;
	if (nodes__ < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	_ax = *head;
	sub = _ax->next->n - _ax->n;
	_ax->next->n = sub;
	*head = _ax->next;
	free(_ax);
}
