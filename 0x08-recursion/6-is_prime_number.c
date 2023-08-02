#include "main.h"

/**
 * prime - ooo
 * @n: number
 * @x: trial
 * Return: 0 , 1
 */

int prime(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, x + 1));
}

/**
 * is_prime_number - ooh
 * @n: input number
 * Return: 0 ,or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime(n, 2));
}
