#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t s = 0;
	ssize_t readline_ = 1;
	stack_t *_stack_ = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readline_ > 0)
	{
		cont = NULL;
		readline_ = getline(&cont, &s, file);
		bus.content = cont;
		counter++;
		if (readline_ > 0)
		{
			exec(cont, &_stack_, counter, file);
		}
		free(cont);
	}
	freestack(_stack_);
	fclose(file);
return (0);
}
