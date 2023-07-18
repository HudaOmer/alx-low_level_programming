#include "main.h"

/**
 *  _isalpha - lower and upper
 * @c: An input character
 * Description: upper and lower
 *
 * Return: 1 if lower , 0 if upper
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
