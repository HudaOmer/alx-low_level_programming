#include "lists.h"
/**
 * print_dlistint - print double linked list
 * @h: pointer to head
 * Return: No of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
