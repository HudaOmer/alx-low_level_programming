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
	char *check;
	unsigned int count;

	va_start(mylist, n);

	for (count = 0; count < n; count++)
	{
		check = va_arg(mylist, char *);
		if (check)
			printf("%s", check);
		else
			printf("(nil)");
		if (separator && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
