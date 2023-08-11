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
	unsigned int size1 = 0, size2 = 0, size = 0, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (size2 < n)
		n = size2;
	size = size1 + n;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
