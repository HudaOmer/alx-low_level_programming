#include "main.h"

/**
 * cap_string - capitalize
 * @s: pointer to array
 *
 * Return: pointer to the string
 */

char *cap_string(char *s)
{
	int i, count = 0;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[count] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[count] == sep_words[i] && s[count + 1] >= 'a' && s[count + 1] <= 'z')
				s[count + 1] = s[count + 1] - 32;
		}
		count++;
	}
	return (s);
}
