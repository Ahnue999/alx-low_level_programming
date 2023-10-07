#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * malloc_checked - allocates memory using malloc
  * @b: the number of bytes to allocate
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int) * b);

	if (p == NULL)
		exit(98);

	return (p);
}
