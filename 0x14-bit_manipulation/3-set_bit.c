#include "main.h"

/**
 * set_bit - set a bit at an index
 * @n: the pointer of the number
 * @index: the index of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
