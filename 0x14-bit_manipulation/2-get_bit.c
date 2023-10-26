#include "main.h"

/**
 * get_bit - get a bit at a certain index.
 * @n: the integer.
 * @index: the index to get its bit.
 *
 * Return: the unsigned integer.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index)
	{
		n >>= 1;
		index--;
	}

	return (n & 1);
}
