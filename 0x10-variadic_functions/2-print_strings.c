#include "variadic_functions.h"

/**
 * print_strings - orint withs separator
 * @separator: char
 * @n: no of int
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int count;

	va_start(mylist, n);

	for (count = 0; count < n; count++)
	{
		printf("%s", va_arg(mylist, char *));
		if (separator && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
