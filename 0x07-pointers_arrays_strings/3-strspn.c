#include "main.h"

/**
 * _strspn - function
 * @s: array to look in
 * @accept: array to search for
 * Return: no of occurances
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i = 0, count = 0;

	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				count++;
		i++;
	}
	return (count);
}
