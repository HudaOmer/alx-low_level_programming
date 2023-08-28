#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node
 * @head: pointer to the head of list
 * @idx: index to insert in
 * @n: int to insert
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *loop;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	loop = *head;
	idx--;
	while (idx && loop->next)
	{
		loop = loop->next;
		idx--;
	}
	if (idx)
		return (NULL);

	new->next = loop->next;
	loop->next = new;

	return (new);
}
