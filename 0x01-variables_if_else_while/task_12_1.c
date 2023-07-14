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
	int print_num(int a, int b, int c, int d)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(' ');
	putchar(c + '0');
	putchar(d + '0');
	putchar(',');
	return (0);
	}
	
	for (i = 0; i < 10 ; i++)
	{
		for (j =  0; j < 10; j++)
		{
			for (x =  i; x < 10; x++)
			{
				for (y = j + 1; y < 10; y++)
				{
					print_num(i,j,x,y);
				}
				if(y = 10 && x < 9 )
					print_num(i,j,x+1,0);
			}
		}
	}
	putchar('\n');
	return (0);
}
