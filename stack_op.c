#include "monty.h"

/**
 * push - adds a new element to the top of stack
 * @stack: pointer to stack
 * @line_number: istruction's line number
 * @num: value of the element to add
 */
void push(stack_t **stack, unsigned int line_number, char *num)
{
	stack_t *new;
	int i;

	if (num == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[0] == '-' && i == 0)
			continue;
		if(isdigit(num[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(num);
	new->prev = NULL;
	new->next = NULL;
	
	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;
}

/**
 * pop - removes the top element of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
}
