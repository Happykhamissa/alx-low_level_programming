#include <stdio.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp = *head;
    unsigned int count = 0;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    while (temp != NULL)
    {
        if (count == index)
        {
            current = temp->next;
            temp->prev->next = current;
            if (current)
                current->prev = temp->prev;
            free(temp);
            return 1;
        }
        count++;
        temp = temp->next;
    }

    return -1;
}
