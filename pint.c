#include "monty.h"
/**
 * print_top - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void print_top(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can not print, stack is empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
