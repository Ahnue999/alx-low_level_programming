#include "hash_tables.h"

/**
 * key_index - returns the index of a key.
 * @key: the key to find.
 * @size: the size of the nodes array.
 *
 * Return: the index where this key should be stored at.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
