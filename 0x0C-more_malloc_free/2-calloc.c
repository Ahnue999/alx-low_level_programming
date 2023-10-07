#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * _calloc - allocate blocks of memory of a certain size
  * @nmemb: the number of blocks
  * @size: the size
  * Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i, csize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	csize = nmemb * size;

	p = malloc(csize);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < csize; i++)
		*(p + i) = 0;

	return (p);
}
