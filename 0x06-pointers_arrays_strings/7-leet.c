#include "main.h"

/**
 * leet - encode
 * @s: poinrter to the string
 * Return: pointer to the array
 */

char *leet(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		switch (s[count])
		{
			case 'a':
				s[count] = '4';
				break;
			case 'A':
				s[count] = '4';
				break;
			case 'e':
				s[count] = '3';
				break;
			case 'E':
				s[count] = '3';
				break;
			case 'o':
				s[count] = '0';
				break;
			case 'O':
				s[count] = '0';
				break;
			case 't':
				s[count] = '7';
				break;
			case 'T':
				s[count] = '7';
				break;
			case 'l':
				s[count] = '1';
				break;
			case 'L':
				s[count] = '1';
				break;
			default:
				break;
		}
		count++;
	}
	return (s);
}
