#include "variadic_functions.h"

/**
 * print_all - print all kinds
 * @format: pointer can't change
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *nil, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					nil = va_arg(list, char *);
					if (!nil)
						nil = "(nil)";
					printf("%s%s", sep, nil);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
