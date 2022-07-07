#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int num = 0;

	while (i < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar(num / 10 + 48);
			}
			_putchar(num % 10 + 48);
			num++;
		}
		i++;
		_putchar('\n');
	}
}
