#include "main.h"

/**
  * _strcpy - prints a string
  * @dest: string to copy to
  * @src: string to copy from
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}

	return (dest);
}
