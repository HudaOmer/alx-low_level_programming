#include "main.h"

/**
 * _strcat - concatinate
 * @dest: pointer to destinaion array
 * @src: pointer to sourcce array
 * Description: append src into dest
 *
 * Return: pointer to the source
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0')
	{
		*(dest + count) = src[i];
		i++;
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}
