#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: doubly linked list storing the data
 * @n: line of the command
 */

void pint(stack_t **stack, unsigned int n)
{
	stack_t *current = NULL;

	current = *stack;
	if (current == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", n);
		exit(EXIT_FAILURE);
	}

	dprintf(STDOUT_FILENO, "%d\n", current->n);
}
