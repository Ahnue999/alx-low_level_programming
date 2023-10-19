#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	int i = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}

	return (i);
}
