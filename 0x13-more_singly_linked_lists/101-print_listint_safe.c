#include "lists.h"

/**
 * free_listptr - frees a list of pointers.
 * @head: The head pointer.
 *
 * Return: no thing.
 */
void free_listptr(listptr_t **head)
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
 * print_listint_safe - prints a linked list (safely?).
 * @head: the head pointer.
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listptr_t *headptr, *newptr, *toadd;

	headptr = NULL;

	while (head)
	{
		newptr = malloc(sizeof(listptr_t));
		if (newptr == NULL)
			exit(98);

		newptr->ptr = (void *)head;
		newptr->next = headptr;
		headptr = newptr;

		toadd = headptr;

		while (toadd->next != NULL)
		{
			toadd = toadd->next;
			if (head == toadd->ptr)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listptr(&headptr);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	free_listptr(&headptr);
	return (i);
}
