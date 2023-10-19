#include "lists.h"

/**
 * list_len - returns the length of a list.
 * @h: the list.
 * Return: the length.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
