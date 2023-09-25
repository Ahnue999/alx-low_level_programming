#include "main.h"

/**
 * _memcpy - copy an n byte of memory
 * @dest: a pointer to the first address of memory
 * @src: a pointer to the first address of the memory to be copied
 * @n: the number of bytes to copy
 * Return: a pointer to the first address of memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
