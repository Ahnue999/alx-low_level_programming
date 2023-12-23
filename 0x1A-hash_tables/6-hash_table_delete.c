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
	hash_node_t *tmp1, *tmp2;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp2 = ht->array[i];
		while ((tmp1 = tmp2) != NULL)
		{
			tmp2 = tmp2->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
		}
	}
	free(ht->array);
	free(ht);
}
