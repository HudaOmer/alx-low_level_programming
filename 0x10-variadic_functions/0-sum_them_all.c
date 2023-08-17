#include <stdarg.h>

/**
 * sum_them_all - Sum all of the passed parameters
 * @n: The number of parameters that will be passed after n
 *
 * Return: The sum if n > 0, otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);

	return (sum);
}
