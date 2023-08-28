#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the linked list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Node_Number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Node_Number++;
		h = h->next;
	}
	return (Node_Number);
}
