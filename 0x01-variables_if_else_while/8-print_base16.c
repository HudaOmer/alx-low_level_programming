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

	for (i = 48; i <= 57; i++)
		putchar((char)i);
	for (i = 97; i <= 103; i++)
		putchar((char)i);
	putchar('\n');

	return (0);
}
