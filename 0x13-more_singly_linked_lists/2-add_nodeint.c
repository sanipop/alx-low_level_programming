#include <stdio.h>
#include <stdlib.h>
#include "lists.h" // Include the header file "lists.h" which should contain the listint_t struct definition

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element (node), or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}

