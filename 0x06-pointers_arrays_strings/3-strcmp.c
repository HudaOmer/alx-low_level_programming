#include "main.h"

/**
 * _strcmp - comparison
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Description: compare the stings
 *
 * Return: 0 is equal - if s1 is less if s1 is more
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
