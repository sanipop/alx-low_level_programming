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
    listint_t *slow = *h, *fast = *h;
    size_t count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) // Loop detected
        {
            while (*h != slow)
            {
                listint_t *temp = *h;
                *h = (*h)->next;
                free(temp);
                count++;
            }

            *h = NULL;
            while (slow->next != *h)
            {
                listint_t *temp = slow;
                slow = slow->next;
                free(temp);
                count++;
            }

            free(*h);
            count++;
            return count;
        }
    }

    while (*h != NULL)
    {
listint_t *temp = *h;
*h = (*h)->next;
free(temp);
count++;
}

return count;
}
