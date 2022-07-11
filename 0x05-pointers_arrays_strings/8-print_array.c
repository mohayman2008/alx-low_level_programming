#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers to stdout
 * @a: array of integer
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	_putchar('\n');
}
