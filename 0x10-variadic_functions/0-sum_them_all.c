#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: numbers to be summed
 * Return: the sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int oh;
	int sum = 0;
	va_list variadic;

	if (n == 0)
		return (0);
	va_start(variadic, n);
	for (oh = 0; oh < n; oh++)
		sum += va_arg(variadic, int);
	va_end(variadic);
	return (sum);
}
