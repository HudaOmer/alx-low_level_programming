#include "main.h"

/**
 * _strlen - return length of a string
 * @s: points to array of chars
 * Descripyion: does the job
 *
 * Return: the length
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}

/**
 * binary_to_uint - convert
 * @b: string of chars
 * Return: the number or 0 if null or not 0,1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, two = 1;
	int length;

	if (!b)
		return (0);

	length = _strlen(b) - 1;
	while (*(b + length))
	{
		if (*(b + length) == '1')
			decimal += two;
		else if (*(b + length) == '0')
			;
		else
			return (0);
		two *= 2;
		length--;
	}
	return (decimal);
}
