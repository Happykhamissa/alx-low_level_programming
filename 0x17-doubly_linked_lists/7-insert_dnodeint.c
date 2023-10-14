#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int count = 0;

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    while (temp != NULL)
    {
        if (count == idx - 1)
        {
            new_node->prev = temp;
            new_node->next = temp->next;

            if (temp->next)
                temp->next->prev = new_node;

            temp->next = new_node;
            return new_node;
        }

        count++;
        temp = temp->next;
    }

    free(new_node);
    return NULL;
}
