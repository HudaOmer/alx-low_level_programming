#include "variadic_functions.h"

/**
 * sum_them_all - sum the numbers
 * @n: required no of ints
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list variadic;
	unsigned int oh;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(variadic, n);
	for (oh = 0; oh < n; oh++)
		sum += va_arg(variadic, int);
	va_end(variadic);
	return (sum);
}
