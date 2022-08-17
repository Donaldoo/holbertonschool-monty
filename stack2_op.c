#include "monty.h"
/**
 *
 */
void pall_stack(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack_t *tmp = *top;


	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 *
 */
void pint_stack(stack_t **top, __attribute__((unused)) unsigned int line)
{
	if (*top != NULL)
		printf("%d\n", (*top)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
}

/**
 *
 */
void add_stack(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack *tmp;

	if (*top == NULL || ((*top)->next == NULL))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	tmp = (*top)->next;
	(*top)->n += (*top)->n;
	pop_stack(top, line_number);
}