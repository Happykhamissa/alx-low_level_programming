#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the linked list
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *second_node;
	int first_node;

	if (!head || !*head)
		return (0);

	first_node = (*head)->n;
	second_node = (*head)->next;
	free(*head);
	*head = second_node;

	return (first_node);
}
