#ifndef _MONTY_H_
#define _MONTY_H_
/*
 * Allowed functions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct buffer - structure to store the buffer
 * @fd: File descriptor
 * @line: Line to getline
 *
 * Description: To handle the file and getline
 */
typedef struct buffer
{
	FILE *fd;
	char *line;
} buffer_t;

extern buffer_t buffer;
extern int value;


/*
*Prototypes
*/
stack_t *new_Node(int n);
int main(int argc, char *argv[]);
int _isdigit(char *c);
void nop(stack_t **stack, unsigned int line_number);
void push_error(FILE *fd, char *line, stack_t *stack, int count);
void ins_error(FILE *fd, char *line, stack_t *stack, char *count, int item);
void free_doublelist(stack_t *head);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int n);
void pint(stack_t **stack, unsigned int n);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void execute_cmd(char *argv);
int get_opecode(stack_t **stack, char *arg, char *dat, int linecounter);

#endif