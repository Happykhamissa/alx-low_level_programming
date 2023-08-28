#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(T);
		return (1);
	}

	while (i < index - 1)
	{
		if (!T || !(T->next))
			return (-1);
		T = T->next;
		i++;
	}


	current = T->next;
	T->next = current->next;
	free(current);

	return (1);
}
