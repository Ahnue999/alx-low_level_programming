#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (temp != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
