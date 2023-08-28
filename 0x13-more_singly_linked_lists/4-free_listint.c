#include "lists.h"

/**
 * free_listint - free all allocated pointers
 * @head: head of linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *loop;

	while (head)
	{
		loop = head->next;
		free(head);
		head = loop;
	}
}
