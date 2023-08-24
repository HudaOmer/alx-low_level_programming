#include "lists.h"

/**
 * _strlen - return length of a string
 * @s: points to array of chars
 * Descripyion: does the job
 *
 * Return: the length
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}

/**
 * add_node - add list_t type
 * @head: singular linked list node
 * @str: string to insert
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	head = &new;
	return (new);
}
