#include "main.h"

/**
 * _memset - set a byte to a memory adress
 * @s: a pointer to the first adress of memory
 * @b: the filler byte
 * @n: the number of bytes to fill
 * Return: a pointer to the first address of memory
 */
char *_memset(char *s, char b, unsigned int n) 
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
