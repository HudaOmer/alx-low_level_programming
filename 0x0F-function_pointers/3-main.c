#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 succcess
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*action)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	action = get_op_func(argv[2]);
	if (!action || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", action(a, b));
	return (0);
}
