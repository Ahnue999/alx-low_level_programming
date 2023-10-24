#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a
 * linked list.
 *
 * @head: the head pointer.
 * @n: the integer to add.
 *
 * Return: the number of elements.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
