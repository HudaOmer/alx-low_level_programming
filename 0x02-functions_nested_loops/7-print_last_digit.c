#include "main.h"

/**
 * print_last_digit - function
 * @n: An input integer
 * Description: upper and lower
 *
 * Return: 1 if lower , 0 if upper
 */

int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
	}
	else
	{
		n = -1 *  n;
		x = n % 10;
	}
	_putchar('0' +( x % 10));
	return (x % 10);
}
