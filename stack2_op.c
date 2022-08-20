#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to stack
 */
void rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *bottom = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (bottom->next)
		bottom = bottom->next;
	bottom->next = *stack;
	(*stack)->prev = bottom;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to stack
 */
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *bottom = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (bottom->next)
		bottom = bottom->next;
	bottom->next = *stack;
	(*stack)->prev = bottom;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
	*stack = bottom;
}
