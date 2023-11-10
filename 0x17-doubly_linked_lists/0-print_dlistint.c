#include "lists.h"

/**
 * print_dlistint - Function to print all content of a list.
 * @h: pointer to the structure.
 * Return: the new count.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *point = h;
	size_t count = 0;

	while (point)
	{
		printf("%i\n", point->n);
		count++;
		point = point->next;
	}

	return (count);
}
