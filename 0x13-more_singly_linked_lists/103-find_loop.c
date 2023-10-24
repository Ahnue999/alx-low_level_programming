#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list.
 * @head: the head pointer.
 *
 * Return: the index of the node where the
 * loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *previous, *ptr2;

	ptr2 = previous = head;

	while (ptr2 && head && ptr2->next)
	{
		head = head->next;
		ptr2 = ptr2->next->next;
		if (head == ptr2)
		{
			head = previous;
			previous = ptr2;

			while(1)
			{
				ptr2 = previous;
				while (ptr2->next != head && ptr2->next != previous)
				{
					ptr2 = ptr2->next;
				}
				if (ptr2->next == head)
					break;

				head = head->next;
			}
			return (ptr2->next);
		}
	}

	return (NULL);
}
