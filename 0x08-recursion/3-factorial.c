#include "main.h"

/**
 * factorial - find it, math
 * @n: input number
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
