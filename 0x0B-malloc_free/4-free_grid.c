#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - 2 dimensional grid
 * @grid: the grid to be compiled
 * @height: the height of the grid
 *
 * Return: 0 if successful
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
	free(grid[a]);
	}

	free(grid);
}
