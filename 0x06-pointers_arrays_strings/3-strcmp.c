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
	int count = 0, arequal = 0;

	while (arequal == 0)
		{
			if ((*(s1 + count) == '\0') && (*(s2 + count) == '\0'))
				break;
			arequal = *(s1 + count) - *(s2 + count);
			count++;
		}

	return (arequal);
}
