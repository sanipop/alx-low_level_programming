#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head)


/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				nodes++;
				x = x->next;
			}

			return (nodes);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -a save print for list.
 * @head: a pointer var.
 *
 * Return: the fxn return var.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

