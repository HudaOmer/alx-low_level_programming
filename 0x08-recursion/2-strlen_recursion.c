#include "main.h"

/**
 * _strlen_recursion - length
 * @s: array pointer
 * Return: int no of characters
 */

int x = 0;
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		x++;
		_strlen_recursion(s + 1);
	}
	return (x);
}
