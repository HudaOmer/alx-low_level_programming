#include "main.h"

/**
 * _abs - determine the absolute value of a number
 * @n: An input integer
 * Description: abs
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
