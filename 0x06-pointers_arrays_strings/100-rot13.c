#include "main.h"

/**
 * rot13 - encode
 * @s: pointer to array
 * Return: pointer also*/

char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, count = 0;

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alpha[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
