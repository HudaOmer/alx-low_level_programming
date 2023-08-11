#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * isnum - a function
 * @s: array to check if it is numbers only
 * Return: 1 if not, 0 success
 */
int isnum(char *s)
{
	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (1);
		s++;
	}
	return (0);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: int 0 success, 98 exit fail
 */

int main(int argc, char **argv)
{
	if (argc != 3 || isnum(argv[1]) == 1 || isnum(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
