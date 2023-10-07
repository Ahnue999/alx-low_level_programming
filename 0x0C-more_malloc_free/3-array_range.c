#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * array_range - makes an array and fills it
  * @min: the first integer
  * @max: the last integer
  * Return: a pointer to the array
  */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = min; i <= size; i++)
		*(p + i) = i;

	return (p);
}
