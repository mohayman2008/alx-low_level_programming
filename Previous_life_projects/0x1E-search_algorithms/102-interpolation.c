#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted integer array using
 *		the Interpolation search algorithm
 *		(The array should be sorted in ascending order)
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the searched value is located
 *		or (-1) if valued is not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, probe;

	if (!array || size < 1)
		return (-1);

	while (lo < hi)
	{
		probe = (double)(hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
		probe += lo;

		if (probe < size)
			printf("Value checked array[%lu] = [%d]\n", probe, array[probe]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", probe);
			return (-1);
		}

		if (array[lo] == value)
			return (lo);
		if (array[probe] < value)
			lo = probe + 1;
		else if (array[probe] > value)
			hi = probe - 1;
		else
		{
			while (array[probe] == array[probe - 1])
				probe--,
				printf("Value checked array[%lu] = [%d]\n", probe, array[probe]);
			return (probe);
		}
	}

	return (-1);
}
