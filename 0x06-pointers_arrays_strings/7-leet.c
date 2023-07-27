#include "main.h"

/**
 * leet - encode
 * @s: poinrter to the string
 * Return: pointer to the array
 */

char *leet(char *s)
{
	int count = 0, i;
	char leet[] = {'a','A','e','E','o','O','t','T','l','L'};
	char rep[] = {'4','4','3','3','0','0','7','7','1','1'};

	while (s[count] != '\0')
	{
		for (i = 0; i < 10; i++)
			if (s[count] == leet[i])
				s[count] = rep[i];
		count++;
	}
	return (s);
}
