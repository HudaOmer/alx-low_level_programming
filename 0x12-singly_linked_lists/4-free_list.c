#include "lists.h"

/**
 * free_list - add list_t type
 * @head: singular linked list node
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head->next)
	{
		free(head);
		free(head->str);
		head = head->next;
	}
	free(head->str);
	free(head);

}
