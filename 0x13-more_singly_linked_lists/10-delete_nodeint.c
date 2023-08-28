#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return -1;

listint_t *current = *head;
listint_t *previous = NULL;

if (index == 0)
{
*head = current->next;
free(current);
return 1;
}

for (unsigned int i = 0; current != NULL && i < index; i++)
{
previous = current;
current = current->next;
}

if (current == NULL)
return -1;

previous->next = current->next;
free(current);
return 1;
}
