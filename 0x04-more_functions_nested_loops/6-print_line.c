#include "main.h"

/**
 * print_line - prints a line using '_'
 * @n: the length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
