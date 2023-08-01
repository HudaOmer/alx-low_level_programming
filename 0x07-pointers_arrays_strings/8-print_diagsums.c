#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print type
 * @a: array 2d int
 * @size: square size
 * Return: soid
 */

void print_diagsums(int *a, int size)
{
	unsigned long int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i + i * size];
		sum2 += a[size * (i + 1) - (i + 1)];
	}
	printf("%lu, %lu\n", sum1, sum2);
}
