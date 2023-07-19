#include <stdio.h>

/**
 * main - main
 * Description: summ of %5 %3 =0
 * Return: 0 Always (success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
