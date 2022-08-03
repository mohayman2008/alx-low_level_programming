#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an array of integers
 * @array: integers array
 * @size: number of elements in @array
 * @cmp: function that determine matching criteria
 *
 * Return: the index of the first match or -1 if no matches or incorrect inputs
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
