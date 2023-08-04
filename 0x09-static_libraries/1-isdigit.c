#include "main.h"

/**
 * _isdigit - check the code.
 * @ch: an input character
 * Description: find upper or nor
 * Return: 1 when digit 0 otherwise.
 */

int _isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
