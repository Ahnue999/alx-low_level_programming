#include "main.h"

/**
 * _memset - sets a memory position to a byte
 * @s: the address to fill
 * @b: the filler character
 * @n: the number of bytes to fill
 * Return: a pointer to the first byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
