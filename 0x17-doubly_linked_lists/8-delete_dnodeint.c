#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node given its index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 in success or -1 on failure 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *loop = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index && loop; i++)
		loop = loop->next;

	if (!loop)
		return (-1);

	if (loop == *head)
	{
		*head = loop->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		loop->prev->next = loop->next;
		if (loop->next)
			loop->next->prev = loop->prev;
	}

	return (1);
}
