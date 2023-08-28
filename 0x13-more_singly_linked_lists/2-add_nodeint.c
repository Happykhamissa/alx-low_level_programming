#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to linked list
 * @n: data to inert
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_data;

	new_data = malloc(sizeof(listint_t));
	if (!new_data)
		return (NULL);

	new_data->n = n;
	new_data->next = *head;
	*head = new_data;

	return (new_data);
}
