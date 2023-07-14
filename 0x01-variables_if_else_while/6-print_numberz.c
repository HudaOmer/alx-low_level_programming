#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints alphabets
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar((char)i);
	putchar('\n');

	return (0);
}
