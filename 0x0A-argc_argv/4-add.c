#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: int (arg count)
 * @argv: array (arg vector)
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, not = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][not] != '\0')
		{
			if (!isdigit(argv[i][not]))
			{
				printf("Error\n");
				return (1);
			}
			not++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
