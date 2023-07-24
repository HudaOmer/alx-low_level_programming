#include "main.h"

/**
 * _strlen - return length of a string
 * @s: points to array of chars
 * Descripyion: does the job
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
