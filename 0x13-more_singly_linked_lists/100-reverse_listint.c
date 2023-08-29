#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: pointer to the list to be reversed
 * Return: pointer to the reversedd list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *loop = NULL, *extra = NULL;

	while (*head)
	{
		loop = (*head)->next;
		(*head)->next = extra;
		extra = *head;
		*head = loop;
	}
	*head = extra;
	return (*head);
}
