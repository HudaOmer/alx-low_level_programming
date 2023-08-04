#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: int (arg count)
 * @argv: array (arg vector)
 * Return: 0
 */

int main(int argc, char **argv)
{
	int cents, i = 0, count = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	while (cents > 0 && i < 5)
	{
		if (cents >= coins[i])
		{
			count += cents / coins[i];
			cents = cents % coins[i];
		}
		i++;
	}

	printf("%d\n", count);
	return (0);
}
