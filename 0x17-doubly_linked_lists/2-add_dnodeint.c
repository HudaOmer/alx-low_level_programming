#include "lists.h"

/**
 * add_dnodeint - add a new node to the start of linked list
 * @head: double pointer of the head
 * @n: The number to put inside the new node
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
