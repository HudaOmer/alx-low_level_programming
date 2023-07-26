#include "main.h"

/**
 * _strcat - concatinate
 * @dest: pointer to destinaion* array
 * @src: pointer to sourcce array
 * Description: append dest into srcc
 *
 * Return pointer to the source
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	count--;
	while(dest[i] != '\0')
	{
		*(src + count) = dest[i];
		i++;
		count++;
	}
	return (src);
}
