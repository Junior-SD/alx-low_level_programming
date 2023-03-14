#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - will create 2 dimetional array of integers
 * @width: The width of the srray
 * @height: The length of the array
 *
 * Return: The poiner to the grid, othewise NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *) malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free(grid);
			for (y = 0; y <= x; y++)
				free(grid[y]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
