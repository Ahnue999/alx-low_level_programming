#include "main.h"

/*
 * _memset - sets a memory position to a byte
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s)
}