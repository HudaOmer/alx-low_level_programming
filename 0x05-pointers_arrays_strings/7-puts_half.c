#include "main.h"

/**
 * puts_half - print half array
 * @str: points to array of chars
 * Descripyion: does the job second (half)
 *
 * Return: the length
 */

void puts_half(char *str)
{
	int half, count = 0;

	while (*(str + count) != '\0')
		count++;
	half = count / 2;
	for (--count; half <= count; half++)
		_putchar(str[half]);
	_putchar('\n');
}
