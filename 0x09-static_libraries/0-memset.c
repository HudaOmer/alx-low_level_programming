#include "main.h"

/**
 * _memset - a function
 * @s: pointer to array
 * @b: character to insert
 * @n: first n bytes of the memory area pointed to by s
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
