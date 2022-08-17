#include "monty.h"

/**
 * pall - prints all elements of the stack
 * @stack: pointer to stack
 * @line_number: instruction's line number
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || stack == NULL)
		return;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	int value;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;
	printf("%d\n", value);
}

/**
 * pchar - prints the char at the top of the stack
 * @stack: pointer to stack
 * @line_number: ine number
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar(value);
	putchar('\n');
}

/**
 * pstr - prints the string at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number, unused variable
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	int value;
	stack_t *tmp;

	if (*stack == NULL || stack == NULL)
	{
		putchar('\n');
		return;
	}

	tmp = *stack;
	while (tmp)
	{
		value = tmp->n;

		if (value < 0 || value > 127)
			break;
		putchar(value);
		tmp = tmp->next;
	}
	putchar('\n');
}
