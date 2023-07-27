#include "main.h"

/**
 * infinite_add - add
 * @n1: array 1 pointer
 * @n2: array 2 poimter
 * @r: result array
 * @size_r: size array r
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s = size_r - 1, i;

	while (s >= 0)
	{
		i = (int)(n1[s]) + (int)(n2[s]);
		if (i < 10)
			r[s] = '0' + i;
		else
		{
			i = i % 10;
			r[s] = '0' + i;
			if (s - 1 >= 0)
				r[s - 1] = r[s - 1] + 1;
			else
			{
				r[s] = '0';
				return (r + 1);
			}
		}
		s--;
	}
	return (r);
}
