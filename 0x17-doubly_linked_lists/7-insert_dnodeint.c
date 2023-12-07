#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a certain position.
 * @h: the head pointer.
 * @idx: the idx to insert at.
 * @n: the data of the new node.
 *
 * Return: the address of the new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;


	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for (curr = *h; idx > 0 && curr->next; idx--, curr = curr->next)
		;
	if (idx != 0)
		return (NULL);
	if (!curr->next)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = new->next =  NULL;

	new->prev = curr->prev;
	new->next = curr;
	curr->prev = new;
	(curr->prev)->next = new;

	return (new);
}
