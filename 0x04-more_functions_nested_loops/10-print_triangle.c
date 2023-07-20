#include "main.h"

/**
 * print_triangle - print
 * @n: int input
 * Dscription: prints line
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < n; j++)
		{
			_putchar(' ');
		}
		for (k = n - i; k < n; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
