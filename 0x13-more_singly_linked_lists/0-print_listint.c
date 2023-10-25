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
	const listint_t *ptr;

	if (h == NULL)
		return (-1);

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}

	return (i);
}
