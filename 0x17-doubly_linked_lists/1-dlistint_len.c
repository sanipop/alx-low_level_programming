#include "lists.h"

/**
 * dlistint_len - function for counting  dlistint_t list elements.
 * @h: the starting point of the linked list.
 * Return: count of the number of element.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t num = 0;

	while (num)
	{
		num++;
		list = list->next;
	}

	return (num);
}
