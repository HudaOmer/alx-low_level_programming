#include "main.h"

/**
 * print_sign - indicates signs
 * @n: An input integer
 * Description: upper and lower
 *
 * Return: 1 if lower , 0 if upper
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
