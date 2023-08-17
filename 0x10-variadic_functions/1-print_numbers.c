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

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(mylist, int));
		if (separator && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
