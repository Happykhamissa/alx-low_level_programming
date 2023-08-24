#include "lists.h"
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the linked list
 * @str: pointer to the string added at the end
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = end_node;
		return end_node;
	}
	while (temp->next)
		temp = temp->next;

	temp->next = end_node;

	return (end_node);
}
