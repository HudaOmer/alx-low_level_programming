#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to the head of list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *loop, *node;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		loop = (*head)->next;
		free(*head);
		*head = loop;
		return (1);
	}

	loop = *head;
	index--;
	while (index && loop->next)
	{
		loop = loop->next;
		index--;
	}
	if (index)
		return (-1);

	node = loop->next;
	loop->next = node->next;
	free(node);

	return (1);
}
