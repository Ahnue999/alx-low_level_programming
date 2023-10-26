#include "main.h"

/**
 * flip_bits - finds the number of bits you need to flip
 * to get from one integer to another.
 * @n: the first integer.
 * @m: the second integer.
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	int a, b;

	while (n || m)
	{
		a = (n & 01);
		b = (m & 01);
		if (a != b)
			flips++;
		n >>= 1;
		m >>= 1;
	}

	return (flips);
}
