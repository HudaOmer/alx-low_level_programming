#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate with different size
 * @ptr: pointer to previosly allocated array
 * @old_size: the old size in bytes
 * @new_size: the new size in bytes
 * Return: pointer to different array or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i, x = old_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (ptr == NULL)
		return (s);
	if (old_size > new_size)
	{
		x = new_size;
	}
	for (i = 0; i < x; i++)
	{
		s[i] = *((char *)ptr + i);
	}

	free(ptr);
	return (s);

}
