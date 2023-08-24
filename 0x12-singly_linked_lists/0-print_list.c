#include "main.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *p;

	printf("\n[head] =>");
	
	while(ptr != NULL)
	{
		printf(" %d =>",ptr->data);
		ptr = ptr->next;
	}

	printf(" [null]\n");

}
