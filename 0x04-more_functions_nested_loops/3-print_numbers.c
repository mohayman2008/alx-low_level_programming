#include "main.h"

/**
 * print_numbers - print the numbers between 0 and 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
