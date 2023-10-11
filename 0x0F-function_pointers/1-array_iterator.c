#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - commits an action to all array members
  * @array: the array
  * @size: the size of the array
  * @action: the action to commit
  * Return: no return
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
