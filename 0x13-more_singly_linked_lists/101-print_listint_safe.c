#include "lists.h"

/**
 * print_listint_safe - prints a list of integers.
 *
 * @head: the head pointer.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *ptr;


	ptr = head;

	if (ptr == NULL)
		exit (98);

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		i++;
	}

	return (i);
}
