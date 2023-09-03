#include "monty.h"
/**
 * pall - print all the values of the stack
 * @stack: double pointer to the stack
 * @n: data to print
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int n)
{
    stack_t *current = NULL;
    (void)n;
    current = *stack;

    while (current != NULL)
    {
        dprintf(STDOUT_FILENO, "%d\n", current->n);
        current = current->next;
    }
}
