#include <stdio.h>

/**
 *  main - main function
 *
 *  Description: print alphabets part 2
 *
 *  Return: Always 0 (success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
