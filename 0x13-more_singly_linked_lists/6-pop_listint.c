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

	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;

	return ((*head)->n);
}
