#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers
 *		using the Interpolation search algorithm
 *
 * @array: Pointer to an ascendingly ordered integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The first index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int interpolation_search(int *array, size_t size, int value)
{
	int pos, start = 0, end = size - 1, size_i = size;

	if (!array || size < 1)
		return (-1);

	while (start < end)
	{
		pos = start + (((double) (end - start) / (array[end] - array[start]))
			* (value - array[start]));
		printf("Value checked array[%d] ", pos);

		if (pos < 0 || pos >= size_i)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
		{
			for (; pos > 0 && array[pos - 1] == value ; pos--)
				printf("Value checked array[%d] = [%d]\n", pos - 1, array[pos - 1]);
			return ((int) pos);
		}
		if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}

	return (-1);
}
