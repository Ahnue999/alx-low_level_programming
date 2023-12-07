#include "lists.h"

/**
 * sum_dlistint - sums all member of a doubly linked list.
 * @head: the head pointer.
 *
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum = 0;

	if (head)
	{
		for (sum = 0, curr = head; curr; sum += curr->n, curr = curr->next)
			;
	}
	return (sum);
}
