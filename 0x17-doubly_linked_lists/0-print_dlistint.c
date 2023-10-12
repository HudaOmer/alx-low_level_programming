#include "lists.h"

/**
 * print_dlistint - prints elements of double linked list
 * @h: pointer to head of the list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

/** make sure that you are in the head (all)*/
	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
