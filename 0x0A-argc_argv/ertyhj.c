#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * my_atoi - is there a char?
 * @s: string
 * return: 0 or 1
 */

int my_atoi(char *s)
{
	int not = 0;

	while (*s != '\0')
	{
		if (!isdigit(*s))
			printf("%c", *s);
		else
		{
			not = 1;
			printf("not%c\t", *s);
		}
		s++;
	}
	return (not);
}

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
		if (my_atoi((char *)argv + i) == 1)
		{
			not = 1;
			break;
		}
		else
			sum += atoi(argv[i]);
	}
	if (not)
		printf("Error\n, %d", sum);
	else
		printf("%d\n", sum);
	return (not);
}
