#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: pointer of head
 * @n: int to be inserted
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *loop;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	loop = *head;
	while (loop->next)
		loop = loop->next;

	loop->next = new;
	return (new);
}
