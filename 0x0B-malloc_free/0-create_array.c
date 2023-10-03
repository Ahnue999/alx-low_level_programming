#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creats an array of a certain size and fill it
  * @size: the size of the array
  * @c: the character to fill with
  * Return: a pointer to the first element
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');


	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}

