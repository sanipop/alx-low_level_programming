#include "lists.h"

/**
 * find_listint_loop - Finds the starting node of a loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL 
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

