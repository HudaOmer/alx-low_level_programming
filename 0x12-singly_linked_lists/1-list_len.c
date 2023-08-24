#include "lists.h"

/**
 * list_len - print list_t typr
 * @h: singular linked list node
 * Return:no of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *node;

	node = h;
	while (node)
	{
		node = node->next;
		n++;
	}

	return (n);
}
