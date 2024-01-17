#include "search_algos.h"

/**
 * binary - Recursively searches for a value in a sorted array of
 *		integers using the Binary search algorithm
 *
 * @array: Pointer to an ascendingly ordered integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The first index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int binary(int *array, size_t size, int value)
{
	size_t middle, i = 1;
	int result;

	if (!array || size < 1)
		return (-1);

	printf("Searching in array: %d", array[0]);
	for (i = 1 ; i < size ; i++)
		printf(", %d", array[i]);
	printf("\n");

	middle = (size - 1) / 2;

	if (array[middle] == value)
		return (middle);
	if (array[middle] > value)
		return (binary(array, middle, value));
	/* array[middle] < value */
	result = binary(array + middle + 1, size - middle - 1, value);
	if (result < 0)
		return (-1);
	return (middle + 1 + result);
}

/**
 * exponential_search - Searches for a value in an array of integers
 *		using the Exponential search algorithm
 *
 * @array: Pointer to an ascendingly ordered integers array to search in
 * @size: Number of elements in <array>
 * @value: The value to search for
 *
 * Return: The first index where <value> is located or -1 if <array> is NULL
 *	or <value> not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 1;
	int result;

	if (!array || size < 1)
		return (-1);

	for (; end < size && array[end] < value ; end *= 2)
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);

	start = end / 2;
	if (end >= size)
		end = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	result = binary(array + start, end + 1 - start, value);
	if (result < 0)
		return (-1);
	return (start + result);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
	printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
	printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));
	return (EXIT_SUCCESS);
}
