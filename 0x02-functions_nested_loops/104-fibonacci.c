#include <stdio.h>

/**
 * main - main
 * Description: fibonacci
 * Return: 0 Always (success)
 */

int main(void)
{
	unsigned long int arr[98];
	unsigned long int i, j1, j2, k1, k2;

	arr[0] = 1;
	arr[1] = 2;
	printf("%lu, ", arr[0]);
	printf("%lu", arr[1]);
	for (i = 2; i < 92; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (i != 91)
			printf(", %lu", arr[i]);
	}
	i--;
	j1 = arr[i - 1] / 1000000000;
	j2 = arr[i - 1] % 1000000000;
	k1 = arr[i] / 1000000000;
	k2 = arr[i] % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
