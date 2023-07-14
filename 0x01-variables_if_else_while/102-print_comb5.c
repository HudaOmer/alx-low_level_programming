#include <stdio.h>

/**
 * main - main function
 *
 * Description: that was great
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x, y;
	int i, j, k, l;

	for (x = 0; x < 99; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			l = y % 10;
			k = y / 10;
			j = x % 10;
			i = x / 10;
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(l + '0');
			putchar(',');
		}

	}

	putchar('\n');
	return (0);
}
