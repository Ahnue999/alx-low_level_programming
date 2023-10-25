#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a certain position.
 *
 * @head: the head pointer.
 * @idx: the index to insert at.
 * @n: the inserted node data.
 * Return: the sum or (0) if empty.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2, *new;

	ptr = ptr2 = *head;
	if (ptr == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		ptr = ptr->next;
		*head = new;
		(*head)->next = ptr;
	}
	else
	{
		while (idx)
		{
			if (!ptr2)
				return (NULL);
			ptr = ptr2;
			ptr2 = ptr2->next;
			idx--;
		}
		ptr->next = new;
		new->next = ptr2;
	}

	return (new);
}
