#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sums of the two diagonals of
 *	a square matrix of integers
 * @a: array of integer arrays (2 dimensional array of integers)
 * @size: length of a side of the square matrix a
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - 1 - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
