#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted integer array using the
 *		Jump search algorithm
 *		(The array should be sorted in ascending order)
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the searched value is located
 *		or (-1) if valued is not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;
	int jump;

	if (!array || size < 1)
		return (-1);

	jump = sqrt(size);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		j = i;
		i += jump;
		if (array[i] >= value)
			break;
	}

	if (array[0] == value)
		return (0);

	printf("Value found between indexes [%lu] and [%lu]\n", j, i);

	for (; j < size && j <= i ; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return ((int) j);
	}

	return (-1);
}
