#include "main.h"

/**
 * rev_string - function
 * @s: string input
 * Description: reverse the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp;

	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	if (count % 2 != 0)
	{
		for (i = count; i >= (count + 1) / 2; i--)
		{
			temp = *(s + i);
			*(s + i) = *(s + count - i);
			*(s + count - i) = temp;
		}
	}
	else
	{
		for (i = count; i >= count / 2; i--)
		{
			temp = *(s + i);
			*(s + i) = *(s + count - i);
			*(s + count - i) = temp;
		}
	}
}
