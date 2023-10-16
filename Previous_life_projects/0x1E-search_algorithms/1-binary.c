#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted integer array using the
 *		Binary search algorithm
 *		(The array should be sorted in ascending order)
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the searched value is located
 *		or (-1) if valued is not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;
	int idx;

	if (!array || size <= 0)
		return (-1);

	printf("Searching in array: %d", array[0]);
	for (i = 1 ; i < size ; i++)
	{
		printf(", %d", array[i]);
	}
	putchar('\n');

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_search(array, mid, value));
	idx = binary_search(array + mid + 1, size - mid - 1, value);
	if (idx == -1)
		return (-1);
	return (mid + 1 + idx);
}
