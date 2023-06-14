#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array/grid
 * @grid: 2D array/grid to free
 * @height: Height dimension of the grid
 *
 * Description: Frees the memory allocated for the grid
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}

