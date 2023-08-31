#include "monty.h"
/**
 *pop - removes the top element of the stack
 *@stack: double pointer to the stack
 *@line_number: line of the command
 *Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;

	current = *stack;
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
}
