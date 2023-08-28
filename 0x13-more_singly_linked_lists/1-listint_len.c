#include "lists.h"

/**
 * listint_len - counts the number of nodes of a listint_t list
 * @h: listint_t type
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *loop;

	loop = h;
	while (loop)
	{
		loop = loop->next;
		n++;
	}
	return (n);
}
