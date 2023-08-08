#include "main.h"
#include <stdlib.h>

/**
 * argstostr - */

char *argstostr(int ac, char **av)
{
	int i, j, count, x = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; x++, j++)
			*(s + x) = av[i][j];
		*(s + x) = '\n';
		x++;
	}
	return (s);
}
