#include <stdio.h>

/**
 * main - main function
 * Description: prime numbers
 * Return: 0 always success
 */

int main(void)
{
	unsigned long int maxprime, i, n = 612852475143;

	while (n % 2 == 0)
	{
		maxprime = 2;
		n >>= 1;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
		maxprime = i;
		n = n / i;
		}
	}
	if (n > 2)
	       	maxPrime = n;
	printf("%lu\n", maxprime);
}
