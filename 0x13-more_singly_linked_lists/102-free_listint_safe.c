#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t s = 0;
	int x;
	listint_t *o;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			o = (*h)->next;
			free(*h);
			*h = o;
			s++;
		}
		else
		{
			free(*h);
			*h = NULL;
			s++;
			break;
		}
	}

	*h = NULL;

return (s);
}

