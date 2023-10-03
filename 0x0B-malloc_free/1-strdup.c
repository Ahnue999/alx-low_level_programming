#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - copy a string to a space in the heap
  * @str: the string to copy
  * Return: a pointer to the first char of the string
  */
char *_strdup(char *str)
{
	char *p;
	int i, length;

	if (str == NULL)
		return ('\0');

	length = strlen(str);


	p = (char *)malloc(sizeof(char) * length + 1);

	if (p == NULL)
		return ('\0');

	for (i = 0; i <= length; i++)
		*(p + i) = *(str + i);

	return (p);
}

