#include "lists.h"

/**
 * print_dlistint - prints all members of a doubly linked list.
 * @h: the head pointer.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr;
	size_t count;

	curr = h;

	for (count = 0; curr; count++, curr = curr->next)
		printf("%d\n", curr->data);

	return (count)
}
