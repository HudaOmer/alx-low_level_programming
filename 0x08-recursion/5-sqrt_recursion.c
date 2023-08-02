#include "main.h"

/**
 * power - to find the root
 * @n: input number
 * @x: trials
 * Return: root
 */

int power(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + power(n, x + 1));
}

/**
 * _sqrt_recursion - find square root
 * @n: input number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (power(n,2));
}
