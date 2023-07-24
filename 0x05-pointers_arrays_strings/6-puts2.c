#include "main.h"

/**
 * puts2 - print sentence
 * @str: pointer of array
 * Descripton: neck hurts
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count += 2;
	}
	_putchar('\n');
}
