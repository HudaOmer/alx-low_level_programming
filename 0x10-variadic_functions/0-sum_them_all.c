#include "variadic_functions.h"

/**
 * sum_them_all - sum the ints
 * @n: the required int
 *
 * Return: the summ
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;
	va_list mylist;

	va_start(mylist, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(mylist, int);
	}

	va_end(mylist);
	return (sum);
}
