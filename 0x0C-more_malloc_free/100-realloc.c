#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * _realloc - realloc
  * @ptr: a pointer to the old allocated memory
  * @old_size: the size of the old allocated memory
  * @new_size: the size of the new allocated memory
  * Return: a pointer to the allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr)
}
