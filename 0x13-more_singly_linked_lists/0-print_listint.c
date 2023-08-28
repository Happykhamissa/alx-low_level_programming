#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the linked list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Node_Number = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		Node_Number++;
	}
	return (Node_Number);
}
