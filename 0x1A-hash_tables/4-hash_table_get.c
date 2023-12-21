#include "hash_tables.h"

/**
 * hash_table_get - retrives a value from a hash table.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value of the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **list;

	index = key_index((const unsigned char *)key, ht->size);

	list = &(ht->array[index]);
	while (*list)
	{
		if (strcmp((*list)->key, key) == 0)
			return (*list)->value;
		*list = (*list)->next;
	}
	return (NULL);
}
