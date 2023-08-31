#include "monty.h"
/**
 *add - adds the top two elements of the stack
 *@stack: stack storing data
 *@line_number: line of the command
 *Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int i = 0, sum = 0;
	stack_t *temp;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
		fclose(buffer.fd);
		free(buffer.line);
		free(temp);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	pop(stack, line_number);
}
