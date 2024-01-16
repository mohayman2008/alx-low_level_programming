#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of integers
 *		using the Jump search algorithm
 *
 * @array: Pointer to an integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The first index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, start = 0, end = 0;

	if (!array || size < 1)
		return (-1);

	step = sqrt(size);

	for (; end < size && array[end] < value ; start = end, end += step)
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (; start <= end && start < size; start++)
	{
		if (array[start] > value)
			break;

		printf("Value checked array[%lu] = [%d]\n", start, array[start]);

		if (array[start] == value)
			return ((int) start);
	}

	return (-1);
}
