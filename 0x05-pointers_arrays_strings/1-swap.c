#include "main.h"

/**
 * swap_int - swapping ints
 * @a: pointer to integer
 * @b: pointer yo integer
 * Description: swaps using pointers
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}
