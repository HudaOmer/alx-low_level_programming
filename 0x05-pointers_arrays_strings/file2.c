#include "main.h"
#include <stdio.h>

/**
 * _atoi - function
 * @s: pointer to array
 * Description: oooh
 *
 * Return: an int
 */

int _atoi(char *s)
{
	int i = 0, j, count = 0, minus = 0;
	unsigned int num = 0 , ten = 1;

	while (!(*(s + count) >= '0' && *(s + count) <= '9'))
		{
		if (*(s + count) == '-')
			minus++;
		count++;
	}
 	j = count;
	while (*(s + count) >= '0' && *(s + count) <= '9')
	{
		ten *= 10;
		count++;
		i++;
	}
	count = j;
	for (; i > 0; i--)
	{
		ten /= 10;
		num += (*(s + count) - 48) * ten;
		count++;
	}
	if (minus % 2 == 1)
		num *= -1;
	return (num);

}
