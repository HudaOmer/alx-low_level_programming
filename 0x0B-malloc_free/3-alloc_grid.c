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
	int **s;

	if (width < 1 || height < 1)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(sizeof(int) * width);
		if (*(s + i) == NULL)
		{
			for (i--; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}

	return (s);
}
