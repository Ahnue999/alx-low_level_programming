#include "hash_tables.h"

/**
 * shash_table_create - creats a hash table.
 *
 * @size: the size.
 * Return: the table or NULL if failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	shash_node_t **arr;
	unsigned long int i;

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	arr = malloc(sizeof(shash_node_t *) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new->array = arr;
	new->size = size;
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}

/**
 * add_m_shash - adds a node at the beginning.
 * @h: head of linked list.
 * @key: key.
 * @value: value.
 *
 * Return: new node.
 */
shash_node_t *add_m_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));
	if (!tmp)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;
	return (tmp);
}

/**
 * add_j_shash - adds a node to DLL of shash table.
 *
 * @ht: table.
 * @node: new node.
 * Return: void.
 */
void add_j_shash(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while (tmp1)
	{
		ret = strcmp(node->key, tmp1->key);
		if (ret == 0)
			return;
		else if (ret < 0)
		{
			node->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = node;
			else
				ht->shead = node;

			tmp1->sprev = node;
			node->snext = tmp1;


			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp2->snext;
	}

	node->sprev = tmp2;
	node->snext = NULL;

	if (ht->shead)
		tmp2->snext = node;
	else
		ht->shead = node;

	ht->stail = node;
}

/**
 * shash_table_set - adds an element to a shash table.
 * @ht: the table.
 * @key: the key to add.
 * @value: the value of the key.
 *
 * Return: 1 if success otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	unsigned long int index;

	if (!ht || !key || !(*key))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = add_m_shash(&(ht->array[index]), key, value);
	if (!new)
		return (0);

	add_j_shash(ht, new);
	return (1);
}

/**
 * shash_table_get - retrive an element from a table.
 * @ht: the table.
 * @key: key to retrive.
 *
 * @Return: value of @key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a table.
 * @ht: table to print.
 *
 * Return: no return.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *delim;

	if (!ht)
		return;

	delim = "";
	printf("{");

	tmp = ht->shead;

	while (tmp)
	{
		printf("%s'%s': '%s'", delim, tmp->key, tmp->value);
		delim = ", ";
		tmp = tmp->next;
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - prints a hash table reversed.
 * @ht: the table.
 *
 * Return: none.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *delim;

	if (ht == NULL)
		return;

	printf("{");
	delim = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", delim, tmp->key, tmp->value);
		delim = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a table.
 * @ht:the table.
 *
 * Return: no return.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp1, *tmp2;
	unsigned long int i;

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
