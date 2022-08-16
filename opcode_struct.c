#include "monty.h"

/**
 * get_op_code - checks for opcode's function and executes it
 * @token: opcode from stdin
 * @line_number: line number
 */
int get_op_code(char *token, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t operation[] = {
		{"pall", pall}, {"pint", pint},
		{NULL, NULL}
	};

	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			(operation[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	printf("L%d: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
