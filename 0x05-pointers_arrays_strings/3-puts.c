#include "main.h"

/**
 * _puts - print sentence
 * @str: pointer of array
 * Descripton: neck hurts
 *
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
