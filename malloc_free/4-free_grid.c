#include <stdlib.h>
#include "main.h"

/**
 *	free_grid - frees a 2 dimensional grid.
 *	@grid: the pointer to the bidimensional grid.
 *	@height: the height of the grid.
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
