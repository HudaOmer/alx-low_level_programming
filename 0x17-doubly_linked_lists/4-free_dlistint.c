#include "lists.h"

/**
 * free_dlistint - free a linke list
 * @head: pointer to the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *(loop);

	while (head)
	{
		loop = head->next;
		free(head);
		head = loop;
	}

}
