#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @size: the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1 ; i <= size ; i++)
	{
		j = 1;

		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
