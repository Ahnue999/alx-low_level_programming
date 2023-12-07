#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a doubly linked list.
 * @h: the head pointer.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t count;

	curr = h;

	for (count = 0; curr; count++, curr = curr->next)
		;

	return (count);
}
