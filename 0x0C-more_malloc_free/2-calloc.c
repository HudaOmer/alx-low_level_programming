#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: oh
 * @size: the size
 * Return:  pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(s + i) = 0;
	return (s);
}
