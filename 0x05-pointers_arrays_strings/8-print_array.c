#include "main.h"
#include <stdio.h>

/**
 * print_array - print half array
 * @a: points to array of ints
 * @n: input intger
 * Descripyion: does the job second (half)
 *
 * Return: the length
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%i", a[count]);
		if (count < n - 1)
			printf(", ");
	}
	printf("\n");
}
