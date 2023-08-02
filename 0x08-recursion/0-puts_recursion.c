#include "main.h"

/**
 * _puts_recursion - print type
 * @s: pointer to string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
