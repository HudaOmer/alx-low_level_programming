#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * print_number - M
 * @n: input int
 * Description: sth
 * Return: void
 */

void print_number(int n)
{
	int i, ten = 1, count = 0, x;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar('0');
	x = n;
	while (x > 0)
	{
		x /= 10;
		count++;
	}
	for (i = 1; i < count; i++)
		ten *= 10;
	while (count)
	{
		_putchar((n / ten) % 10 + '0');
		count--;
		ten /= 10;
	}
}
