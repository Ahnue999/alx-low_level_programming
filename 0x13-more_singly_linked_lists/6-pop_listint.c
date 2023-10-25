#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * linked lis.
 *
 * @head: the head pointer.
 * Return: the new head data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int headn;

	if (!(*head))
		return (0);

	ptr = *head;
	headn = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (headn);
}
