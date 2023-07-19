#include <stdio.h>

/**
 * main - main
 * Description: fibonacci
 * Return: 0 Always (success)
 */

int main(void)
{
	long int arr[50];
	int i;

	arr[0] = 1;
	arr[1] = 2;
	printf("%li, ", arr[0]);
	printf("%li", arr[1]);
	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		printf(", %li", arr[i]);
	}
	return (0);
}
