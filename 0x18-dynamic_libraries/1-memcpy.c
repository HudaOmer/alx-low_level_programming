#include "main.h"

/**
 * _memcpy - a function
 * @dest: pointer to array
 * @src: memory area
 * @n: bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
