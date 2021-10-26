#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: input 2D array of integers to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
