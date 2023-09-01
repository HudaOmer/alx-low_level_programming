#include "main.h"

/**
 * get_bit - get bit at index
 * @n: the number
 * @index: the index of bit
 * Return: the bit 0,1 or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
