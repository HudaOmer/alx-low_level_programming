#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum
 * @n: numbers to be summed
 * Return: the sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int oh, sum = 0;
	va_list variadic;

	oh = n;
	if (oh == 0)
	{
		return (0);
	}
	va_start(variadic, n);
	while (oh)
	{
		sum += va_arg(variadic, int);
		oh--;
	}
	return (sum);
}
