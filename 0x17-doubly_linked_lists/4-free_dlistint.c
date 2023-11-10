#include "lists.h"

/**
 * free_dlistint - function to free a list.
 * @head: the entry point of the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *pointer_next;

	if (head)
	{
		current_node = head;
		pointer_next = head->next;
		while (pointer_next)
		{
			free(current_node);
			current_node = pointer_next;
			pointer_next = pointer_next->next;
		}
		free(current_node);
	}
}
