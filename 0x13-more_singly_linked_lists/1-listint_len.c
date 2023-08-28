#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list
 * Return: the length of the list
 */


size_t listint_len(const listint_t *h)
{
	int length_node = 0;

	while (h)
	{
		h = h->next;
		length_node++;
	}
	return (length_node);
}
