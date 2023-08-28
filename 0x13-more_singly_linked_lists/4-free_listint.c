#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *T;

	while (head)
	{
		T = head->next;
		free(head);
		head = T;
	}
}
