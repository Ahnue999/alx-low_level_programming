#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a certain position.
 * @head: the head pointer.
 * @index: the index to insert at.
 *
 * Return: 1 if succeded otherwise 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *curr;


	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		return (1);
	}

	for (curr = *h; index > 0 && curr->next; index--, curr = curr->next)
		;
	if (index != 0)
		return (0);
	if (!curr->next)
	{
		curr->prev->next = NULL;
		free(curr);
		return (1);
	}

	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	return (1);
}
