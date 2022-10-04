#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by the alloc_grid function
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL || height == 0)
		return;

	for (c = 0 ; c < height ; c++)
		free(grid[c]);

	free(grid);
}
