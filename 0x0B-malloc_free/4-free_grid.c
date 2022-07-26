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

	if (!grid || height < 0)
		return;

	free(grid);
}
