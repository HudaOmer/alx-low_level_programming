#include "main.h"

/**
 * reverse_array - reverse
 * @a: pointer to int a array
 * @n: poimter to int b size of array
 * Description: reverses the content of an array of integers
 * 
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i, m;

	n--;
	if (n % 2 == 0)
		m = n / 2;
	else
		m = (n + 1) / 2;
	for (i = 0; i <= m; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
