#include "main.h"

/**
 * reverse_array - reverse the order of elements in an array
 * @a: array
 * @n: number of elements in a[]
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
