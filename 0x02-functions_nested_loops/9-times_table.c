#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int product;

	while (i < 10)
	{
		j = 0;
		_putchar(i * j + 48);
		j++;
		while (j < 10)
		{
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + 48);
			_putchar(product % 10 + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
