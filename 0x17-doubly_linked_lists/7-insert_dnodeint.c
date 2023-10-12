#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node given its index
 * @h: A pointer to the head of the list
 * @idx: index at which n shall be inserted
 * @n: value to insert
 * Return: address of the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; tmp && idx != 1; idx--)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = add_dnodeint(&(tmp->next), n);
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
