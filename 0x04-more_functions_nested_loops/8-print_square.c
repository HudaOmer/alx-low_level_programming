#include "main.h"

/**
 * print_square - print
 * @n: int input
 * Dscription: prints line
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
