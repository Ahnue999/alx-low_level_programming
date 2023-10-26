#include "main.h"

/**
 * set_bit - set a bit at a certain index to [1].
 * @n: the integer.
 * @index: the index to set its bit.
 *
 * Return: the unsigned integer.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int count = 1;

	while (index)
	{
		count *= 2;
		index--;
	}

	*n = *n & ~count;
	return (1);
}
