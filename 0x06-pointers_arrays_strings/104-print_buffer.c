#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print
 * @b: arraay pointer
 * @size: array size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, count = 0;

	if (size <= 0)
		printf("\n");
	else
	{
		while (size > 0)
		{
			printf("%.8x: ", count);
			for (i = count; i < count + 10; i++)
			{
				if (!(size > 0))
					printf("  ");
				else
					printf("%.2x", b[i]);
				if (i % 2 == 1)
					printf(" ");
				size--;
			}
			size += 10;
			for (i = count; size > 0 && i < count + 10; i++)
			{
				if (b[i] < 32 || b[i] > 126)
					printf(".");
				else
					printf("%c", b[i]);
				size--;
			}
			puts("");
			count += 10;
		}
	}
}
