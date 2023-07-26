#include "main.h"

/**
 * _strnca - conctinate a part only
 * @dest: a pointer to destination array
 * @src: a pointer to source array
 * @n: an input integer indicating how much to append
 * Description: concatinate n characters of source into dest
 *
 * Return: pointer to source
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, count = 0;

	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0' && n)
	{
		*(dest + i) = src[i];
		i++;
		n--;
	}
	return (dest);
}
