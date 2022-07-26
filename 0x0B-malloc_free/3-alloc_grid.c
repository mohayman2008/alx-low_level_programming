#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate a memory for an integer array of sub-arrays (2d grid)
 *	and initialise the elements of the sub-arrays to 0
 * @width: length of each sub-array
 * @height: length of the array of sub-arrays
 *
 * Return: pointer to the array or NULL (in case of failure to
 *	allocate memory or if width or height <= 0)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int *grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height + sizeof(int) * height * width);
	if (!arr)
		return (NULL);
	grid = (int *) (arr + height);

	for (i = 0 ; i < height ; i++)
	{
		arr[i] = grid + i * width;
		for (j = 0 ; j < width ; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
