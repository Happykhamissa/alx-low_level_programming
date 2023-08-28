#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *T;

	if (head == NULL)
		return;

	while (*head)
	{
		T = (*head)->next;
		free(*head);
		(*head) = T;
	}
}
