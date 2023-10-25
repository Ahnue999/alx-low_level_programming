#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 *
 * @head: the head pointer.
 * Return: a pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	ptr1 =  NULL;
	ptr2 = *head;

	while (ptr2)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr1;
		ptr1 = *head;
		*head = ptr2;
	}
	*head = ptr1;

	return (*head);
}
