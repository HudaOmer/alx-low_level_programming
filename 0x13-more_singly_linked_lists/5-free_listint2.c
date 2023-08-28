#include "lists.h"

/**
 * free_listint2 - free all allocated pointers
 * and set head to null
 * @head: pointer to the head of linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *loop;

	if (!head)
		return;

	while (*head)
	{
		loop = (*head)->next;
		free(*head);
		*head = loop;
	}
	*head = NULL;
}
