#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *sub;

	while (head)
	{
		sub = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
