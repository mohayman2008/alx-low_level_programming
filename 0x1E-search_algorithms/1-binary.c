#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 *
 * @array: Pointer to an integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int binary_search(int *array, size_t size, int value)
{
	int size_i, begin = 0, middle, end, i;

	if (!array)
		return (-1);

	size_i = (int) size;
	end = size_i - 1;
	while (begin <= end && begin >= 0 && end < size_i)
	{
		printf("Searching in array: %d", array[begin]);
		for (i = begin + 1 ; i <= end ; i++)
			printf(", %d", array[i]);
		printf("\n");

		middle = (begin + end) / 2;
		if (array[middle] == value)
			return ((int) middle);

		if (array[middle] < value)
			begin = middle + 1;
		else
			end = middle - 1;
	}

	return (-1);

}
