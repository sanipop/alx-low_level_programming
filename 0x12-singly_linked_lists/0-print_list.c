#include <stdio.h>
#include "lists.h"

/**
 * print_list - Displays every element within a linked list
 * @h: Reference to the list_t structure for printing
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}

	return (b);
}
