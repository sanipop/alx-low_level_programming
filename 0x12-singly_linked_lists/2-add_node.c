#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - appendd node at the start of the list
 * @head: Pointer to a pointer of the list_t structure
 * @str: Fresh string to insert into the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
