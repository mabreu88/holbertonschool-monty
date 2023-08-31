#include "monty.h"
/**
 * push_error - handle push error
 * @fd: file desciptor
 * @line: buffer
 * @stack: stack or queue
 * @count: is a line command
 */
void push_error(FILE *fd, char *line, stack_t *stack, int count)
{
	dprintf(STDERR_FILENO, "L%u: usage: push integer\n", count);
	fclose(fd);
	free(line);
	free_doublelist(stack);
	exit(EXIT_FAILURE);
}

/**
 * ins_error - Error handler
 * @fd: file descriptor
 * @line: buffer
 * @stack: stack or queue
 * @count: is a line command
 * @item: number
 */
void ins_error(FILE *fd, char *line, stack_t *stack, char *count, int item)
{
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", item, count);
	fclose(fd);
	free(line);
	free_doublelist(stack);
	exit(EXIT_FAILURE);
}

/**
 * free_doublelist - frees a double linked list
 * @head: pointer to head of double linked list
 * Return: void
 */
void free_doublelist(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
