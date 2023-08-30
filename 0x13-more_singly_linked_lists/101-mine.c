#include "lists.h"

/**
 * print_listint_safe - can print lists with a loop
 * @head: list to print
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *p1 = head, *p2 = head;
	int flag = 0;

	while (p2 && p2->next)
	{
		printf("[%p] %d\n", (void *)p1, p1->n), nodes++;
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		p1 = head;
		while (p1->next != p2->next)
		{
			printf("[%p] %d\n", (void *)p2, p2->n), nodes++;
			p1 = p1->next;
			p2 = p2->next;
		}

		printf("[%p] %d\n", (void *)p2, p2->n), nodes++;
		printf("-> [%p] %d\n", (void *)p2->next, p2->next->n);
	}
	else
	{
		while (p1)
		{
			printf("[%p] %d\n", (void *)p1, p1->n);
			p1 = p1->next, nodes++;
		}
	}
	return (nodes);
}
