#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Provides the count of elements within a linked list
 * @h: Reference to the list_t structure
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
