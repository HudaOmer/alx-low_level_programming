#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers
 * @n an int input
 * Description: prints numbers from n to 98 then a line
 * 
 * Return: void*/

void print_to_98(int n)
{
	int i;
	
	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
	}
	else
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
	printf("\n");
}
