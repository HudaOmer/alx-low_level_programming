#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: allocated space
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		free(s);
		exit(98);
	}
	return (s);
}
