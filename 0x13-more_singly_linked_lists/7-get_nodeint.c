#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a certain index.
 *
 * @head: the head pointer.
 * @index: the index.
 * Return: the node or NULL if doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	ptr = head;

	if (!ptr)
		return (NULL);

	while (index)
	{
		if (!ptr->next)
			return (NULL);
		ptr = ptr->next;
		index--;
	}

	return (ptr);
}
