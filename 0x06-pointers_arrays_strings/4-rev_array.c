#include "main.h"

/**
 * reverse_array - reverse
 * @a: pointer to int a array
 * @b: poimter to int b size of array
 * Description: reverses the content of an array of integers
 * 
 * Return: void
 */

void reverse_array(int *a, int n)
{
	unsigned int temp;
	int i = 0;

	n--;
	while (i <= n / 2)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
