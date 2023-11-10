#include "lists.h"

/**
 * add_dnodeint - Function to create a new head for a linked list.
 * @head: The first or old head.
 * @n: The new integer to passed to the head.
 * Return: Point to the new created head, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Headnew;

	Headnew= malloc(sizeof(dlistint_t));
	if (Headnew == NULL)
		return (NULL);

	Headnew->n = n;
	Headnew->prev = NULL;
	Headnew->next = *head;
	if (*head)
		(*head)->prev = Headnew;
	*head = Headnew;

	return (Headnew);
}
