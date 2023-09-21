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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i <n; i++)
		dest[i] = '\0';

	return (dest);
}
