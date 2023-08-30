#include "lists.h"

/**
 * free_listint_safe - frees lists with loops
 * @h: pointer to the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int isloop;
	listint_t = *loop;
	size_t length = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		isloop = *h - (*h)->next;
		if (isloop > 0)
		{
			loop = (*h)->next;
			free(*h);
			*h = loop;
			length++;
		}
		else
		{
			free(*h);
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
