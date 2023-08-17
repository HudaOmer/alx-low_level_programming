#include <stdlib.h>
#include <stdio.h>

/**
 * main - opcode
 * @argc: Argument Count
 * @argv: Argumenr Vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, number_of_bytes;
	char *point_to_main = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_of_bytes - 1; i++)
		printf("%02hhx ", point_to_main[i]);

	printf("%02hhx\n", point_to_main[i]);

	return (0);
}
