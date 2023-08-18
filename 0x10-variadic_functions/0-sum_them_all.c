#include <stdarg.h>
/**
 * sum_them_all - returns the sum of parameters.
 * @n: passed numbers.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(valist, int);
	va_end(valist);
	return (sum);
}
