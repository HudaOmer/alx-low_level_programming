#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies strings
 * @src: source string
 * @dest: destination
 * Description: does the job
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (src[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
