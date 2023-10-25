#include "lists.h"

/**
 * free_listptr2 - frees a list of pointers.
 * @head: The head pointer.
 *
 * Return: no thing.
 */
void free_listptr2(listptr_t **head)
{
	listptr_t *temp1, *temp2;

	if (head)
	{
		temp2 = *head;
		while ((temp1 = temp2) != NULL)
		{
			temp2 = temp2->next;
			free(temp1);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list of integer (safely?).
 * @h: the head pointer.
 *
 * Return: No thing.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listptr_t *headptr, *newptr, *toadd;
	listint_t *current;

	headptr = NULL;

	while (*h)
	{
		newptr = malloc(sizeof(listptr_t));
		if (newptr == NULL)
			exit(98);

		newptr->ptr = (void *)h;
		newptr->next = headptr;
		headptr = newptr;

		toadd = headptr;

		while (toadd->next != NULL)
		{
			toadd = toadd->next;
			if (h == toadd->ptr)
			{
				*h = NULL;
				free_listptr2(&headptr);
				return (i);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		i++;
	}
	*h = NULL;
	free_listptr2(&headptr);
	return (i);
}
