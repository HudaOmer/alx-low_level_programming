#include "lists.h"

/**
 * sum_dlistint - find the sum of ints in a list
 * @head: pointer to the head
 * Return: The sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
