#include "lists.h"

/**
 * get_dnodeint_at_index - return some node's value
 * @head: pointer to the head of the list
 * @index: index of the node to find its value
 * Return: the value of the node or NULL on failure 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	for (;head && index; index--)
		head = head->next;

	return (head);
}
