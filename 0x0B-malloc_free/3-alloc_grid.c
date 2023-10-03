#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - make a 2d grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **tr;
	int i, j;

	if (height == 0 || width == 0)
		return ('\0');

	tr = (int **)malloc(sizeof(int *) * height);

	if (tr == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		tr[i] = (int *)malloc(sizeof(int) * width);
		if (tr[i] == NULL)
		{
			free(tr);
			return ('\0');
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tr[i][j] = 0;
	}

	return (tr);
}
