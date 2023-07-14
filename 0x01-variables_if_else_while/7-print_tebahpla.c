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
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
