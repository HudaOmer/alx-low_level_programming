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
	int i, j, x, y;

	for (i = 0; i < 10 ; i++)
	{
	       	for (j =  0; j < 10; j++)
		{
			for (x =  i; x < 10; x++)
			{
				for (y = j + 1; y < 10; y++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(x + '0');
					putchar(y + '0');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
