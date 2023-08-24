#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node to the end of a linked list
 * @head: Pointer to a pointer of the list_t list
 * @str: String to place within the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *sub = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (sub->next)
		sub = sub->next;

	sub->next = fresh;

	return (fresh);
}
