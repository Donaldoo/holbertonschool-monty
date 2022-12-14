#include "monty.h"

/**
 * get_op_code - checks for opcode's function and executes it
 * @token: opcode from stdin
 * @stack: pointer to stack;
 * @line_number: line number
 * Return: Success
 */
int get_op_code(char *token, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t operation[] = {
		{"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap},
		{"nop", nop}, {"add", add_}, {"sub", sub_}, {"div", div_},
		{"mul", mul_}, {"mod", mod_}, {"pchar", pchar}, {"rotl", rotl},
		{"pstr", pstr}, {"rotr", rotr}, {NULL, NULL}
	};

	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			(operation[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
