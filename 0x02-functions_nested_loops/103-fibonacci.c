#include <stdio.h>

/**
 * main - main
 * Description: fibonacci
 * Return: 0 Always (success)
 */

int main(void)
{
	long int arr[50], sum = 3;
	int i;

	arr[0] = 1;
	arr[1] = 2;
	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] % 2 == 0 && arr[i] > 4000000)
		{
			printf("%li", sum);
			printf("\n");
			return (0);
		}
		sum += arr[i];
	}
	return (0);
}
