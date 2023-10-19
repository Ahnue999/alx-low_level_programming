#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node into the end of a list.
 * @head: the list pointer (head).
 * @str: the string to add
 * Return: the address of the new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
