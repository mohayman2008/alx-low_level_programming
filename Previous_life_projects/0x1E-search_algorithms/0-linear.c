#include "search_algos.h"

/**
 * linear_search - Searches for a value in an integer array using the
 *		Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the searched value is located
 *		or (-1) if valued is not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size < 1)
		return (-1);

	for (; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
	}

	return (-1);
}
