#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: doubly linked list storing the data
 * @line_number: line of the command
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *head = *stack;
	int i = 0, tempdata, headdata;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		fclose(buffer.fd);
		free(buffer.line);
		free(temp);
		free(head);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	headdata = head->n;
	temp = temp->next;
	tempdata = temp->n;
	temp->n = headdata;
	head->n = tempdata;
}
