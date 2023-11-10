#include "lists.h"

/**
 * get_dnodeint_at_index - Function to find and return a node
 * @head: entry point of the node.
 * @index: the node to find.
 * Return: the nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int num = 0;

	while (list && num != index)
	{
		num++;
		list = list->next;
	}
	if (list && num == index)
		return (list);
	return (NULL);
}
