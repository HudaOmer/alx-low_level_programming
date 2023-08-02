#include "main.h"

/**
 * _strlen_recursion - length
 * @s: array pointer
 * Return: int no of characters
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * comp - compare
 * @s: array pointer
 * @st: start
 * @e: end
 * Return: 0, 1
 */

int comp(char *s, int st, int e)
{
	if (*(s + st) == *(s + e))
	{
		if (st == e || st == e + 1)
			return (1);
		else
			return (0 + comp(s, st + 1, e - 1));
	}
	return (0);
}

/**
 * is_palindrome - is or not?
 * @s: pointer to string
 * Return:: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
