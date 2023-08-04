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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
