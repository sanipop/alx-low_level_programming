#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t count = 0, loop_detected = 0;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
loop_detected = 1;
break;
}
count++;
}

if (loop_detected)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}

if (fast != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
count++;
}

return count;
}

