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
	int count1 = 0, areequal = 0;

	while (s1[count1] != '\0' && s2[count1] != '\0')
	{
		if (s1[count1] != s2[count1])
		{
			areequal = s1[count1] - s2[count1];
			break;
		}
		count1++;
	}
	return (areequal);
}
