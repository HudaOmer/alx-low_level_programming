#include "variadic_functions.h"

/**
 * print_numbers - orint withs separator
 * @separator: char
 * @n: no of int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int count;

	va_start(mylist, n);

	for (count = 0; count < n - 1; count++)
	{
		printf("%d%s", va_arg(mylist, int), separator);
	}
	printf("%d\n", va_arg(mylist, int));
}
