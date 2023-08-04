#include "main.h"

/**
 * _isupper - check the code.
 * @ch: an input character
 * Description: find upper or nor
 * Return: 1 when upper 0 otherwise.
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
