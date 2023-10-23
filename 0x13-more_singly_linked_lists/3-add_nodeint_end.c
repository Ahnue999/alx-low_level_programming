#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a
 * linked list.
 *
 * @head: the head pointer.
 * @n: the integer to add.
 *
 * Return: the number of elements.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;


	temp = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (temp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ptr;
	}

	return (*head);
}
