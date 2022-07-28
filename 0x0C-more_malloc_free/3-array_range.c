#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min (included)
 *	to max (included)
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to allocated memory containing the array
 *	or NULL if allocation fails or if min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (!ptr)
		return (NULL);

	for (i = min ; i <= max ; i++)
		ptr[i - min] = i;
	return (ptr);
}
