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
	unsigned long int index;
	hash_node_t *new;
	hash_node_t **list;


	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	/* key can't be empty!!!!*/
	if (strcmp(key, "") == 0)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	list = &(ht->array[index]);
	if (!*list)
	{
		*list = new;
		return (1);
	}
	while ((*list)->next)
		*list = (*list)->next;
	(*list)->next = new;
	return (1);
}
