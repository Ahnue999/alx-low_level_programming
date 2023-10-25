#include "lists.h"

/**
 * free_listint - frees a list.
 *
 * @head: the head pointer.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	ptr = NULL;
}
