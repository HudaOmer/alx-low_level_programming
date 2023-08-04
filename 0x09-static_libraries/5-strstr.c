#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s;
	char *f;

	while (*haystack != '\0')
	{
		s = haystack;
		f = needle;

		while (*haystack != '\0' && *f != '\0' && *haystack == *f)
		{
			haystack++;
			f++;
		}
		if (!*f)
			return (s);
		haystack = s + 1;
	}
	return (0);
}
