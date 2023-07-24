#include "main.h"

/**
 * print_rev - function
 * @s: string input
 * Description: print reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
}
