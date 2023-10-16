#include "main.h"

/**
 * _strchr - search for a chatacter
 * @s: poiter to string
 * @c: character to be found
 * Return: pointer to where c is found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
