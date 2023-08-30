#include "lists.h"

/**
 * find_listint_loop - detect loop
 * @head: list to search at
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1 = head;
	listint_t *p2 = head;

	if (!head)
		return (NULL);
	while (p1 && p2 && p2->next)
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
		{
			break;
		}
	}
	if (!p2 || !p2->next)
		return (NULL);
	p1 = head;
	while (p1->next != p2->next)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return (p1->next);
}
