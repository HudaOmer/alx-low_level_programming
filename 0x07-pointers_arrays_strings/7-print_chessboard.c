#include "main.h"

/**
 * print_chessboard - print typr
 * @a: 2d array pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;

	while (i < 64)
	{
		_putchar(a[i / 8][i % 8]);
		i++;
		if (!(i % 8) && i)
			_putchar('\n');
	}
}
