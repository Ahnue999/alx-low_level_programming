#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the string to be appended to
  * @src: the string to append
  * Return: the rusulting string
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
