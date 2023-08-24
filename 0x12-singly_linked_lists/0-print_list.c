#include "lists.h"

/**
 * print_list - print list_t typr
 * @h: singular linked list node
 * Return:no of elements
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *node;

	node = h;
	while (node)
	{
		if (!node->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		node = node->next;
		n++;
	}

	return (n);
}
