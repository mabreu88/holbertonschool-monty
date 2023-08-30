#include "monty.h"
/**
 * push - creates a new node at the beginning of stack
 * @stack: double pointer to the stack
 * @line_number: line number of the command
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = new_Node(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
