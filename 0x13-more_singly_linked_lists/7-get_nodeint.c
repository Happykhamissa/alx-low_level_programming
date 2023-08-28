#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: the index of the node, starting at 0
 * Return: pointer the wanted node, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *T = head;

	while (T && i < index)
	{
		T = T->next;
		i++;
	}
	return (T ? T : NULL);
}
