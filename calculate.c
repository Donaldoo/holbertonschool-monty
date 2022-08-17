#include "monty.h"

/**
 * add_ - adds the last 2 elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void add_(stack_t **stack, unsigned int line_number)
{
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a + b;

	pop(stack, line_number);

	(*stack)->n = result;
}


/**
 * sub_ - substracts the top element of the stack from the second top element
 * @stack: stack
 * @line_number: line number
 */
void sub_(stack_t **stack, unsigned int line_number)
{
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = b - a;

	pop(stack, line_number);

	(*stack)->n = result;
}


/**
 * div_ - substracts the top element of the stack from the second top element
 * @stack: stack
 * @line_number: line number
 */
void div_(stack_t **stack, unsigned int line_number)
{
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = b / a;

	pop(stack, line_number);

	(*stack)->n = result;
}

/**
 * mul_ - substracts the top element of the stack from the second top element
 * @stack: stack
 * @line_number: line number
 */
void mul_(stack_t **stack, unsigned int line_number)
{
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = b * a;

	pop(stack, line_number);

	(*stack)->n = result;
}

/**
 * mod_ - substracts the top element of the stack from the second top element
 * @stack: stack
 * @line_number: line number
 */
void mod_(stack_t **stack, unsigned int line_number)
{
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = b % a;

	pop(stack, line_number);

	(*stack)->n = result;
}
