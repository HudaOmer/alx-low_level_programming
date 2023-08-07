#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - copies array content
 * @str: string to be copied
 * Return: NULL or the allocated array
 */

char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *s;

	while(*(str + i) != '\0')
	{
		size++;
		i++;
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
