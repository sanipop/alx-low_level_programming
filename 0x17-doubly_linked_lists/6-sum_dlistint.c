#include "lists.h"

/**
 * sum_dlistint - function to sum all the integer in a structure.
 * @head: Entry point of the function.
 * Return: The sum value, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int Add = 0;

	while (list)
	{
		Add += list->n;
		list = list->next;
	}

	return (Add);
}
