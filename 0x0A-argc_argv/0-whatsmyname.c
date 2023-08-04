#include <stdio.h>

/**
 * main - main function
 * @argc: int (arg count)
 * @argv: array (arg vector)
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
