#include "lists.h"

/**
 * print_listint - prints a list of integers.
 * @h: the head pointer.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
