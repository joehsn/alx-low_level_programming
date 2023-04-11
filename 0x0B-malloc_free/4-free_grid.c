#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 *
 * @grid: a param
 *
 * @height: a param
 *
 * Return: a void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

