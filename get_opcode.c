#include "monty.h"
/**
 * get_opcode - function to handle the opcode
 * @stack: stack or queue
 * @arg: command entered by user
 * @dat: value enterd by user
 * @linecounter: line being processed
 * Return: nothing
 */
int get_opecode(stack_t **stack, char *arg, char *dat, int linecounter)
{
	int x = 0;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (op[x].opcode)
	{
		if (!strcmp(arg, op[x].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (_isdigit(dat) == 1)
					value = atoi(dat);
				else
					return (1);
			}
			op[x].f(stack, (unsigned int)linecounter);
			break;
		}
		x++;
	}
	if (!op[x].opcode)
		return (2);

	return (0);
}
