#include "main.h"

/**
 * print_square - prints a square of size n
 * @size: the size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
