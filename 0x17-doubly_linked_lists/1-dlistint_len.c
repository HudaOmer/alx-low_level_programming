#include "lists.h"

/**
 * dlistint_len - return number of nodes in a linked list
 * @h: pointer to the first node in the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
