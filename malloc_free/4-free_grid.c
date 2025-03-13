#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees grid created by alloc_grid.
 *
 * @grid: 2D array made in alloc_grid.
 * @height: Height of grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
