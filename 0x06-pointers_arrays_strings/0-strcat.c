#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the string to be appended to
  * @src: the string to append
  * Return: the rusulting string
  */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	j += i;

	for (k = i, l = 0; k < j + 1; k++, l++)
	{
		*(dest + k) = *(src + l);
	}

	return (dest);
}
