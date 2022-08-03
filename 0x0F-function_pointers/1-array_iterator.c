#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 *			an array of integers
 * @array: integers array
 * @size: number of elements in @array
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!action)
		return;
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
