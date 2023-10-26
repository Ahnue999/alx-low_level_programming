#include "main.h"

/**
 * binary_to_uint - converts a binary to an integer.
 * @b: a pointer to a string containing the binary.
 *
 * Return: the unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, count, result;
	int i;

	if (!b)
		return (0);

	length = result = 0;
	while (b[length])
		length++;

	count = 1;

	for (i = length - 1; i >= 0; i--, count *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * count;
	}

	return (result);
}
