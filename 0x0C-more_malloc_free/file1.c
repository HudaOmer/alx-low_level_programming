#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatinate two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: pointer to the allocated new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, size = 0;

	while (*(s2 + i) != '\0')
	{
		size++;
		i++;
	}
	if (size < n)
		n = size;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		size++;
		i++;
	}
	s = malloc(sizeof(char) * (size + n + 1));

	i = 0;
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
		while (*s1 != '\0' && size != 0)
		{
			*(s + i) = *s1;
			s1++;
			size--;
			i++;
		}
	if (s2 != NULL)
		while (*s2 != '\0' && n != 0)
		{
			*(s + i) = *s2;
			s2++;
			i++;
			n--;
		}
	*(s + i) = '\0';
	return	(s);
}
