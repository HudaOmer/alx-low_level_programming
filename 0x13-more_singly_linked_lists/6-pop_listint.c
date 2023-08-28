#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of linked list
 * Return: 0 if empty, head node’s data otherwise
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *loop;

	if (!head || !*head)
		return (0);

	n = (*head)->n;

	loop = (*head)->next;
	free(*head);
	*head = loop;

	return (n);
}
