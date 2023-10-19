#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list.
 * @head: the list pointer (head).
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
