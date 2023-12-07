#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the specified index.
 * @head: the head pointer.
 * @index: the index of the node to get.
 *
 * Return: a pointer of the node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	for (curr = head; index > 0; curr->next, index--)
		;

	return (curr);
}
