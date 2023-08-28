#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: head of the list
 * @index: node to return
 * Return: the nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	if (!head)
		return (NULL);

	while (index && node->next)
	{
		node = node->next;
		index--;
	}

	if (index)
		return (NULL);
	return (node);
}
