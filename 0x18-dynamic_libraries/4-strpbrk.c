#include "main.h"

/**
 * _strpbrk - function
 * @s: array to look in
 * @accept: array to search for
 * Return: null or pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				return (s + i);
		i++;
	}
	return ('\0');
}
