#include "main.h"

/**
  * _strcpy - prints a string
  * @dest: string to copy to
  * @src: string to copy from
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (length >= 0)
	{
		if (*src == '\0')
			length++;
			break;
		length++;
	}

	for (i = 0; i < length; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
