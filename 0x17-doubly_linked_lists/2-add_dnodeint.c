#include "lists.h"

/**
 * add_dnodeint - adds a node to the begenning of a doubly linked list.
 * @head: the head pointer.
 * @n: the new node data.
 *
 * Return: the address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!head)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
