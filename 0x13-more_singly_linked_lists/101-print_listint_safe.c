#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *travers_n = NULL;
	const listint_t *compares_n = NULL;
	size_t counter = 0;
	size_t new_n;

	travers_n = head;
	while (travers_n)
	{
		printf("[%p] %d\n", (void *)travers_n, travers_n->n);
		counter++;
		travers_n = travers_n->next;
		compares_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (travers_n == compares_n)
			{
				printf("-> [%p] %d\n", (void *)travers_n, travers_n->n);
				return (counter);
			}
			compares_n = compares_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
