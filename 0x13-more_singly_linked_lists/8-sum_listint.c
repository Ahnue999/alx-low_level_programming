#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list.
 *
 * @head: the head pointer.
 * Return: the sum or (0) if empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;

	if (!ptr)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
