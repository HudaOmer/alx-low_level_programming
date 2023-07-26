#include "main.h"

/**
 * _strncpy - conctinate a part only
 * @dest: a pointer to destination array
 * @src: a pointer to source array
 * @n: an input integer indicating how much to append
 * Description: concatinate n characters of source into dest
 *
 * Return: pointer to source
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n)
	{
		if (src[i] == '\0')
			break;
		*(dest + i) = src[i];
		i++;
		n--;
	}
	while (n)
	{
		*(dest + i) = '\0';
		i++;
		n--;
	}
	return (dest);
}
