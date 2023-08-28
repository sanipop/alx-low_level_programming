#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
return NULL;

listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return NULL;

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return new_node;
}

listint_t *current = *head;
for (unsigned int i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return NULL; // If idx is out of bounds
}
current = current->next;
}

if (current == NULL)
{
free(new_node);
return NULL; // If idx is out of bounds
}

new_node->next = current->next;
current->next = new_node;

return new_node;
}
