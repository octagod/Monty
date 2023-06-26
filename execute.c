#include "monty.h"
/**
* exec - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t options[] = {
				{"push", push_}, {"pall", print_stack}, {"pint", print_top},
				{"pop", pop_},
				{"swap", swap_},
				{"add", add_top_two},
				{"nop", nothing_},
				{"sub", substract_},
				{"div", _divide},
				{"mul", f_mul},
				{"mod", modulus_},
				{"pchar", printchar_},
				{"pstr", print_top_string},
				{"rotl", rotate_stack_top},
				{"rotr", rotate_stack_bottom},
				{"queue", queue_},
				{"stack", print_stack_top},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *option;

	option = strtok(content, " \n\t");
	if (option && option[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (options[i].opcode && option)
	{
		if (strcmp(option, options[i].opcode) == 0)
		{	options[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (option && options[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, option);
		fclose(file);
		free(content);
		freestack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
