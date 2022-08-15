#include "monty.h"

/**
 * pall - prints all elements of the stack
 * @stack: pointer to stack
 * @line_number: instruction's line number
 */
void pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
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