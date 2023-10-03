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
	int *p;
	int **tr;
	int i, size;

	size = width * height;

	tr = (int **)malloc(sizeof(int *) * size);

	if (tr == NULL)
		return ('\0');

	*tr = &p

	for (i = 0; i <  size; i++)
	{
		*(p + i) = 0;
	}

	return (p);
}

