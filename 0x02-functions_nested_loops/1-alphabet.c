#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: prints alphabets
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
