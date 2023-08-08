#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - oh my god
 * @str: input string
 * Return: 2d array
 */

char **strtow(char *str)
{
	int k = 0, i = 0, count = 0, x = 1, words = 0;
	char **s;

	if (*str == '\0' || str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		if (str[i] == ' ')
			x = 1;
		else if (x == 1)
		{
			count++;
			x = 0;
		}
		i++;
	}
	x = 0;
	s = malloc(sizeof(char *) + (count + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	
	for (i = 0; count > words && str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (; str[i] != ' '; i++)
				x++;
			s[words] = malloc(sizeof(char) * (x + 1));
			i -= x;
			for (k = 0; x > 0; x--, k++, i++)
				s[words][k] = str[i];
			s[words][k] = '\0';
			words++;

		}
		else
			continue;
	}
	s[words] = NULL;
	return (s);
}
