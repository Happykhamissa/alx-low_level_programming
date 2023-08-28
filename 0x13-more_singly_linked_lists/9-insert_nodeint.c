#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the linked list
 * @idx: the index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_insert;
	listint_t *T = *head;

	new_insert = malloc(sizeof(listint_t));
	if (!new_insert || !head)
		return (NULL);

	new_insert->n = n;
	new_insert->next = NULL;

	if (idx == 0)
	{
		new_insert->next = *head;
		*head = new_insert;
		return (new_insert);
	}

	for (i = 0; T && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_insert->next = T->next;
			T->next = new_insert;
			return (new_insert);
		}
		else
			T = T->next;
	}

	return (NULL);
}
