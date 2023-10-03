#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - make a 2d grid
 * @grid: a pointer to the grid
 * @height: the height of the grid
 * Return: a pointer to the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
