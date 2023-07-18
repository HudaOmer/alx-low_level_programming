#include "main.h"

/**
 * times_table - func
 *
 * Description: ok
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			num = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (num < 10)
				{
					_putchar(' ');
				}
			}
			if (num < 10)
			{
			_putchar(num + '0');
			}else
			{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			}
			_putchar(',');
		}
		_putchar('\n');
	}

}
