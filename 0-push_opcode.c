#include "monty.h"

/**
 * push - Function that pushes nodes in the stack
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void push(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 0);
}
void stack(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 1);
}
void queue(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 2);
}
