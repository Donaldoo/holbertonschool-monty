#include "monty.h"

/**
 * main - function for monty
 * @ac: number of arguments
 * @av: opcode file
 * Return: 0
 */ 
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(av[1], stack);
	return (0);
}
