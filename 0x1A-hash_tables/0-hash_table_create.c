#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the hash table.
 *
 * Return: a table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **arr;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new->array = arr;
	new->size = size;

	return (new);
}
