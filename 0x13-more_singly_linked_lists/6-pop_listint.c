#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
	listint_t *y;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	y = (*head)->next;
	free(*head);
	*head = y;

	return (x);
}
