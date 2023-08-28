#include "lists.h"

/**
 * sum_listint - returns the sum (n) of a linked list.
 * @head: pointer to the linked list
 * Return: sum of all the data (n), 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *T;
	int sum = 0;

	for (T = head; T != NULL; T = T->next)
	{
		sum += T->n;
	}

return (sum);
}
