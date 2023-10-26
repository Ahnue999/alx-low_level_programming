#include "main.h"

/**
 * set_bit - set a bit at a certain index to [1].
 * @n: the integer.
 * @index: the index to set its bit.
 *
 * Return: the unsigned integer.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int c = 1 << index;

	if (index > 63)
		return (-1);

	*n = *n | c;

	return (1);
}
