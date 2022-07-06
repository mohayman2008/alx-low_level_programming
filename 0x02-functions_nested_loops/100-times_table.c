#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number of times table
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int product;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		_putchar(i * j + 48);
		j++;
		while (j <= n)
		{
			product = i * j;
			_putchar(',');
			_putchar(' ');

			if (product < 100)
				_putchar(' ');
			else
				_putchar(product / 100 + 48);

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product % 100) / 10 + 48);
			_putchar(product % 10 + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
