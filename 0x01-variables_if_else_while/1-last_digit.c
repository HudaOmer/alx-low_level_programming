#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description:  more headers goes there
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;
	printf("Last digit of %i is %i", n, mod);
	if (mod > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (n < 6 && n != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}
	/* end of my code */
	return (0);
}
