#include "main.h"
#include <limits.h>

/**
 * print_number - print number using _putchar(char) recursivly
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		print_number(n / 2 * -1);
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
		return;
	}

	if ((n / 10) == 0)
	/* single digit number */
	{
		_putchar(n + 48);
		return;
	}

	print_number(n / 10);
	_putchar(n % 10 + 48);
}
