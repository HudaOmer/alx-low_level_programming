#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: array size
 * @c: charater, initialize the array with it
 * Return: NULL or the allocated array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (!size)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
