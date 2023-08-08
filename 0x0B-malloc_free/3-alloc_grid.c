#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate 2d array
 * @width: input
 * @height: input int
 * Return: NULLor pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s = malloc(sizeof(int*) * width);

	if (width < 1 || height < 1)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(sizeof(int) * height);
		if (*(s + i) == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
			s[i][j] = 0;
	}

	if (s == NULL)
		return (NULL);
	return (s);
}
