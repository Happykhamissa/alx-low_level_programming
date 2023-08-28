#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer to the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *T;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			T = (*h)->next;
			free(*h);
			*h = T;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
