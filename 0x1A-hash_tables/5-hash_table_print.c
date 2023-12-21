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
	int first = 1;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (first)
			{
				printf("\'%s\': \'%s\'", curr->key, curr->value);
				first = 0;
			}
			printf(", \'%s\': \'%s\'", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
