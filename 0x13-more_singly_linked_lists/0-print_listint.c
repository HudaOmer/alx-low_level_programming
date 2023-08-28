#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t type
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *loop;

	loop = h;
	while (loop)
	{
		printf("%d\n", loop->n);
		loop = loop->next;
		n++;
	}
	return (n);
}
