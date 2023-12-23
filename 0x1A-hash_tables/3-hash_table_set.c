#include "hash_tables.h"

/**
 * hash_table_set - adds a element to the hash table.
 * @ht: the hash table to add to.
 * @key: the key to add.
 * @value: the value of the key.
 *
 * Return: 1 when success and 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp && strcmp(key, tmp->key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
