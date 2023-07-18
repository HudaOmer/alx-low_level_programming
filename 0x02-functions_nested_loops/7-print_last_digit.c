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

	if ( n >= 0)
	{
		x = n % 10;
		_putchar('0' + x);
		return (x);
	}
	else
	{
		n = n * -1;
		x = n % 10;
		_putchar('0' + x);
		return (x);
	}
}
