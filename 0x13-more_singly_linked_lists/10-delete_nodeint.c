#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain position.
 *
 * @head: the head pointer.
 * @index: the index to delete from.
 * Return: 1 if succeded and 0 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;

	ptr = ptr2 = *head;
	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = ptr2 = NULL;
		return (1);
	}
	else
	{
		while (index)
		{
			if (!ptr2)
				return (-1);
			ptr = ptr2;
			ptr2 = ptr2->next;
			index--;
		}
		ptr->next = ptr2->next;
		free(ptr2);
		ptr2 = NULL;
	}
	return (1);
}
