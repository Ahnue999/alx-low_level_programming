#include "main.h"

/**
 * _memcpy - copy a memory to another
 * @dest: where copied memory is stored
 * @src: the adress to be copied
 * @n: the number of bytes to copy
 * Return: a pointer to the first byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
