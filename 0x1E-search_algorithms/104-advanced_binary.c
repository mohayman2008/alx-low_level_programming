#include "search_algos.h"

/**
 * advanced_binary - Recursively searches for a value in a sorted array of
 *		integers using the Binary search algorithm
 *
 * @array: Pointer to an ascendingly ordered integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The first index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t middle, i = 1;
	int result;

	if (!array || size < 1)
		return (-1);

	if (size == 1)
	{
		if (*array == value)
			return (0);
		printf("Searching in array: %d\n", array[0]);
		return (-1);
	}

	printf("Searching in array: %d", array[0]);
	for (i = 1 ; i < size ; i++)
		printf(", %d", array[i]);
	printf("\n");

	middle = (size - 1) / 2;

	if (array[middle] >= value)
		return (advanced_binary(array, middle + 1, value));
	/* array[middle] < value */
	result = advanced_binary(array + middle + 1, size - middle - 1, value);
	if (result < 0)
		return (-1);
	return (middle + 1 + result);
}
