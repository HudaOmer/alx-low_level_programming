#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end if the list
 * @head: pointer to head of the list
 * @n: value of the element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;
	return (new);
}
