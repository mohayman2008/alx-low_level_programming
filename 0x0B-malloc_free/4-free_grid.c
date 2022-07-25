#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free dyn-allocated array of dyn-allocated sub-arrays
 * @grid: dynically allocated array of dynamically allocated sub-arrays
 *	of integers
 * @height: length of the array of sub-arrays
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
