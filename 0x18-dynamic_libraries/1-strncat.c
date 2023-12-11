#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: the string to be appended to
  * @src: the string to append
  * @n: the number of characters to take from src
  * Return: the rusulting string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	for (k = 0; k < n; k++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
