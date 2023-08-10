#include "main.h"
#include <stdlib.h>

/**
 * array_range - array
 * @min: minimum
 * @max: maximum
 * Return: pointer to array of range
 */

int *array_range(int min, int max)
{
	int i, size = max - min + 1;
	int *s;

	if (max < min)
		return (NULL);
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(s + i) = min;
		min++;
	}
	return (s);
}
