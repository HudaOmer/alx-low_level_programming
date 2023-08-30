#include "lists.h"

/**
 * print_listint_safe - can print lists with a loop
 * @head: list to print
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop = NULL, *extra = NULL;
	size_t nodes = 0, n;

	loop = head;
	while (loop)
	{
		printf("[%p] %d\n", (void *)loop, loop->n);
		nodes++;
		loop = loop->next;
		extra = head;
		n = 0;
		while (n < nodes)
		{
			if (loop == extra)
			{
				printf("-> [%p] %d\n", (void *)loop, loop->n);
				return (nodes);
			}
			extra = extra->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (nodes);
}
