#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int limit = 98;
	int i = n;
	int coeff;

	coeff = (limit - n) / abs(limit - n);
	printf("%d", i);
	i += coeff;
	while (coeff * i <= coeff * limit)
	{
		printf(", %d", i);
		i += coeff;
	}
	putchar('\n');
}
