#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: the copy
  * @src: the source
  * @n: the number of characters to be copied
  * Return: the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int k;


	for (k = 0; k < n; k++)
	{
		if (src[k] == '\0')
			break;
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
