#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _size - determine the size os an array
 * @s: the array
 * Return: int (size)
 */

int _size(char *s)
{
	int i = 0, count = 0;

	if (s != NULL)
		while (*(s + i) != '\0')
		{
			count++;
			i++;
		}
	else
		return (0);
	return (count);
}

/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the allocated new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, size = 0;

	size = _size(s1) + _size(s2) + 1;
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
		while (*s1 != '\0')
		{
			*(s + i) = *s1;
			s1++;
			i++;
		}
	if (s2 != NULL)
		while (*s2 != '\0')
		{
			*(s + i) = *s2;
			s2++;
			i++;
		}
	*(s + i) = '\0';
	return	(s);
}
