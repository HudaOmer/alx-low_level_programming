#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatinate
 * @ac: arguments count
 * @av: arguments vector
 * Return: new concatinated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, x = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	s = malloc(sizeof(char) * (count + 1 + ac));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; x++, j++)
			*(s + x) = av[i][j];
		*(s + x) = '\n';
		x++;
	}
	*(s + x) = '\0';
	return (s);
}
