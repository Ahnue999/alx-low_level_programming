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
	hash_node_t **list, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		list = &(ht->array[i]);
		tmp = *list;
		while (*list)
		{
			*list = ((*list)->next);
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
