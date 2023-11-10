#include "lists.h"

/**
 * add_dnodeint_end - Function to add node to the end.
 * @head: The entry point of the node.
 * @n: the value of the new end.
 * Return: the adress of the end, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp = *head;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		end->prev = temp;
		temp->next = end;
	}
	else
	{
		*head = end;
		end->prev = NULL;
	}

	return (end);
}
