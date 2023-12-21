#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table.
 * @ht: the hash table to delete.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **list;

	for (i = 0; i < ht->size; i++)
	{
		list = &(ht->array[i]);
		if (*list)
		{
			free((*list)->key);
			free((*list)->value);
		}
	}
	free(ht->array);
	free(ht);
}
