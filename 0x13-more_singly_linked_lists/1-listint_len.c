#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked list.
 * @h: the head pointer.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}

	return (i);
}
