#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	char *delim;

	if (!ht)
		return;

	delim = "";
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			printf("%s'%s': '%s'", delim, curr->key, curr->value);
			delim = ", ";
			curr = curr->next;
		}
	}
	printf("}\n");
}
