#include <stdlib.h>
#include "main.h"

/**
 * free_grid - will free a 2-dimensional grid previously created
 * @grid: The grid to free
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
