#include "monty.h"

/**
 * push - adds a new element to the top of stack
 * @stack: pointer to stack
 * @line_number: istruction's line number
 * @num: value of the element to add
 */
void push(stack_t **stack, __attribute__((unused)) unsigned int line_number, int num)
{
	stack_t *new;
	
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(num);
	new->prev = NULL;
	new->next = NULL;
	
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
