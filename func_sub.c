#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack
  *@head: head
  *@counter: line
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *b;
	int c, i;

	b = *head;
	for (i = 0; b != NULL; i++)
		b = b->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	c = b->next->n - b->n;
        b->next->n = c;
	*head = b->next;
	free(b);
}
