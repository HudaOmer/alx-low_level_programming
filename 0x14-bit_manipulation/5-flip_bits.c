#include "main.h"

/**
 * flip_bits - XORing
 * @n: first number
 * @m: second number
 * Return: no of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_bit = 0;

	while (xor)
	{
		if (xor & 1)
			flip_bit++;
		xor = xor >> 1;
	}
	return (flip_bit);
}
