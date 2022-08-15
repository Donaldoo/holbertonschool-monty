#include "monty.h"

/**
 * get_op_code - checks for opcode's function and executes it
 * @token: opcode from stdin
 * @line_number: line number
 */
void(*get_op_code(char *token, unsigned int line_number))(stack_t **, unsigned int)
{
	int i;

	instruction_t operation[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
			return (operation[i].f)
	}

	printf("L%d: unknown instruction %s\n", line_number, token);
	return (NULL);
}
