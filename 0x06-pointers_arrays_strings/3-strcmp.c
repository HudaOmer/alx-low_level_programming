#include "main.h"

/**
 * _strcmp - comparison
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Description: compare the stings
 *
 * Return: 0 is equal -15 if s1 is less 15 if s1 is more
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0, areequal = 1;

	while (s1[count1] != '\0')
		{
			if (s1[count1] != s2[count1])
			{
				areequal = 0;
				break;
			}
			count1++;
		}
	if (areequal)
		return (0);
	else
		return (s1[count1] - s2[count1]);
}
