#include "main.h"
/**
 * print_times_table - func
 * @n: inpun int
 * Description: If n is greater than 15 or less than 0 the function no
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, num;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (num < 100)
				{
					_putchar(' ');
					if (num < 10)
						_putchar(' ');
				}
			}
			if (num < 10)
				_putchar(num + '0');
			else if (num < 100)
			{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			}
			else
			{
			_putchar(num / 100 + '0');
			_putchar((num / 10) % 10 + '0');
			_putchar(num % 10 + '0');
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
