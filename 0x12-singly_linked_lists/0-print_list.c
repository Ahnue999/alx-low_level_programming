#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (nil)\n", temp->len);
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}

	return (i);
}
