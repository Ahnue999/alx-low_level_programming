#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list.
 * @head: the head pointer.
 * @n: the new node data.
 *
 * Return: the address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}

	return (new);
}
