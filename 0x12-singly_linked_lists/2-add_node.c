#include "lists.h"

/**
 * add_node - adds a node int the beginning of a list.
 * @head: the list pointer (head).
 * @str: the string to add
 * Return: the address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *temp;
	size_t i = 0;

	tmep = malloc(sizeof(list_t));
	if (temp == NULL)
		return(NULL);

	temp->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	temp->len = i;
	temp->next = *head;
	*head = temp;

	return(head);
}
