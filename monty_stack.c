#include "monty.h"

/**
 * push - pushes a node to the stack
 * @stack: stack doubly linked list
 * @n: list node integer
 */
void push(stack_t **stack, unsigned int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = (*stack);
	new_node->prev = NULL;

	if ((*stack) != NULL)
		(*stack)->prev = new_node;

	(*stack) = new_node;
}
