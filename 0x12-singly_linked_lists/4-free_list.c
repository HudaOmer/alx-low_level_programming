#include "lists.h"

/**
 * free_list - add list_t type
 * @head: singular linked list node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *loop;

	while (head)
	{
		loop = head->next;
		free(head->str);
		free(head);
		head = loop;
	}
}
