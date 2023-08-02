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
