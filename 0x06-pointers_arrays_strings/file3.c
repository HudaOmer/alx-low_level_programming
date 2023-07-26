#include "main.h"

/**
 * _strcmp - comparison
 * @s1: pointer to the first string
 * @s3: pointer to the second string
 * Description: compare the stings
 *
 * Return: 0 is equal -15 if s1 is less 15 if s1 is more
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0, count2 = 0;

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (count1 < count2)
		return (-15);
	else if (count1 > count2)
		return (15);
	else
		while (count1 && s1[count1] == s2[count1])
		{
			count1--;
		}
	if (!count1)
		return (0);
	else

}
