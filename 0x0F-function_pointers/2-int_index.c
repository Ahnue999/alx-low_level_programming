#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - search an int in an array
  * @array: the array
  * @size: the size of the array
  * @cmp: the comparesion function
  * Return: the first index where the int is found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
